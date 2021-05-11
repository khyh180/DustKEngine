#pragma once

#ifdef DK_PLATFORM_WINDOWS 
	#ifdef DK_BUILD_DLL
		#define DK_API __declspec(dllimport)
	#else
		#define DK_API __declspec(dllexport)
	#endif
#else 
	#error DustK Only Support Windows
#endif
