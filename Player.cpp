#include "Player.h"

//������
void Player::Initialize(Model* model, uint32_t textureHandle) {

	//NULL�|�C���^�`�F�b�N
	assert(model);

	model_ = model;
	textureHandle_ = textureHandle;

	//�V���O���g���C���X�^���X���擾����
	input_ = Input::GetInstance();
	debugText_ = DebugText::GetInstance();
};

//�X�V
void Player::Update() {

	Vector3 move = {0,0,0};

};

//�`��
void Player::Draw() {

};