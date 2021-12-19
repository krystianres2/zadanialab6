#include<cmath>

float p_kola(int r) {
	return 3.14 * r*r;
}
int p_prostokata(int a, int b) {
	return a * b;
}
int p_trojkata(int a, int b) {
	return a * b / 2;
}
int p_szescianu(int a) {
	return a* a * 6;
}
int v_szescianu(int a) {
	return a * a * a;
}
float v_walca(int r, int h) {
	return 3.14 * r*r*h;
}
float p_walca(int r, int h) {
	return (2 * 3.14 * r * r) + (2 * 3.14 * r * h);
}