#pragma once
#include "GameObject/BaseCharacter/BaseCharacter.h"
#include "GameObject/Bullet/Bullet.h"
#include "Input/InputManager.h"

class Enemy : public BaseCharacter {
public:
	void Init() override;
	void Update() override;
	void Draw() override;

	bool GetIsAlive() { return IsAlive; }
	void OnCollision() { IsAlive = false; }

	Status GetStatus() { return status; }

private:
	bool IsAlive = true;

};
