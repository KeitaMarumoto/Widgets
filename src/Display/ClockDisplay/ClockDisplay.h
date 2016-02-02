#pragma once
#include"../../Singleton.h"

class ClockDisplay
{
private:
	Vec2f pos;
	Vec2f size;
	Texture image;
	Texture image_N;
	Texture image_O;

public:
	ClockDisplay(Vec2f p, Vec2f s, Texture i_N);
	ClockDisplay(Vec2f p, Vec2f s, Texture i_N, Texture i_O);
	void Update();
	void Draw();
	bool Collision();
};