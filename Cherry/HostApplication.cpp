#include "HostApplication.h"

void HostApplication::Start(HostApplicationSettings settings)
{
	SDL_SetHint(SDL_HINT_RENDER_DRIVER, "opengl");

	int retcode;
	// Create a window
	retcode = SDL_CreateWindowAndRenderer(settings.Window.Width, settings.Window.Height, SDL_WINDOW_SHOWN, &window, &renderer);
	if (retcode < 0)
	{
		// Error
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "",  ("Failed to start host application\n" + std::string(SDL_GetError())).c_str(), NULL);
	}

	// Window features
	SDL_SetWindowTitle(window, settings.Window.Title.c_str());

	// Launch a host thread


	isStarted = true;
}

void HostApplication::Quit()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

const bool HostApplication::IsStarted() const
{
	return isStarted;
}
