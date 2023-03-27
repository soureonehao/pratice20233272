#include <stdio.h>
//杨辉三角
int main()
{
	int n;
	printf("请输入要打印的行数：");
	scanf_s("%d", &n);
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;    //先将杨辉三角每行的第一个和最后一个赋值为1 
	}

	for (int i = 2; i < n; i++)      //已知每个数等于它上方两数的之和 
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}


	for (int i = 0; i < n; i++)     //打印输出 
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}