
#include "lib/defines.hpp"
#include "lib/appEnv.hpp"
#include "lib/random.hpp"

enum Window {
	WIDTH = 512,
	HEIGHT = 512
};

// ���̕ǔ���
void x_collision(const int x, int& x_speed);
// Y�̕ǔ���
void y_collision(const int y, int& y_speed);

