#pragma once
#include <Novice.h>
#include "Vector2.h"
struct Status {
	Vector2 pos;
	Vector2 size;
	float speed;
};


class BaseCharacter {
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

protected:
	Status status;
};
