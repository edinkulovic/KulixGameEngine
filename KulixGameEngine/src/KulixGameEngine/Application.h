#pragma once

#include "Core.h"

namespace KulixGameEngine 
{
	class KULIX_GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in the client.
	Application* CreateApplication();
}
