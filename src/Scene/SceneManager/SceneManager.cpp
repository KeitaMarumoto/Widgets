#include "SceneManager.h"

SceneManager::SceneManager()
{
	scene = SceneName::TITLE;
}

void SceneManager::Update()
{
	switch (scene) {
	case SceneName::TITLE:
		title.Update();
		break;

	case SceneName::GAMEMAIN:
		gamemain.Update();
		break;

	case SceneName::RESULT:
		result.Update();
		break;
	}
}

void SceneManager::Draw()
{
	switch (scene) {
	case SceneName::TITLE:
		title.Draw();
		break;

	case SceneName::GAMEMAIN:
		gamemain.Draw();
		break;

	case SceneName::RESULT:
		result.Draw();
		break;
	}
}

void SceneManager::Shift()
{
	switch (scene) {
	case SceneName::TITLE:
		scene = title.Shift();
		break;

	case SceneName::GAMEMAIN:
		scene = gamemain.Shift();
		break;

	case SceneName::RESULT:
		scene = result.Shift();
		break;
	}
}
