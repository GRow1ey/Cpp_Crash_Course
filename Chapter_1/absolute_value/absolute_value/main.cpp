#include <cstdio>

int absolute_value(int x) {
	// Your code here
	if (x >= 0) return x;
	else if (x < 0) return -x;
}

int main() {
	int my_num = -10;
	printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}