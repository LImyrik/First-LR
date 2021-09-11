#include "Header.h"

int main() {
	int N;
	vector <double> arr;
	cin >> N;
	arr.resize(N);
	for (int i = 0; i < N; i++)
	cin >> arr[i];
	cout << getMaxIndex(arr);
	return 0;
}