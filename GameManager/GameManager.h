#pragma once
#include <memory>
#include "Scenes/TitleScene.h"

class GameManager {
public:
	GameManager();
	~GameManager();

	//void Init();
	void Update();
	void Draw();

private:
	

	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int prevSceneNo_;


};
