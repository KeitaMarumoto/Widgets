#pragma once
#include "../../Singleton.h"

//TODO:時計の表示をセンタリング。レイアウト作成。

class Clock
{
private:

public:
	Clock();
	void Update();
	void Draw();
	SceneName Shift();
};