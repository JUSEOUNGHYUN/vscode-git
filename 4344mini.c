#include <stdio.h>

int main() {

	int n;
	int a[1000];
	int sum = 0, cnt = 0;
	double avg = 0.0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	avg = (double)sum / n;
	for (int i = 0; i < n; i++) {
		if (a[i] > avg) cnt++;
	}
	printf("%.3lf%%\n", (double)cnt * 100 / n);
}