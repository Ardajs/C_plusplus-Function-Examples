#include <iostream>

using namespace std;

void printage(int birthday) {
	int age;
	age = 2024 - birthday;
	cout << "Your age:" << age;
}
int main() {

	printage(2003);
	cout << endl;
	return 0;
}