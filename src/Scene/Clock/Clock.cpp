#include "Clock.h"

//TODO:clock_displayへAlarmの情報を入れ、表示させる。(そうじゃないと未定義入るゾ)

Clock::Clock()
{
	clock_display.push_back(make_shared<ClockDisplay>(-location.time_size / 2, location.time_size,
													  textures.bg));
}

void Clock::Update()
{
	get_time.Update();
	for (int i = 0; i < clock_display.size(); ++i) {
		clock_display.at(i)->Update();
	}
}

void Clock::Draw()
{
	for (int i = 0; i < clock_display.size(); ++i) {
		clock_display.at(i)->Draw();
	}
	get_time.Draw();
}

SceneName Clock::Shift()
{
	if (env.isPushButton(Mouse::LEFT)) {
		//アラームのCollision()がtrueならアラームへ移動
		if (clock_display.at(1)->Collision()) {
			return SceneName::ALARM;
		}
	}
	return SceneName::CLOCK;
}
