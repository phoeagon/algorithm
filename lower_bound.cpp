#include "template.cpp"

// Assuming arr is in non-decreasing order.
int lower_bound(int key, int* arr, int N) {
	int l = 0, r = N - 1;
	int ans = -1;
	while ( l <= r ){
		int m = l + (r - l)/2;
		if (arr[m] <= key) {
			l = m + 1;
			ans = m;
		} else r = m - 1;
	}
	return ans;
}
