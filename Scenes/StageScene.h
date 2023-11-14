#pragma once
#include <memory>
#include "IScene.h"
#include "ImGuiManager.h"
#include "Input/InputManager.h"
#include "GameObject/Player/Player.h"

class StageScene :public IScene {
public:
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* inputManager = nullptr;
	std::unique_ptr<Player> player_;
};
