#include "Player.h"
#include "Vector3.h"

//������
void Player::Initialize(Model* model, uint32_t textureHandle) {

	//NULL�|�C���^�`�F�b�N
	assert(model);

	model_ = model;
	textureHandle_ = textureHandle;

	//�V���O���g���C���X�^���X���擾����
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();

	worldtransform_.Initialize();

};

//�X�V
void Player::Update() {

	Vector3 move = {0.0f,0.0f,0.0f};

	//�L�����N�^�[�̈ړ�����
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

//�`��
void Player::Draw(ViewProjection &viewProjection_) {

	//3D���f����`��
	model_->Draw(worldtransform_,viewProjection_,textureHandle_);

};