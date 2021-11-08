#pragma once
#include <SDL.h>
#include "HostApplicationSettings.h"

class HostApplication
{
public:
	SDL_Window* window;
	SDL_Renderer* renderer;

	bool isStarted = false;
public:
	void Start(HostApplicationSettings settings);
	void Quit();

	const bool IsStarted() const;
};

