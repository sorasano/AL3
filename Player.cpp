#include "Player.h"

//初期化
void Player::Initialize(Model* model, uint32_t textureHandle) {

	//NULLポインタチェック
	assert(model);

	model_ = model;
	textureHandle_ = textureHandle;

	//シングルトンインスタンスを取得する
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();
};

//更新
void Player::Update() {

	Vector3 move = {0,0,0};

};

//描画
void Player::Draw() {

};