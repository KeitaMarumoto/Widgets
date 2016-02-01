#include "GetTime.h"

GetTime::GetTime()
{
	Update();
}

GetTime::~GetTime()
{

}

void GetTime::Update()
{
	ChangeTime();
	Combine();
}

void GetTime::Draw()
{
	font.read("res/SAO_font.otf");
	font.size(100);

	//時間描画
	font.draw(now.time, Vec2f(-100.0f, 0.0f), Color::white);
	now.time_size = font.drawSize(now.time);

	//年描画
	font.draw(now.h_year, Vec2f(0.0f, 100.0f), Color::white);

	font.size(60);

	//秒描画
	font.draw(now.second, Vec2f(-100.0f + now.time_size.x(), 0.0f), Color::white);
}

void GetTime::ChangeTime()
{
	time(&current);
	local = localtime(&current);
	str.h_years = to_string(local->tm_year - 88);
	str.months = to_string(local->tm_mon + 1);
	str.days = to_string(local->tm_mday);
	str.hours = to_string(local->tm_hour);
	str.minutes = to_string(local->tm_min);
	str.seconds = to_string(local->tm_sec);

	switch (local->tm_wday)
	{
	case WeekDay::SUNDAY:
		str.week = "Sun";
		break;

	case WeekDay::MONDAY:
		str.week = "Mon";
		break;

	case WeekDay::TUESDAY:
		str.week = "Tues";
		break;

	case WeekDay::WEDNESDAY:
		str.week = "Wed";
		break;

	case WeekDay::THURSDAY:
		str.week = "Thurs";
		break;

	case WeekDay::FRIDAY:
		str.week = "Fri";
		break;

	case WeekDay::SATURDAY:
		str.week = "Sat";
		break;
	}
}

void GetTime::Combine()
{
	//平成年表示
	now.h_year = "H." + str.h_years;

	//分表示(1桁の時は0を前に入れる)
	if (local->tm_min < 10) {
		now.time = str.hours + ":" + "0" + str.minutes;
	}
	else {
		now.time = str.hours + ":" + str.minutes;
	}
	
	//秒表示(1桁の時は0を前に入れる)
	if (local->tm_sec < 10) {
		now.second = " 0" + str.seconds;
	}
	else {
		now.second = " " + str.seconds;
	}
}