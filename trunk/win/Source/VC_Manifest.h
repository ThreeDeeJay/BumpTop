#ifndef VC_MANIFEST_H
#define VC_MANIFEST_H 

/*----------------------------------------------------------------------------*/
#pragma comment(lib, "legacy_stdio_definitions.lib")
#if (_MSC_VER >= 1400) && (_MSC_VER < 1600000000000000)
#pragma comment(lib, "legacy_stdio_definitions.lib")
/*----------------------------------------------------------------------------*/

#pragma message ( "Setting up manifest..." )

/*----------------------------------------------------------------------------*/
#pragma comment(lib, "legacy_stdio_definitions.lib")
#ifndef _CRT_ASSEMBLY_VERSION
#include <crtassem.h>
#endif 

/*----------------------------------------------------------------------------*/

#ifdef WIN64
    #pragma message ( "processorArchitecture=amd64" )
    #define MF_PROCESSORARCHITECTURE "amd64"
#else
    #pragma message ( "processorArchitecture=x86" )
    #define MF_PROCESSORARCHITECTURE "x86"
#endif 
#pragma comment(lib, "legacy_stdio_definitions.lib")
/*----------------------------------------------------------------------------*/

#pragma message ( "Microsoft.Windows.Common-Controls=6.0.0.0") 
#pragma comment ( linker,"/manifestdependency:\"type='win32' " \
                          "name='Microsoft.Windows.Common-Controls' " \
                          "version='6.0.0.0' " \
                          "processorArchitecture='" MF_PROCESSORARCHITECTURE "' " \
                          "publicKeyToken='6595b64144ccf1df'\"" )
#pragma comment(lib, "legacy_stdio_definitions.lib")
/*----------------------------------------------------------------------------*/

#ifdef _DEBUG
    #pragma message ( __LIBRARIES_ASSEMBLY_NAME_PREFIX ".DebugCRT=" _CRT_ASSEMBLY_VERSION ) 
    #pragma comment(linker,"/manifestdependency:\"type='win32' "            \
                "name='" __LIBRARIES_ASSEMBLY_NAME_PREFIX ".DebugCRT' "         \
                "version='" _CRT_ASSEMBLY_VERSION "' "                          \
                "processorArchitecture='" MF_PROCESSORARCHITECTURE "' "         \
                "publicKeyToken='" _VC_ASSEMBLY_PUBLICKEYTOKEN "'\"")
#else
    #pragma message ( __LIBRARIES_ASSEMBLY_NAME_PREFIX ".CRT=" _CRT_ASSEMBLY_VERSION ) 
    #pragma comment(linker,"/manifestdependency:\"type='win32' "            \
                "name='" __LIBRARIES_ASSEMBLY_NAME_PREFIX ".CRT' "              \
                "version='" _CRT_ASSEMBLY_VERSION "' "                          \
                "processorArchitecture='" MF_PROCESSORARCHITECTURE "' "         \
                "publicKeyToken='" _VC_ASSEMBLY_PUBLICKEYTOKEN "'\"")
#endif

/*----------------------------------------------------------------------------*/

#if 0	// not using MFC 
#pragma comment(lib, "legacy_stdio_definitions.lib")
#ifdef _MFC_ASSEMBLY_VERSION
    #ifdef _DEBUG
        #pragma message ( __LIBRARIES_ASSEMBLY_NAME_PREFIX ".MFC=" _CRT_ASSEMBLY_VERSION ) 
        #pragma comment(linker,"/manifestdependency:\"type='win32' "            \
                        "name='" __LIBRARIES_ASSEMBLY_NAME_PREFIX ".MFC' "              \
                        "version='" _MFC_ASSEMBLY_VERSION "' "                          \
                        "processorArchitecture='" MF_PROCESSORARCHITECTURE "' "         \
                        "publicKeyToken='" _VC_ASSEMBLY_PUBLICKEYTOKEN "'\"")
    #else
        #pragma message ( __LIBRARIES_ASSEMBLY_NAME_PREFIX ".MFC=" _CRT_ASSEMBLY_VERSION ) 
        #pragma comment(linker,"/manifestdependency:\"type='win32' "            \
                        "name='" __LIBRARIES_ASSEMBLY_NAME_PREFIX ".MFC' "              \
                        "version='" _MFC_ASSEMBLY_VERSION "' "                          \
                        "processorArchitecture='" MF_PROCESSORARCHITECTURE "' "         \
                        "publicKeyToken='" _VC_ASSEMBLY_PUBLICKEYTOKEN "'\"")
    #endif
#endif /* _MFC_ASSEMBLY_VERSION */
#endif 

/*----------------------------------------------------------------------------*/

#endif /* _MSC_VER */

/*----------------------------------------------------------------------------*/
#pragma comment(lib, "legacy_stdio_definitions.lib")

#endif // VC_MANIFEST_H

