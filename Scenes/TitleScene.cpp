#include "TitleScene.h"

void TitleScene::Init() { 
	sceneNo = TITLE;
	inputManager = InputManager::GetInstance();
}

void TitleScene::Update() {}

void TitleScene::Draw() { 
	ImGui::Begin("Title");
	ImGui::Text("SPACE Change State");
	ImGui::End();
	if (inputManager->IsTriggerKey(DIK_SPACE)) {
		sceneNo = STAGE;
	}
}
