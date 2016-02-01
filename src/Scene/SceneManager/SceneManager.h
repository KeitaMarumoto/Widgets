#pragma once
#include "../../Singleton.h"
#include "../Start/Start.h"
#include "../Clock/Clock.h"
#include "../Alarm/Alarm.h"

class SceneManager
{
private:
	Start start;
	Clock clock;
	Alarm alarm;
	SceneName scene;

public:
	SceneManager();
	void Update();
	void Draw();
	void Shift();
};