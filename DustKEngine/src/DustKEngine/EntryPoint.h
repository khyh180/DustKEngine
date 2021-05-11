#pragma once

#ifdef DK_PLATFORM_WINDOWS

extern DustK::Application* DustK::CreateApplication();

int main(int argc,char** argv)
{
	auto kk=DustK::CreateApplication();
	kk->Run();
	delete kk;
}

#endif 

