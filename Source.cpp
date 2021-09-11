#include "Header.h"

double getMaxIndex(vector <double> arr) {
	double getIndex = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > getIndex)
			getIndex = arr[i];
	}
	return getIndex;
}