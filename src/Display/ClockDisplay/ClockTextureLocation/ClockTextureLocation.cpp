#include "ClockTextureLocation.h"

ClockTextureLocation::ClockTextureLocation()
{
	time_pos = Vec2f(0.0f, 0.0f);
	time_size = Vec2f(450.0f, 450.0f);
	year_pos = Vec2f(-300.0f, -100.0f);
	year_size = Vec2f(150.0f, 150.0f);
	alarm_pos = Vec2f(-Window::WIDTH / 2 + 10, -Window::HEIGHT / 2 + 10);
	alarm_size = Vec2f(150.0f, 150.0f);
}