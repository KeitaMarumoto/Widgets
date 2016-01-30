#include "Title.h"

Title::Title()
{

}

void Title::Update()
{
}

void Title::Draw()
{
	
}

SceneName Title::Shift()
{
	if (env.isPushKey('A')) {
		return SceneName::GAMEMAIN;
	}
	return SceneName::TITLE;
}
