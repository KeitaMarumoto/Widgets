#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <ctime>
using namespace std;

#define env App::get()


enum Window 
{
	WIDTH = 512,
	HEIGHT = 512
};


class App
{
public:
	static AppEnv& get(){
		static AppEnv Env(Window::WIDTH, Window::HEIGHT, false, true);
		return Env;
	}
};


enum class SceneName
{
	TITLE,
	GAMEMAIN,
	RESULT
};

enum WeekDay
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};