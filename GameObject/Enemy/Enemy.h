#pragma once
#include "GameObject/BaseCharacter/BaseCharacter.h"
#include "Input/InputManager.h"

class Enemy : public BaseCharacter {
public:
	void Init() override;
	void Update() override;
	void Draw() override;

	bool GetIsAlive() { return IsAlive; }
	Status GetStatus() { return status; }

private:
	bool IsAlive = true;
};
