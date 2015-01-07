#include "template.cpp"

#define MAXLEN (10000)

int buffer[MAXLEN];

int calc(int *data, int N) {
	auto f = new int [N];
	memset(f, 0, sizeof(int) * N);
	f[0] = 1;
	for (int i = 1; i < N; ++i) {
		f[i] = 1;
		for (int j = 0; j < i; ++j)
			if (data[j] < data[i])
				f[i] = max(f[j] + 1, f[i]);
	}
	int ans = 0;
	for (int i = 0 ; i < N ; ++i)
		ans = max(ans, f[i]);
	return ans;
}

int init() {
	int N;
	cin >> N;
	for (int i = 0 ; i < N; ++i)
		cin >> buffer[i];
	cout<<calc(buffer, N)<<endl;
}

int main() {
	init();
}
