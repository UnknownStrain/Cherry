#include "Cherry.h"
#include "HostApplication.h"

int SDL_main(int argc, char* argv[])
{
	HostApplication app;
	HostApplicationSettings host_settings;
	host_settings.Window.Title = "DevMode (v 0.0.1)";
	host_settings.Window.Width = 640;
	host_settings.Window.Height = 480;

	app.Start(host_settings);
	if (app.IsStarted())
	{
	}
	app.Quit();
	return 0;
}