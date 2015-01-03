#include "template.cpp"

const double epsilon = 1e-9;

double sqrt(double num) {
	assert(num >= -epsilon);
	if (num <= epsilon)
		return 0;
	double l = 0 , r = num ;
	double ans = 0;
	while ( r - l >= epsilon ) {
		double m = l + (r - l)/2;
		if (m * m <= num) {
			ans = m;
			l = m;
		} else {
			r = m;
		}
	}
	return ans;
}
int main() {
	cout<<sqrt(0)<<endl;
	cout<<sqrt(4)<<endl;
	cout<<sqrt(2)<<endl;
}
