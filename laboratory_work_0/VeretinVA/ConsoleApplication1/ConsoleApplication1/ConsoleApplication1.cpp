#include "stdio.h"
#include "math.h"

int main(){
	double x1, y1, r1;
	double x2, y2, r2;
	printf("Enter x1 y1 r1\n");
	scanf_s("%lf %lf %lf", &x1, &y1, &r1);
	printf("Enter x2 y2 r2\n");
	scanf_s("%lf %lf %lf", &x2, &y2, &r2);
	double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	if (d > r1 + r2) {
		printf("The circles have no common points");
	}
	else if (d == r1+r2) {
		printf("The circles touch externally");
	}
	else if ((r1 == r2) && (d == 0)) {
		printf("The circles coincide");
	}
	else if (r1 != r2 && x1 == x2 && y1 == y2) {
		printf("The centers of the circles coincide, but the radii do not");
	}
	else if (d == fabs(r1 - r2)) {
		printf("The circles touch internally");
	}
	else if (d < fabs(r1 - r2)) {
		printf("One circle is inside another, without touching it");
	}
	else{
		printf("The circles intersect at 2 points");
	}
	return 0;
}