#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int king;
	int queen;
	int look;
	int bishop;
	int night;
	int phone;

	scanf("%d %d %d %d %d %d", &king, &queen, &look, &bishop, &night, &phone);

	int king_ = 1;
	int queen_ = 1;
	int look_ = 2;
	int bishop_ = 2;
	int night_ = 2;
	int phone_ = 8;

	printf("%d ", king_ - king);
	printf("%d ", queen_ - queen);
	printf("%d ", look_ - look);
	printf("%d ", bishop_ - bishop);
	printf("%d ", night_ - night);
	printf("%d", phone_ - phone);


	return 0;
}