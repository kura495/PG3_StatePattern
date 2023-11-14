#include "StageScene.h"

void StageScene::Init() { 
	inputManager = InputManager::GetInstance();
}

void StageScene::Update() {

}

void StageScene::Draw() { 
	ImGui::Begin("Stage");
	ImGui::Text("SPACE Change State");
	ImGui::End();
	if (inputManager->IsTriggerKey(DIK_SPACE)) {
		sceneNo = CLEAR;
	}
}
