#include <stdio.h>
//�������
int main()
{
	int n;
	printf("������Ҫ��ӡ��������");
	scanf_s("%d", &n);
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;    //�Ƚ��������ÿ�еĵ�һ�������һ����ֵΪ1 
	}

	for (int i = 2; i < n; i++)      //��֪ÿ�����������Ϸ�������֮�� 
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}


	for (int i = 0; i < n; i++)     //��ӡ��� 
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}