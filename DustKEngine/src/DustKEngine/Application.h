#pragma once
#include "Core.h"

namespace DustK 
{
	class DK_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}


