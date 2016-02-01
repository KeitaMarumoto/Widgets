#include "Clock.h"

Clock::Clock()
{
}

void Clock::Update()
{
}

void Clock::Draw()
{
	
}

SceneName Clock::Shift()
{
	if (env.isPushKey('A')) {
		return SceneName::ALARM;
	}
	return SceneName::CLOCK;
}
