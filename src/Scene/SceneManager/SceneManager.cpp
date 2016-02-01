#include "SceneManager.h"

SceneManager::SceneManager()
{
	scene = SceneName::START;
}

void SceneManager::Update()
{
	switch (scene) {
	case SceneName::START:
		start.Update();
		break;

	case SceneName::CLOCK:
		clock.Update();
		break;

	case SceneName::ALARM:
		alarm.Update();
		break;
	}
}

void SceneManager::Draw()
{
	switch (scene) {
	case SceneName::START:
		start.Draw();
		break;

	case SceneName::CLOCK:
		clock.Draw();
		break;

	case SceneName::ALARM:
		alarm.Draw();
		break;
	}
}

void SceneManager::Shift()
{
	switch (scene) {
	case SceneName::START:
		scene = start.Shift();
		break;

	case SceneName::CLOCK:
		scene = clock.Shift();
		break;

	case SceneName::ALARM:
		scene = alarm.Shift();
		break;
	}
}