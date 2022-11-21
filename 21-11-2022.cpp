//Proc 16 
/*
#include<iostream>
using namespace std;
int sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
int main () {
	double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;
}													
*/													
// Proc 
/*
#include<iostream>									
using namespace std;								
int sign(double x) { 
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;

}
	int rootsCount(double a, double b, double c) {
		double d = b * b - 4 * a * c;
	if (d < 0) return -1;
	if (d == 0) return 0;
	if (d > 0) return 1;
}		


int main () {										
												
							
}													
*/
//Proc 19

#include<iostream>
using namespace std;
double CircleS(double r,double r2,double s1, double s2, double s3) {
	double s1 = 3.14 * r * r; return s1;
	double s2 = 3.14 * r2 * r2; return s2;
	double s3 = s1 - s2; return s3;
}
int main () {
	setlocale(LC_ALL, "russian");
	double r, r2;
	double s1, s2, s3;
	cout << "введите большой радиус";
	cin >> r;
	cout << "введите малый радиус";
	cin >> r2;
	cout << s3 << endl;
}
