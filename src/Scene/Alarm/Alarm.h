#pragma once
#include "../../Singleton.h"

//TODO:設定時間で何かしらの動作をする、という機能をα版で実装。

class Alarm
{
private:

public:
	Alarm();
	void Update();
	void Draw();
	SceneName Shift();
};