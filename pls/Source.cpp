#include "MyForm.h"
#include <cmath>

double len(double xa, double xb, double ya, double yb) {
	return sqrt(((xa - xb) * (xa - xb)) + ((ya - yb) * (ya - yb)));
}
double p(double a, double b, double c) {
	return a + b + c;
}
double s(double a, double b, double c) 
{
	double p1 = p(a, b, c);
	double pp = p1 / 2;
	return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}

double f(double x1, double x2, double x3, double y1, double y2, double y3, double& p1)
{
	double a, b, c, s1;
	a = len(x1, x2, y1, y2);
	b = len(x2, x3, y2, y3);
	c = len(x1, x3, y1, y3);
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
		p1 = p(a, b, c);
		s1 = s(a, b, c);
	}
	else {
		p1 = -1;
		s1 = -1;
	}
	return s1;
}

