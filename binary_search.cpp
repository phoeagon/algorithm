#include "template.cpp"

// Assuming arr is in non-decreasing order.
int binary_search(int key, int* arr, int N) {
	int l = 0, r = N - 1;
	while ( l <= r ){
		int m = l + (r - l)/2;
		if (arr[m] == key)
			return m;
		else if (arr[m] < key)
			l = m + 1;
		else r = m - 1;
	}
	return -1;
}
