#!/usr/bin/env python

import argparse
import logging
import re, ast

from FractalTree import *
from parameters import Parameters

def parse_args():
    """ Parse command-line arguments."""
    parser = argparse.ArgumentParser()
    parser.add_argument("-i",   "--infile",              help="input file")
    parser.add_argument("-o",   "--outfile",             help="output file")
    parser.add_argument("-in",  "--init_node",           help="initial node")
    parser.add_argument("-sn",  "--second_node",         help="second node")
    parser.add_argument("-ng",  "--num_branch_gen",      help="number of branch generations")
    parser.add_argument("-ab",  "--avg_branch_length",   help="average branch length")
    parser.add_argument("-ba",  "--branch_angle",        help="branch angle")
    parser.add_argument("-r",   "--repulsive_parameter", help="repulsive parameter")
    parser.add_argument("-bl",  "--branch_seg_length",   help="branch segment length")
    return parser.parse_args(), parser.print_help

def init_logging():
    import logging
    logger = logging.getLogger('fractal-tree')
    logger.setLevel(logging.INFO)
    console_handler = logging.StreamHandler()
    formatter = logging.Formatter('[%(name)s] %(levelname)s - %(message)s')
    console_handler.setFormatter(formatter)
    logger.addHandler(console_handler)

def run(**kwargs):
    """ Execute the fractal tree generation using passed parameters.
    """
    init_logging()
    logger = logging.getLogger('fractal-tree')

    ## Create a Parameters object to store parameters.
    param = Parameters()

    ## Process parameters.
    infile = None
    outfile = None
    init_node = None
    second_node = None
    for key, value in kwargs.items():
        #print("{0} = {1}".format(key, value))
        if value == None:
            continue
        if key == "infile":
            infile  = value
            logger.info("Input file name %s" % infile)
            param.input_file_name = infile
        elif key == "outfile":
            outfile  = value
            logger.info("Output file name %s" % outfile)
            param.output_file_name = outfile
        elif key == "init_node":
            init_node = value
            param.init_node = np.array(ast.literal_eval(value))
            logger.info("Initial node  %s" % str(param.init_node))
        elif key == "second_node":
            second_node = value
            param.second_node = np.array(ast.literal_eval(value))
            logger.info("Second node  %s" % str(param.second_node))
        elif key == "num_branch_gen":
            param.N_it = int(value)
        elif key == "avg_branch_length":
            param.length = float(value)
        elif key == "branch_angle":
            param.branch_angle = float(value)
        elif key == "repulsive_parameter":
            param.w = float(value)
        elif key == "branch_seg_length":
            param.l_segment = float(value)
        else:
            logger.error("Unknown parameter name %s" % key)
            return
    #_for key, value in kwargs.items()

    if infile == None:
        logger.error("No input file name given.")
        return 

    if outfile == None:
        logger.error("No output file name given.")
        return 

    if init_node == None:
        logger.error("No initial node given.")
        return 

    if second_node == None:
        logger.error("No second node given.")
        return 

    ## Calculate the fractal tree.
    branches, nodes = Fractal_Tree_3D(param)

if __name__ == '__main__':
    args, print_help = parse_args()
    run(**vars(args))

