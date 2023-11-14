#pragma once
#include <memory>
#include "IScene.h"
#include "ImGuiManager.h"
#include "Input/InputManager.h"
#include "GameObject/Player/Player.h"
#include "GameObject/Enemy/Enemy.h"

class StageScene :public IScene {
public:
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* inputManager = nullptr;
	std::unique_ptr<Player> player_;
	std::unique_ptr<Enemy> enemy_;
};
