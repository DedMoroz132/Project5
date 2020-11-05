#include <stdio.h>
double a[100][100] = { 0 };
int i;
void FindZero(int n)
{
	double v;
	if(a[i][i]==0)
	for(int j=i+1;j<n;j++)
		if (a[j][i] != 0)
		{
			for (int k = 0; k < n; k++)
			{
				v = a[i][k];
				a[i][k] = a[j][k];
				a[j][k] = v;
			}
			break;
		}
}
void Gaus(int n)
{
	double v;
	int g = 0;
	i = 0;
	while (i<n-1)
	{
		FindZero(n);
		if (a[i][i] == 0)
		{
			g = 1;
			break;
		}
		for (int j = i+1; j < n; j++)
		{
			if (a[j][i] != 0)
			{
				v = a[j][i] / a[i][i];
				for (int p = i; p < n; p++)
					a[j][p] = a[j][p] - a[i][p] * v;
			}
		}
		i++;
	}
}
int main(void) {
	double sum=0;
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf_s("%lf", &a[i][j]);
	Gaus(n);
	for (i = 0; i < n; i++)
	{
		sum = sum * a[i][i];
	}
	printf("%lf\n", sum);
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
			printf("%lf ", a[i][j]);
	}
}