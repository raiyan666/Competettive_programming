#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n & 1) {
		printf("-1\n");
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2)printf("%d ", i + 1);
		else printf("%d ", i - 1);
	}
	return 0;
}
