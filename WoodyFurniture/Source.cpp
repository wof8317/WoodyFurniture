#include <iostream>
// fixed point notation
#include <iomanip>
using namespace std;

int main() {
	
	const double COLONIAL = 85;
	const double MODERN = 57.5;
	const double CLASSICAL = 127.75;

	// not to confuse with QT Framework
	int qtColonial;
	int qtModern;
	int qtClassical;

	cout << "Please input the number of American Colonial chairs sold: ";
	cin >> qtColonial;

	cout << "\nPlease input the number of Modern chairs sold: ";
	cin >> qtModern;

	cout << "\nPlease input the number of French classical chairs sold: ";
	cin >> qtClassical;

	double totalColonial = qtColonial * COLONIAL;
	double totalModern = qtModern * MODERN;
	double totalClassical = qtClassical * CLASSICAL;
	double total = totalColonial + totalModern + totalClassical;

	cout << setprecision(2) << fixed; // Fixed decimal notation
	cout << "\n\nThe total sales for American Colonial chairs: " << totalColonial << endl;
	cout << "The total sales for Modern chairs:	" << totalModern << endl;
	cout << "The total sales for French Classical chairs: " << totalClassical << endl;
	cout << "The total sales for all chairs: " << total;

	return 0;
}