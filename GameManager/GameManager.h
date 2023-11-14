#pragma once
#include <memory>
#include "Scenes/TitleScene.h"
#include "Scenes/StageScene.h"

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

	InputManager* inputManager = nullptr;
};
