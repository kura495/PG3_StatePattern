#pragma once
#include "GameObject/BaseCharacter/BaseCharacter.h"

class Bullet {
public:
	
	void Init();
	void Update();
	void Draw();

	void SetPos(Vector2 position) { status.pos = position; }

private:
	Status status;
};
