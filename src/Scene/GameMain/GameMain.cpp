#include "GameMain.h"

GameMain::GameMain()
{
}

void GameMain::Update()
{
}

void GameMain::Draw()
{
	
}

SceneName GameMain::Shift()
{
	if (env.isPushKey('A')) {
		return SceneName::RESULT;
	}
	return SceneName::GAMEMAIN;
}
