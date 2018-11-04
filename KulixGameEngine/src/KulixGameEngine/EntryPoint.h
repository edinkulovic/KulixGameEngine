#pragma once

#ifdef KX_PLATFORM_WINDOWS
	
extern KulixGameEngine::Application* KulixGameEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = KulixGameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif