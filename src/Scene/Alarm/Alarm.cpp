#include "Alarm.h"

Alarm::Alarm()
{
}

void Alarm::Update()
{
}

void Alarm::Draw()
{
	
}

SceneName Alarm::Shift()
{
	if (env.isPushKey('A')) {
		return SceneName::START;
	}
	return SceneName::ALARM;
}
