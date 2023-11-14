#include "GameManager.h"

GameManager::GameManager() {
	
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	currentSceneNo_ = TITLE;
}

GameManager::~GameManager() {}

//void GameManager::Init() {}

void GameManager::Update() { 
	prevSceneNo_ = currentSceneNo_;
	currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
	if (prevSceneNo_ != currentSceneNo_) {
		sceneArr_[currentSceneNo_]->Init();
	}

	sceneArr_[currentSceneNo_]->Update();
}

void GameManager::Draw() { 
	sceneArr_[currentSceneNo_]->Draw(); }



