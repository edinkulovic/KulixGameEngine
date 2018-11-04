#pragma once

#ifdef KX_PLATFORM_WINDOWS
	#ifdef KX_BUILD_DLL
		#define KULIX_GAME_ENGINE_API __declspec(dllexport)
	#else
		#define KULIX_GAME_ENGINE_API __declspec(dllimport)
	#endif
#else 
	#error Kulix Game Engine supoprts only Windows for now
#endif