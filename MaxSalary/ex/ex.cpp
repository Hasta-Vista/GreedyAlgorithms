#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
static bool Comparison(const string& x, const string& x1) {
	return x + x1 > x1 + x;
}
static string Calculation(vector<string>& numbers) {
	sort(numbers.begin(), numbers.end(), Comparison);
	if (numbers[0] == "0") {
		return "0";
	}
	string result;
	for (const string& number : numbers) {
		result += number;
	}
	return result;
}
int main()
{
	int size;
	cin >> size;
	vector <string> numbers(size);
	for (int i = 0; i != size; ++i) {
		cin >> numbers[i];
	}
	string maxSalary = Calculation(numbers);
	cout << maxSalary;
	numbers.clear();
	return 0;
}


    
  

    