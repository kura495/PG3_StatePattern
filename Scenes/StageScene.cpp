#include "StageScene.h"

void StageScene::Init() { 
	inputManager = InputManager::GetInstance();
	player_ = std::make_unique<Player>();
	player_->Init();
	enemy_ = std::make_unique<Enemy>();
	enemy_->Init();
}

void StageScene::Update() {
	player_->Update();
	enemy_->Update();
	Status BulletStatus = player_->GetBulletStatus();
	Status EnemyStatus = enemy_->GetStatus();
	if (enemy_->GetIsAlive() == false) {
		sceneNo = CLEAR;
	}
	if (BulletStatus.pos.x - BulletStatus.size.x < EnemyStatus.pos.x + EnemyStatus.size.x &&
	    BulletStatus.pos.x + BulletStatus.size.x > EnemyStatus.pos.x - EnemyStatus.size.x &&
	    BulletStatus.pos.y - BulletStatus.size.y < EnemyStatus.pos.y + EnemyStatus.size.y &&
	    BulletStatus.pos.y + BulletStatus.size.y > EnemyStatus.pos.y - EnemyStatus.size.y
		) {
		enemy_->OnCollition();
	}

	

}

void StageScene::Draw() { 
	ImGui::Begin("Stage");
	ImGui::Text("Move : Arrow key");
	ImGui::Text("Shot : SPACE key");
	ImGui::End();

	player_->Draw();
	enemy_->Draw();
}
