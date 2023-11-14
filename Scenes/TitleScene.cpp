#include "TitleScene.h"

void TitleScene::Init() { 
	sceneNo = TITLE;
}

void TitleScene::Update() {}

void TitleScene::Draw() { 
	ImGui::Begin("Title");
	ImGui::Text("SPACE Change State");
	ImGui::End();
}
