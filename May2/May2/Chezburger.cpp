#include <iostream>
using namespace std;
#include <string>
int main() {
	string cheeseburger[7];
	cheeseburger[0] = "pizza";
	cheeseburger[1] = "Steak";
	cheeseburger[2] = "spaghetti";
	cheeseburger[3] = "Lasagna";
	cheeseburger[4] = "fries";
	cheeseburger[5] = "Cinnamon rolls";
	cheeseburger[6] = "bacon burger";
	for (int i = 0; i < 7; i++)
		cout << cheeseburger[i] << endl;
}