#include "Result.h"

Result::Result()
{
}

void Result::Update()
{
}

void Result::Draw()
{
	
}

SceneName Result::Shift()
{
	if (env.isPushKey('A')) {
		return SceneName::TITLE;
	}
	return SceneName::RESULT;
}
