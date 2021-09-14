#include "Header.h"

double getMaxIndex(vector <double> arr) {
	double getIndex = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > getIndex)
			getIndex = arr[i];
	}
	return getIndex;
}

double getSumArray(vector <double> arr) {
	int lastPlusIndex = arr.size();
	double getSumArray = 0;
	for (int i = 0; i < lastPlusIndex; i++) {
		if ((arr[i] > 0) & (i = lastPlusIndex))

			break;

		else {
			arr[i] += arr[i];
			getSumArray = arr[i];
		}
		
	}
	return getSumArray;

}




