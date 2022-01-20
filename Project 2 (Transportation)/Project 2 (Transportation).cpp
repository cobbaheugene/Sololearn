#include <iostream>
using namespace std;
int main() {
	int busCapacity;
	int input;
	int part1;

	busCapacity = 50;
	cout << "Enter amount of total passengers for boarding" << endl;
	cin >> input;
	part1 = input % busCapacity;

	//Display the amount of empyt seats left in the last bus
	cout << 50 - part1 <<" empty seats will be left in the last bus"<<endl;

	return 0;

}