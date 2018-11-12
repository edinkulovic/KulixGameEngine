#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace KulixGameEngine 
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("KULLIX_GAME_ENGINE");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_CoreLogger = spdlog::stdout_color_mt("CLIENT");
		s_CoreLogger->set_level(spdlog::level::trace);
	}
}