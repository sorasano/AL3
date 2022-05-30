#pragma once
#include "WinApp.h"
#include "Model.h"
#include "DebugText.h"
#include "Input.h"

class Player {

public:
	//初期化
	void Initialize(Model*model,uint32_t textureHandle);

	//更新
	void Update();

	//描画
	void Draw();

private:
	//ワールド変換データ
	WorldTransform worldtransform_;
	//モデル
	Model* model_ = nullptr;
	//テクスチャハンドル
	uint32_t textureHandle_ = 0u;

	Input* input_ = nullptr;
	DebugText* debugText_ = nullptr;

};
