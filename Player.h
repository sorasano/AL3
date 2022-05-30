#pragma once
#include "WinApp.h"
#include "Model.h"
#include "DebugText.h"
#include "Input.h"

class Player {

public:
	//������
	void Initialize(Model*model,uint32_t textureHandle);

	//�X�V
	void Update();

	//�`��
	void Draw();

private:
	//���[���h�ϊ��f�[�^
	WorldTransform worldtransform_;
	//���f��
	Model* model_ = nullptr;
	//�e�N�X�`���n���h��
	uint32_t textureHandle_ = 0u;

	Input* input_ = nullptr;
	DebugText* debugText_ = nullptr;

};
