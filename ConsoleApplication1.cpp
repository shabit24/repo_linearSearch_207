
#include <iostream>
using namespace std;

int arr[20];
int n; // Numberof element
int i; // Index of array

void input()
{
	while (true)
	{
		cout << "Enter the number of array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and  maximum 20\n\n";
	}

	//Accept array element
	cout << "\n------------------\n";
	cout << "Enter array element";

}
void LinearSearch() {
	char ch;
	int comparison; //Number of comparison
}