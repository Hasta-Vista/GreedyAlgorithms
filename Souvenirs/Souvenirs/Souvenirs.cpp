#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	int quantity, money;
	cin >> quantity >> money;
	int* arr = new int[quantity];
	for (int i = 0; i != quantity; ++i) {
		cin >> arr[i];
	}
	int sort;
	for (int i = 0; i != quantity; ++i)
	{
		for (int j = 0; j != quantity - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				sort = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = sort;
			}
		}
	}
	for (int i = 0; i != quantity; ++i) {
		while (money > arr[i]) {
			for (int j = 0; money != 0; ++j) {
				money -= arr[j];
				count++;
			}
		}
	}
	cout << count << endl;
	delete[] arr;
	return 0;
}