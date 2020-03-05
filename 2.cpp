#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{
	int a = 10000;//10 27 00  00
	FILE *fp = fopen("my.bin", "w");
	if (fp == NULL){
		return 1;
	}
	fprintf(fp, "%d", a);
//	fwrite(&a, 4, 1, fp);
	fclose(fp);
//	printf("%d\n", a);
	system("pause");
	return 0;
}