


int sort_tester(function<void(int*, int)> sorter){
	int N = 1000000;
	auto p = new int [N];
	for (int i = 0 ; i < N; ++i)
		p[i] = rand();
	sorter(p, N);
	int ret = is_sorted(p, p+N);
	delete [] p;
	return ret;
}

