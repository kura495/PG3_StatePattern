#pragma once
#include <memory>
#include "GameObject/BaseCharacter/BaseCharacter.h"
#include "Input/InputManager.h"
#include "GameObject/Bullet/Bullet.h"

class Player :public BaseCharacter {
public:
	void Init() override;
	void Update() override;
	void Draw() override;


private:
	InputManager* inputManager = nullptr;

	std::unique_ptr<Bullet> bullet_;
};
