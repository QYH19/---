#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//建立数组排序的函数Sort
int Sort(int a[15])
{
	int i, j, temp;
	for (i = 0; i < 10 - 1; i++) {
		for (j = 0; j < 10 - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return a[15];
}
//建立线性表插入数据并输出有序表的函数Inlist
int Inlist(int b[15]) {
	int m;
	int i, j;
	int flag = 1;
	printf("\n请输入要插入的数据：");
	scanf("%d", &m);
	for (i = 0; i < 10; i++)
	{
		if (b[i] > m)
		{
			for (j = 10 - 1; j > i - 1; j--)
			{
				b[j + 1] = b[j];
			}
			b[i] = m;
			flag--;
			return b[15];
		}

	}
	if (flag) {
		b[i] = m;
		return b[15];
	}
}
//建立删除输入相应数据的函数Deletelist
int Dellist(int c[15])
{
	int j, del, i;
	int flag = 1;
	printf("\n请输入要删除的数据：");
	scanf("%d", &del);
	for (i = 0; i < 11; i++) {
		if (c[i] == del)
		{
			for (j = i; j < 11 - 1; j++)
			{
				c[j] = c[j + 1];
			}
			flag--;
			return c[15];
		}
	}
	if (flag) {
		printf("未找到对应数据");
		return c[15];
	}
}
int main()
{
	int aryLinearList[15];
	int i = 0;
	printf("请输入十个数据：\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", &aryLinearList[i]);
	}
	Sort(aryLinearList);

	printf("排序结果为：");
	for (i = 0; i < 10; i++) {
		printf("%d ", aryLinearList[i]);
	}
	Inlist(aryLinearList);
	printf("插入后的排序结果为：");
	for (i = 0; i < 11; i++) {
		printf("%d ", aryLinearList[i]);
	}
	Dellist(aryLinearList);
	printf("删除后的数组为：");
	for (i = 0; i < 10; i++) {
		printf("%d ", aryLinearList[i]);
	}
	printf("\n");
	return 0;
}
