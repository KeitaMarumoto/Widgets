#include "lib/framework.hpp"
#include "Singleton.h"
#include "Scene/SceneManager/SceneManager.h"
#include "GetTime/GetTime.h"

GetTime get_time;
SceneManager scene_manager;
int main() {
	env;
	env.bgColor(Color(0.3f, 0.3f, 0.3f));
	while (env.isOpen()) {
		scene_manager.Update();
		get_time.Update();
		env.begin();
		scene_manager.Draw();
		get_time.Draw();
		env.end();

		scene_manager.Shift();
	}
}