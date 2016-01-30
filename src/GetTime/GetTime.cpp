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
	time(&current);
	local = localtime(&current);
	years = to_string(local->tm_year);
	months = to_string(local->tm_mon + 1);
	days = to_string(local->tm_mday);
	hours = to_string(local->tm_hour);
	minutes = to_string(local->tm_min);
	seconds = to_string(local->tm_sec);

	switch (local->tm_wday) 
	{
	case WeekDay::SUNDAY:
		week = "Sun";
		break;

	case WeekDay::MONDAY:
		week = "Mon";
		break;

	case WeekDay::TUESDAY:
		week = "Tues";
		break;

	case WeekDay::WEDNESDAY:
		week = "Wed";
		break;

	case WeekDay::THURSDAY:
		week = "Thurs";
		break;

	case WeekDay::FRIDAY:
		week = "Fri";
		break;

	case WeekDay::SATURDAY:
		week = "Sat";
		break;
	}
}

void GetTime::Draw()
{
	font.read("res/SAO_font.otf");
	font.size(100);
	now_time = hours + ":" + minutes;

	font.draw(now_time, Vec2f(0.0f, 0.0f), Color::white);
}