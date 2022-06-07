#include <stdio.h>
#include <math.h>

class PTB2
{
public:
	float a = 1;
	float b = -7;
	float c = 10;
	float X, X1, X2;
	void giai_pt();

};

int main()
{
	PTB2 A;
	A.giai_pt();

}

void PTB2::giai_pt()
{
	float delta = b * b - 4 * a*c;
	if (delta > 0) {
		X1 = (float)((-b + sqrt(delta)) / (2 * a));
		X2 = (float)((-b - sqrt(delta)) / (2 * a));

		printf(" phuong trinh co nghiem X1: %0.2f \r\n", X1);
		printf(" phuong trinh co nghiem X2: %0.2f \r\n", X2);
	}
	else if (delta == 0) {
		X = (float)(-b / (2 * a));
		printf(" phuong trinh co nghiem kep X: %0.2f\r\n", X);
	}
	else {
		printf("phuong trinh vo nghiem\r\n");
	}

}