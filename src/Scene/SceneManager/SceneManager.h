#pragma once
#include "../../Singleton.h"
#include "../Title/Title.h"
#include "../GameMain/GameMain.h"
#include "../Result/Result.h"

class SceneManager
{
private:
	Title title;
	GameMain gamemain;
	Result result;
	SceneName scene;

public:
	SceneManager();
	void Update();
	void Draw();
	void Shift();
};