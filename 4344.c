#include <stdio.h>

int main() {
	int c;
	int n;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		int a[1000];
		int sum = 0;
		double avg = 0.0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", a[i]);
			sum += a[i];
		}
		avg = (double)sum / n;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > avg) cnt++;
		}
		printf("%.3lf%%\n", (double)cnt * 100 / n);
	}
	return 0;
	}
