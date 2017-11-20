int euler2 () {
	int maxTerm = 4000000;
	int t1 = 1, t2 = 2;
	int sum = 0;
	while (t2 < maxTerm) {
		if (t2 % 2 == 0) sum += t2;
		swap(t1, t2);
		t2 = t1 + t2;
	}
	return sum;
}
