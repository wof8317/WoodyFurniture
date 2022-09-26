/*
	Rectangle: Calculates area and perimeter of a rectangle.
	Copyright (C) 2022 Felipe Woods

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

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