
#include "collision.h"


// ÇòÇÃï«îªíË
void x_collision(const int x, int& x_speed){

	// ç∂í[
	if (x < -WIDTH / 2){
		x_speed *= -1;
	}

	// âEí[
	if (x > WIDTH / 2){
		x_speed *= -1;
	}
}
void y_collision(const int y, int& y_speed){

	// â∫
	if (y < -HEIGHT / 2){
		y_speed *= -1;
	}

	// è„
	if (y > HEIGHT / 2){
		y_speed *= -1;
	}
}