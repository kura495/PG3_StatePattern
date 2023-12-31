#pragma once
#include "IScene.h"
#include "ImGuiManager.h"
#include "Input/InputManager.h"

class TitleScene :public IScene{
public:
	void Init() override;
	void Update() override;
	void Draw() override;


private:
	InputManager* inputManager = nullptr;
};
