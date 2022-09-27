#include "GameLoop.h"

void GameLoop::Initialise()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
		return;
	}
	else {
		int imgFlags = IMG_INIT_PNG;
		if (!(IMG_Init(imgFlags) & imgFlags))
		{
			std::cerr << "SDL_image could not initialize! SDL_image Error: " << IMG_GetError() << std::endl;
			return;
		}

		window = SDL_CreateWindow("IntoGames", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 256, SDL_WINDOW_SHOWN);

		if (window == NULL) {
			std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
			return;
		}

		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
		if (renderer == NULL) {
			std::cerr << "SDL could not initialize renderer! SDL_Error: " << SDL_GetError() << std::endl;
		}
	}

}

void GameLoop::LoadContent()
{
	player = new Player(renderer, "assets/MainCharacters/Character.png", 50, 10);
	enemy1 = new Enemy(renderer, "assets/images/enemy.png", 50, 100);
}

bool GameLoop::Update()
{
	SDL_Delay(20);

	SDL_Event e;
	/* Poll for events. SDL_PollEvent() returns 0 when there are no  */
	/* more events on the event queue, our while loop will exit when */
	/* that occurs.                                                  */

	

	while (SDL_PollEvent(&e) != 0) {

		if (e.type == SDL_QUIT) {
			return false;
		}


		player->HandleInput(e);
	}


	// Update game state

	if (bool collision = player->IsCollidingWith(*enemy1)) {
		std::cout << "colliding" << std::endl;
	}

	return true;
}



void GameLoop::Render()
{
	// Change the background colour here
	SDL_SetRenderDrawColor(renderer, 60, 60, 60, 0);
	SDL_RenderClear(renderer);

	// Render any other object here.
	enemy1->Render();
	player->Render();

	SDL_RenderPresent(renderer);
}

void GameLoop::UnloadContent()
{

}

void GameLoop::Quit()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	window = NULL;
	SDL_Quit();
}
