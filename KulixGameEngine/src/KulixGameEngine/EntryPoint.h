#pragma once

#ifdef KX_PLATFORM_WINDOWS
	
extern KulixGameEngine::Application* KulixGameEngine::CreateApplication();

int main(int argc, char** argv)
{
	KulixGameEngine::Log::Init();

	KX_CORE_WARN("CORE Initialized");
	KX_INFO("{0} Initialized", "Client");

	auto app = KulixGameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif