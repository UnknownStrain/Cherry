#pragma once
#include <string>
struct HostApplicationSettings
{
	struct
	{
		std::string Title;
		int Width, Height;
		bool UseFullScreen = false;
	}
	Window;
};