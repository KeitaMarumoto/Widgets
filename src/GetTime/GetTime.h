#pragma once
#include "../Singleton.h"

class GetTime {
private:
	Font font = ("res/SAO_font.otf");

	time_t current;
	tm *local;

	string years;
	string months;
	string week;
	string days;
	string hours;
	string minutes;
	string seconds;

	string now_year;
	string now_time;

public:
	GetTime();
	~GetTime();
	void Update();
	void Draw();
};