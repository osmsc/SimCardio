
#ifndef SV4GUIMODULEPATH_EXPORT_H
#define SV4GUIMODULEPATH_EXPORT_H

#ifdef _SIMVASCULAR_MODULE_PATH_STATIC_DEFINE
#  define SV4GUIMODULEPATH_EXPORT
#  define SV4GUIMODULEPATH_NO_EXPORT
#else
#  ifndef SV4GUIMODULEPATH_EXPORT
#    ifdef _simvascular_module_path_EXPORTS
        /* We are building this library */
#      define SV4GUIMODULEPATH_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SV4GUIMODULEPATH_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SV4GUIMODULEPATH_NO_EXPORT
#    define SV4GUIMODULEPATH_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SV4GUIMODULEPATH_DEPRECATED
#  define SV4GUIMODULEPATH_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SV4GUIMODULEPATH_DEPRECATED_EXPORT
#  define SV4GUIMODULEPATH_DEPRECATED_EXPORT SV4GUIMODULEPATH_EXPORT SV4GUIMODULEPATH_DEPRECATED
#endif

#ifndef SV4GUIMODULEPATH_DEPRECATED_NO_EXPORT
#  define SV4GUIMODULEPATH_DEPRECATED_NO_EXPORT SV4GUIMODULEPATH_NO_EXPORT SV4GUIMODULEPATH_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SV4GUIMODULEPATH_NO_DEPRECATED
#    define SV4GUIMODULEPATH_NO_DEPRECATED
#  endif
#endif

#endif
