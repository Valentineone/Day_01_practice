//1. ��ӡ100~200֮������� 
#include <stdio.h> 
int main()
{
	int i, j;
	printf("100~200֮�������Ϊ��");
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

//2. ����˷��ھ��� 
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

//3. �ж�1000��---2000��֮������� 
//�ܱ�4�����Ҳ��ܱ�100������Ϊ���� 
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	printf("1000��---2000��֮�������Ϊ:");
//	for(i = 1001;i<2000;i++)
//	{
//		if(i%4==0&&i%100!=0)
//		printf("%d ",i);
//	}
//  return 0; 
//} 