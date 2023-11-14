#include "Player.h"

void Player::Init() { 
	inputManager = InputManager::GetInstance();

	BaseCharacter::status.pos = {50,300};
	BaseCharacter::status.size = {32,32};
	BaseCharacter::status.speed = 5.0f;

}

void Player::Update() { 
	if (inputManager->IsPressKey(DIK_UP)) {
		status.pos.y -= status.speed;
	}
	if (inputManager->IsPressKey(DIK_DOWN)) {
		status.pos.y += status.speed;
	}
	if (inputManager->IsPressKey(DIK_LEFT)) {
		status.pos.x -= status.speed;
	}
	if (inputManager->IsPressKey(DIK_RIGHT)) {
		status.pos.x += status.speed;
	}

}

void Player::Draw() { 
	Novice::DrawBox(
	    (int)status.pos.x, (int)status.pos.y, (int)status.size.x, (int)status.size.y, 0.0f, WHITE,
	    kFillModeSolid);
}
