
#include <iostream>

using namespace std;
#define ARRAYSIZE 11

int main()
{
	int Array[ARRAYSIZE] = { 1,3,5,7,11,13,17,19,23,29,37 };

	int tmpArraySize, lowerBound, upperBound, searchedValue, result;
	tmpArraySize = ARRAYSIZE;
	lowerBound = 0;
	upperBound = ARRAYSIZE - 1;
	searchedValue = 37;
	do {
		result = searchedValue % tmpArraySize;
		//cout << "result, searchedValue, tmpArraySize" << result << searchedValue << tmpArraySize;
		if (result + lowerBound > lowerBound && Array[result] > searchedValue) {
			lowerBound = result;
		}
		else if (result + lowerBound < upperBound && Array[result] < searchedValue) {
			upperBound = result;
		}
		tmpArraySize = upperBound + 1 - lowerBound;
	} while (searchedValue != Array[result] && (lowerBound != result || upperBound != result));
	if (searchedValue != Array[result] && lowerBound == result && upperBound == result) {
		cout << "value doesn't exist" << endl;
	}
	else {
		cout << "Value at location: " << result << endl;
	}
	return 0;
}