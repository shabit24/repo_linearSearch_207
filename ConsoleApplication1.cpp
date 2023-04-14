
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

	do 
	{
		//Accept the number of search
		cout << "Enter the element you want to search\n\n";
		int item;
		cin >> item;

		comparison = 0;
		for (i = 0;i < n;i++)
		{
			comparison++
				if (arr[i] == item)
				{
					cout << "\n" << item << "found at position" << (i + 1) << end;
					break;
				}
		}

		if (i == n)
			cout << "\n" << item << "not found  in the array";
		cout << "\nNumber of comparison: " << comparison << end;
		cout << "\ncountinu search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y');

}

int main() {
	input();
	LinearSearch();
	return 0;
}