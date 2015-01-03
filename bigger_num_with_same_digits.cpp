#include "template.cpp"

int main(){
	string num;
	cin >> num ;
	next_permutation(num.begin(), num.end());
	cout << num << endl;
}
