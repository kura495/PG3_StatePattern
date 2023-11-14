#pragma once
#include "GameObject/BaseCharacter/BaseCharacter.h"
#include "Input/InputManager.h"

class Player :public BaseCharacter {
public:
	void Init() override;
	void Update() override;
	void Draw() override;


private:
	InputManager* inputManager = nullptr;
};
