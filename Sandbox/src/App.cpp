#include <KulixGameEngine.h>

class Sandbox : public KulixGameEngine::Application 
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

KulixGameEngine::Application* KulixGameEngine::CreateApplication()
{
	return new Sandbox();
}