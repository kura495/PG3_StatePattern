#include "TitleScene.h"

void TitleScene::Init() { 
	inputManager = InputManager::GetInstance();
}

void TitleScene::Update() {}

void TitleScene::Draw() { 
#ifdef _DEBUG
	ImGui::Begin("Title");
	ImGui::Text("SPACE Change State");
	ImGui::End();
#endif
	
	if (inputManager->IsTriggerKey(DIK_SPACE)) {
		sceneNo = STAGE;
	}
}
