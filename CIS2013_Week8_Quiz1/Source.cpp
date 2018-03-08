#include <iostream>
using namespace std;

void changeGiver(int base) {
	int quarter = 0, dime = 0, nickle = 0, penny = 0;
	while (base >= 25) {
		base -= 25;
		quarter++;
	}
	while (base >= 10) {
		base -= 10;
		dime++;
	}
	while (base >= 5) {
		base -= 5;
		nickle++;
	}
	while (base >= 1) {
		base -= 1;
		penny++;
	}



	cout << "You get " << quarter << " quarters, " << dime << " dimes, " << nickle << " nickles, and " << penny << " pennies \n";
}

int main(){
	while(true) {
		int change = 0;
		cout << "How much change do you have? \n";
		cin >> change;
		if (change < 0) {
			cout << "Must be an amount above 0";
		}

		else {
			changeGiver(change);
		}
	}
}
