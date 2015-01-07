#include "template.cpp"
#include "_sort_tester.cpp"
void _quicksort(int *data, int l, int r) {
	int i = l , j = r;
	int pivot = data[i];
	while ( i <= j ) {
		while(data[i] < pivot) ++ i;
		while(data[j] > pivot) -- j;
		if ( i <= j ) {
			auto x = data[i];
			data[i] = data[j];
			data[j] = x;
			++i;	--j;
		}
	}
	if (l<j)_quicksort(data, l, j);
	if (i<r)_quicksort(data, i, r);
}

void quicksort(int *data, int N) {
	_quicksort(data, 0, N-1);
}

int main(){
	int T = 10;
	while (T--)
		assert(sort_tester(quicksort));
}
