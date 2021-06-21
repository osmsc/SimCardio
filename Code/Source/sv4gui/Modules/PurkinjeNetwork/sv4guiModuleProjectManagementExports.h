
#ifndef SV4GUIMODULEPROJECTMANAGEMENT_EXPORT_H
#define SV4GUIMODULEPROJECTMANAGEMENT_EXPORT_H

#ifdef _SIMVASCULAR_MODULE_PROJECTMANAGEMENT_STATIC_DEFINE
#  define SV4GUIMODULEPROJECTMANAGEMENT_EXPORT
#  define SV4GUIMODULEPROJECTMANAGEMENT_NO_EXPORT
#else
#  ifndef SV4GUIMODULEPROJECTMANAGEMENT_EXPORT
#    ifdef _simvascular_module_projectmanagement_EXPORTS
        /* We are building this library */
#      define SV4GUIMODULEPROJECTMANAGEMENT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SV4GUIMODULEPROJECTMANAGEMENT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SV4GUIMODULEPROJECTMANAGEMENT_NO_EXPORT
#    define SV4GUIMODULEPROJECTMANAGEMENT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED
#  define SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED_EXPORT
#  define SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED_EXPORT SV4GUIMODULEPROJECTMANAGEMENT_EXPORT SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED
#endif

#ifndef SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED_NO_EXPORT
#  define SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED_NO_EXPORT SV4GUIMODULEPROJECTMANAGEMENT_NO_EXPORT SV4GUIMODULEPROJECTMANAGEMENT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SV4GUIMODULEPROJECTMANAGEMENT_NO_DEPRECATED
#    define SV4GUIMODULEPROJECTMANAGEMENT_NO_DEPRECATED
#  endif
#endif

#endif