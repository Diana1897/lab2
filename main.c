#include <stdio.h>
#include <math.h>

int main() { 
	double a, b, c, d, x1, x2;
	printf ("Input a, b, c:\n");
	scanf ("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d < 0) {
		printf ("Error!\n");
		return 1;
	}

	if (d == 0) {
		x1 = -b / (2 * a);
		printf ("x = %.1lf\n", x1);
		return 0;
	}

	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	printf ("x1 = %.1lf\n x2 = %.1lf\n", x1, x2);
	return 0;
}
}
