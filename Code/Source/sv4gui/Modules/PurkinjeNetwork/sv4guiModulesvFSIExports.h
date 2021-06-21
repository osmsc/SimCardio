
#ifndef SV4GUIMODULESVFSI_EXPORT_H
#define SV4GUIMODULESVFSI_EXPORT_H

#ifdef _SIMVASCULAR_MODULE_SVFSI_STATIC_DEFINE
#  define SV4GUIMODULESVFSI_EXPORT
#  define SV4GUIMODULESVFSI_NO_EXPORT
#else
#  ifndef SV4GUIMODULESVFSI_EXPORT
#    ifdef _simvascular_module_svfsi_EXPORTS
        /* We are building this library */
#      define SV4GUIMODULESVFSI_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SV4GUIMODULESVFSI_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SV4GUIMODULESVFSI_NO_EXPORT
#    define SV4GUIMODULESVFSI_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SV4GUIMODULESVFSI_DEPRECATED
#  define SV4GUIMODULESVFSI_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SV4GUIMODULESVFSI_DEPRECATED_EXPORT
#  define SV4GUIMODULESVFSI_DEPRECATED_EXPORT SV4GUIMODULESVFSI_EXPORT SV4GUIMODULESVFSI_DEPRECATED
#endif

#ifndef SV4GUIMODULESVFSI_DEPRECATED_NO_EXPORT
#  define SV4GUIMODULESVFSI_DEPRECATED_NO_EXPORT SV4GUIMODULESVFSI_NO_EXPORT SV4GUIMODULESVFSI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SV4GUIMODULESVFSI_NO_DEPRECATED
#    define SV4GUIMODULESVFSI_NO_DEPRECATED
#  endif
#endif

#endif
