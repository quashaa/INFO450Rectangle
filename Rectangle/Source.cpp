//program to calculate the area & perimeter of a rectangle
#include <iostream>
using namespace std;

int main()
{
	float length;
	float width;
	float perimeter;
	float area;

	cout << "Please enter the length of the retangle below:" << endl;
	cin >> length;

	cout << "\nPlease enter the width of the rectangle below:" << endl;
	cin >> width;

	area = length * width;
	perimeter = 2 * (length + width);

	cout << "\nThe area of the rectangle is " << area << " units" << endl;
	cout << "The perimeter of the rectangle is " << perimeter << " units\n" << endl;

	system("pause");

	return 0;
}