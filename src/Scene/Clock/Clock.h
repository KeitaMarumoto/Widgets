#pragma once
#include "../../Singleton.h"
class Clock
{
private:

public:
	Clock();
	void Update();
	void Draw();
	SceneName Shift();
};