
#ifndef SV4GUIMODULEMESH_EXPORT_H
#define SV4GUIMODULEMESH_EXPORT_H

#ifdef _SIMVASCULAR_MODULE_MESH_STATIC_DEFINE
#  define SV4GUIMODULEMESH_EXPORT
#  define SV4GUIMODULEMESH_NO_EXPORT
#else
#  ifndef SV4GUIMODULEMESH_EXPORT
#    ifdef _simvascular_module_mesh_EXPORTS
        /* We are building this library */
#      define SV4GUIMODULEMESH_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SV4GUIMODULEMESH_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SV4GUIMODULEMESH_NO_EXPORT
#    define SV4GUIMODULEMESH_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SV4GUIMODULEMESH_DEPRECATED
#  define SV4GUIMODULEMESH_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SV4GUIMODULEMESH_DEPRECATED_EXPORT
#  define SV4GUIMODULEMESH_DEPRECATED_EXPORT SV4GUIMODULEMESH_EXPORT SV4GUIMODULEMESH_DEPRECATED
#endif

#ifndef SV4GUIMODULEMESH_DEPRECATED_NO_EXPORT
#  define SV4GUIMODULEMESH_DEPRECATED_NO_EXPORT SV4GUIMODULEMESH_NO_EXPORT SV4GUIMODULEMESH_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SV4GUIMODULEMESH_NO_DEPRECATED
#    define SV4GUIMODULEMESH_NO_DEPRECATED
#  endif
#endif

#endif
