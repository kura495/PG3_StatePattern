#include "Bullet.h"

void Bullet::Init() {
	status.pos = {1300, 0};
	status.size = {32, 32};
	status.speed = 5.0f;
}

void Bullet::Update() { 
	if (status.pos.x > 1300) {
		return;
	}

	status.pos.x += status.speed;
}

void Bullet::Draw() {
	Novice::DrawBox(
	    (int)status.pos.x, (int)status.pos.y, (int)status.size.x, (int)status.size.y, 0.0f, WHITE,
	    kFillModeSolid);
}
