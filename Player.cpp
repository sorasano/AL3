#include "Player.h"
#include "Vector3.h"

//初期化
void Player::Initialize(Model* model, uint32_t textureHandle) {

	//NULLポインタチェック
	assert(model);

	model_ = model;
	textureHandle_ = textureHandle;

	//シングルトンインスタンスを取得する
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();

	worldtransform_.Initialize();

};

//更新
void Player::Update() {

	Vector3 move = {0.0f,0.0f,0.0f};

	//キャラクターの移動速さ
	const float speed = 0.2f;

	if (input_->PushKey(DIK_LEFT) ){
		move = { -speed,0,0 };
	}
	else if (input_->PushKey(DIK_RIGHT)){
		move = {speed,0,0};
	}

	if (input_->PushKey(DIK_UP)) {
		move = { 0,speed,0 };
	}
	else if (input_->PushKey(DIK_DOWN)) {
		move = { 0,-speed,0 };
	}

	worldtransform_.translation_.x += move.x;
	worldtransform_.translation_.y += move.y;
	worldtransform_.translation_.z += move.z;

	debugText_->SetPos(0,0);
	debugText_->Printf("PlayerPos(%f,%f,%f)", worldtransform_.translation_.x, worldtransform_.translation_.y, worldtransform_.translation_.z);

};

//描画
void Player::Draw(ViewProjection &viewProjection_) {

	//3Dモデルを描画
	model_->Draw(worldtransform_,viewProjection_,textureHandle_);

};