#pragma once
#include "../../Singleton.h"
#include "../../GetTime/GetTime.h"
#include "../../Display/ClockDisplay/ClockDisplay.h"
#include "../../Display/ClockDisplay/ClockTextures/ClockTextures.h"
#include "../../Display/ClockDisplay/ClockTextureLocation/ClockTextureLocation.h"

//TODO:時計の表示をセンタリング。レイアウト作成。

class Clock
{
private:
	GetTime get_time;
	ClockTextures textures;
	ClockTextureLocation location;
	vector<shared_ptr<ClockDisplay>> clock_display;

public:
	Clock();
	void Update();
	void Draw();
	SceneName Shift();
};