//1. 打印100~200之间的素数 
#include <stdio.h> 
int main()
{
	int i, j;
	printf("100~200之间的素数为：");
	for (i = 101; i<200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
			printf("%d\n", i);
	}
	return 0;
}

//2. 输出乘法口诀表 
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 1;i <= 9;i++)
//	{
//		for(j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3. 判断1000年---2000年之间的闰年 
//能被4整除且不能被100整除的为闰年 
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	printf("1000年---2000年之间的闰年为:");
//	for(i = 1001;i<2000;i++)
//	{
//		if(i%4==0&&i%100!=0)
//		printf("%d ",i);
//	}
//  return 0; 
//} 