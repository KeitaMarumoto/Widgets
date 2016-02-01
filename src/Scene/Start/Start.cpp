#include "Start.h"

Start::Start()
{

}

void Start::Update()
{
}

void Start::Draw()
{
	
}

SceneName Start::Shift()
{
	if (env.isPushKey('A')) {
		return SceneName::CLOCK;
	}
	return SceneName::START;
}
