
#include "collision.h"


// ���̕ǔ���
void x_collision(const int x, int& x_speed){

	// ���[
	if (x < -WIDTH / 2){
		x_speed *= -1;
	}

	// �E�[
	if (x > WIDTH / 2){
		x_speed *= -1;
	}
}
void y_collision(const int y, int& y_speed){

	// ��
	if (y < -HEIGHT / 2){
		y_speed *= -1;
	}

	// ��
	if (y > HEIGHT / 2){
		y_speed *= -1;
	}
}