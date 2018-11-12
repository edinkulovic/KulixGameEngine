#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace KulixGameEngine 
{
	class KULIX_GAME_ENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core logging macros
#define KX_CORE_TRACE(...)	::KulixGameEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KX_CORE_INFO(...)	::KulixGameEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KX_CORE_WARN(...)	::KulixGameEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KX_CORE_ERROR(...)	::KulixGameEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KX_CORE_FATAL(...)	::KulixGameEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client logging macros
#define KX_TRACE(...)		::KulixGameEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KX_INFO(...)		::KulixGameEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define KX_WARN(...)		::KulixGameEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KX_ERROR(...)		::KulixGameEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define KX_FATAL(...)		::KulixGameEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)