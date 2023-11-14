#pragma once
enum SECNE {TITLE,STAGE,CLEAR};

class IScene {
public:
	virtual ~IScene();

	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	int GetSceneNo();

protected:
	static int sceneNo;
private:
};

IScene::IScene() {}

IScene::~IScene() {}

inline int IScene::GetSceneNo() { return 0; }
