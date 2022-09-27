#include "Sprite.h"


Sprite::Sprite(SDL_Renderer* sdlRenderer, std::string pathToSurface, int _x, int _y) 
	: renderer(sdlRenderer), GameObject(_x, _y)
{
	SDL_Surface* surface = IMG_Load(pathToSurface.c_str());

	if (surface == NULL) {
		std::cerr << "Could not load surface at path: " << pathToSurface << std::endl;
		return;
	}

	visible = true;

	texture = SDL_CreateTextureFromSurface(renderer, surface);
	
	SDL_FreeSurface(surface);

}



void Sprite::Update(double deltaTime) {
}

bool Sprite::IsCollidingWith(Sprite& _OtherSprite)
{
	bool collision = SDL_HasIntersection(&this->destinationRect, &_OtherSprite.destinationRect);
	return collision;
}



void Sprite::Render() {

	if (this->visible) {


		destinationRect.x = xPosition;
		destinationRect.y = yPosition;
		destinationRect.h = 32;
		destinationRect.w = 32;

		SDL_RenderCopy(renderer, texture, NULL, &destinationRect);

	}
}


