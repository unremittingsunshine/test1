//#include<stdio.h>
//传参传地址时，应该用指针进行传参。
//int Add(int x, int y)
//{
//	int count;
//	return count = x + y;
//}
//int Add(const int *const x,  int *const y)
//{
//	return *y = *y+*x;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(&a, &b));
//	return 0;
//}

//#include<stdio.h>
//void Print(char *a)
//{
//	printf("%s\n", a);
//}
//
//int main()
//{
//	/*char arr[] = { "hi,my girl!" };*/
//	char *a = (char*)"asdf" ;
//	Print(a);
//	return 0;
//}
//#include<stdio.h>
//void Print(char arr1[])
//{
//	printf("%s\n", arr1);
//}
//void Print(char *arr1)
//{
//	printf("%s\n", arr1);
//}
//void Print(char (*pp)[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", (*pp)[i]);
//	}
//	
//}
//
//int main()
//{
//
//	char arr1[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	char(*p)[10] = &arr1;
//	Print(p);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[5] = { 1,2,3,4,5 };
//	char *p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}


















