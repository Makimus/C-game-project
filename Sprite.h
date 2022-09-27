#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <iostream>
#include "GameObject.h"


class Sprite : public GameObject {
public:
	Sprite(SDL_Renderer* renderer,
		std::string pathToSurface,
		int _x, int _y);
	virtual ~Sprite() {}

	virtual void Render();
	virtual void Update(double deltaTime);
	
	void SetVisible(bool visible) { this->visible = visible; }
	bool GetVisible() const { return visible; }

	bool IsCollidingWith(Sprite& _sprite);

private:
	SDL_Rect destinationRect;
	SDL_Texture* texture;
	bool visible;


protected:
	SDL_Renderer* renderer;
};