#include "Dustk.h"

class Sandbox :public DustK::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};

DustK::Application* DustK::CreateApplication()
{
	return new Sandbox();
}
