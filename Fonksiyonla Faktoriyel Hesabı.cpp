#include <iostream>

using namespace std;

void factorial(int number) {
	int faktoriyel=1;
	for (int i = 1; i <= number; i++) {
		faktoriyel *= i;
	}
	cout << "Faktoriyel: " << faktoriyel << endl;

}
int main() {
	int a;
	cout << "Please enter a number:";
	cin >> a;
	factorial(a);
}
