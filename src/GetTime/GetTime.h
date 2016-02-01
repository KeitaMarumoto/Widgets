#pragma once
#include "../Singleton.h"

//��̉�Ƃ��Ă܂Ƃ߂�������Q
//�y�т���Pos��Size
struct NowTimes 
{
	string time;
	string h_year;
	string second;

	Vec2f time_pos;
	Vec2f year_pos;
	Vec2f wday_pos;

	Vec2f time_size;
	Vec2f year_size;
	Vec2f wday_size;
};

//Get�������Ԃ𕶎���Ƃ��Ċi�[����ϐ��Q
struct StrTimes 
{
	string h_years;
	string months;
	string week;
	string days;
	string hours;
	string minutes;
	string seconds;
};

class GetTime {
private:
	Font font = ("res/SAO_font.otf");

	time_t current;
	tm *local;

	NowTimes now;
	StrTimes str;

public:
	GetTime();
	~GetTime();
	void Update();
	void Draw();
	void ChangeTime();
	void Combine();
};