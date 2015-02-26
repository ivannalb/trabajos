// TEMPERATURE

#include <iostream>
using namespace std;

int main()
{
	int F;
	int C;
	cout << "Temperature in Fahrenheit" << endl;
	cin >> F;
	C = 5 * (F- 32) / 9;
	cout << "Temperature in Celsius" << endl;
	cout << C << endl###;

	if (C >= 100){
		cout << "boiling point" << endl;
	}

	if ( C <100 && C >= 0){
		cout << " in this point the water is liquid " << endl;
	}
	if (C <0){
		cout << "freezing point" << endl;
	}
	return 0;
}