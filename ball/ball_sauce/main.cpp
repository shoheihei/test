//
// アプリ雛形
//

#include "collision.h"

// 
// メインプログラム
// 
int main() {
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);
  Random random;

  int x = random.fromFirstToLast(-WIDTH / 2, WIDTH / 2);
  int y = random.fromFirstToLast(-HEIGHT / 2, HEIGHT / 2);
  float r = random.fromZeroToOne();
  float g = random.fromZeroToOne();
  float b = random.fromZeroToOne();
  int x_speed = 1;
  int y_speed = 1;

  while (1){
	  if (!env.isOpen())return 0;

	  x += x_speed;
	  x_collision(x, x_speed);

	  y += y_speed;
	  y_collision(y, y_speed);

	  env.setupDraw();

	  drawFillCircle(x, y, 10, 10, 10,
		  Color(r, g, b));

	  env.update();
  }
}