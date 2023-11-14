#include "GameManager.h"

GameManager::GameManager() {
	
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	currentSceneNo_ = TITLE;
	sceneArr_[TITLE]->Init();
	inputManager = InputManager::GetInstance();
	inputManager->Init();
}

GameManager::~GameManager() {}

//void GameManager::Init() {}

void GameManager::Update() { 
	inputManager->Update();
	prevSceneNo_ = currentSceneNo_;
	currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
	if (prevSceneNo_ != currentSceneNo_) {
		sceneArr_[currentSceneNo_]->Init();
	}

	sceneArr_[currentSceneNo_]->Update();
}

void GameManager::Draw() { 
	sceneArr_[currentSceneNo_]->Draw(); 
}



