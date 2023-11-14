#include "Enemy.h"

void Enemy::Init() {

	BaseCharacter::status.pos = {400, 300};
	BaseCharacter::status.size = {32, 32};
	BaseCharacter::status.speed = 5.0f;
}

void Enemy::Update() { 
	if (status.pos.y > 720) {
		status.speed *= -1;
	}
	if (status.pos.y < 0) {
		status.speed *= -1;
	}
	status.pos.y += status.speed;
}

void Enemy::Draw() {
	Novice::DrawBox(
	    (int)status.pos.x, (int)status.pos.y, (int)status.size.x, (int)status.size.y, 0.0f, BLUE,
	    kFillModeSolid);
}