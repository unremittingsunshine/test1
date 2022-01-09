
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,4,3,2,1 };
//	int ret = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		ret = ret ^ a[i];
//	}
//	printf("单数%d\n", ret);
//}
//#include<stdio.h>//汉诺塔，排序，青蛙跳台阶；
//#include<string.h>
//int main()
//{
//	
//	int a[] = { 1,2,5,3,4,3,2,1,4 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			if (a[i] == a[j])
//			{
//				count++;
//			}
//
//		}
//		if (count == 1)
//		{
//			printf("找到单数%d\n", a[i]);
//		}
//	}
//}

//#include"game.h"
//int main()
//{
//	test();
//	game();
//	return 0;
//}
//void game()
//{
//	char ret=0;
//	//数组存放棋盘信息
//	char board[row][col] = { 0 };
//	//初始化界面；
//	itboard(board, row, col);
//	//打印棋盘；
//	disboard(board,row,col);
//	//玩家下棋
//	while (1)
//	{
//		
//			//电脑下棋
//			computer(board);
//		disboard(board, row, col);
//		//判断输赢
//		ret = WIN(board);
//		if (ret != 'c')
//			break;
//		player(board);
//		disboard(board, row, col);
//		//判断输赢
//		ret = WIN(board);
//		if (ret != 'c')
//			break;
//	}
//	if (ret == 'x')
//		printf("玩家胜利\n");
//	else if (ret == 'o')
//		printf("电脑胜利\n");
//	else if (ret == 'p')
//		printf("平局\n");
//
//
//}
//void test()
//{
//	do
//	{
//		srand((unsigned int) time(NULL));
//		int n = 0;
//		menu();
//		printf("请选择->\n");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			printf("三子棋\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (1);
//}

//int fib(int x)//斐波拉系数列循环 
//{
//	int i = 1;
//	int j = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = i + j;
//		i = j;
//		j = c;
//		x--;
//	}
//	return c;
//	
//
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int ret = fib(x);
//	printf("%d\n", ret);
//}
//int Fib(int x)//斐波拉系数列递归
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	if (x > 2)
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
//int main()
//{
//	int i, n;
//	scanf("%d", &n);
//	i = Fib(n);
//	printf("%d\n", i);
//}
//冒泡排序
//int main()
//{
//	int arr[10] = { 2,44,12,3,2,5 };
//	int size = 6;
//	int i, j,tmp;
//	for (i = 0; i < size ; i++)
//	{
//		for (j = 0; j < size - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr[3]);
//	return 0;
//}

//递归
//int Fai1(int x)
//{
//	if (x != 0)
//	{
//		return x * Fai1(x - 1);
//	}
//	else
//		return 1;
//
//}
//int main()
//{
//	unsigned int i, ret;
//	scanf("%d", &i);
//	ret=Fai1(i);
//	printf("%d", ret);
//}
//递归
//int len(char* b)
//{
//	if (*b != '\0')
//	{
//		return 1 + len(b + 1);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = { "asdfa" };
//	int a=len(arr);
//	printf("%d", a);
//}
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//	}
//	printf("%d ", x % 10);
//}
//int main()//递归
//{
//	 int num = 0;
//	scanf("%d", &num);
//	print(num);
//}
//#include "ADD.h";
//int main()
//{
//	int x = 2, y = 3,a;
//	a=ADD(x, y);
//	printf("%d", a);
//}
//void max(int* x);
//int main()
//{
//	int num = 0;
//	max(&num);
//	printf("%d\n", num);
//	max(&num);
//	printf("%d\n", num);
//	max(&num);
//	printf("%d\n", num);
//}
//void max(int* x)
//{
//	*x = *x + 1;
//}
//int chat(int x, int a1[],int size)
//{
//	
//	int left = 0;
//	int right = size - 1;
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (x > a1[mid])
//		{
//			left = mid + 1;
//		}
//		 if (x < a1[mid])
//		{
//			right = mid - 1;
//		}
//		 if (x == a1[mid])
//		 {
//			 return 1;
//		 }
//		
//	}
//	return 0;
//}
//int main()
//{
//	int x = 0, a1[7] = {1,2,3,4,5,6,7}, i;
//	/*printf("输入一个有序数组");
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", a1);
//	}*/
//	printf("输入要找到数");
//	scanf("%d", &x);
//	int size = sizeof(a1) / sizeof(a1[0]);
//	if (chat(x,a1,size) == 1)
//		printf("找到");
//	else
//		printf("没找到");
//}
//int rght(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0)||x%400==0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (rght(i) == 1)
//	{
//		printf("yes\n");
//		return 0;
//	}
//		printf("no");
//		return 0;
//	
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++);
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}
//void Swap(int* pa,int* pb)
//{
//	int m = 0;
//	m = *pa;
//	*pa = *pb;
//	*pb = m;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d,%d", a, b);
//}
//int main()
//{
//	char arr[20] = { "you are my sun" };
//	memset(arr, '$', 7);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr[20];
//	char a[20];
//	scanf("%s", arr);
//	strcpy(a, arr);
//	printf("%s", a);
//}
////int main()
//{
//	char arr[20];
//	system("shutdown - s - t 60");
//	while (1)
//	{
//		printf("你的电脑将在一分钟后关机，请输入->我是猪,将取消关机");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0);
//		{
//			system("shutdown -a");
//			break;
//		}
//	
//	}	
//}
//void game()
//{
//	int a;
//	int ret = rand() % 100;
//	printf("猜数字->\n");
//	
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (a < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("victory\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int a;
//	do
//	{
//		srand((unsigned int)time(NULL));
//		
//		
//		printf("***************\n");
//		printf("***************\n");
//		printf("*1.play 0.exit*\n");
//		printf("***************\n");
//		printf("***************\n");
//		printf("请选择->");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			printf("进入游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (a);
//	return 0;
//		
//}
//int main()
//{
//	int a[6];
//	int b = 0,c=0,m,i;
//	printf("请输入一串数据\n");
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &a[i]);
//		c++;
//	}
//	printf("已存入%d个数字\n",c);
//	int j;
//	int size = sizeof(a) / sizeof(a[0]);
//	int left = 0, right = size - 1;
//	int mid = (left + right) / 2;
//	for (i = 0; i < size; i++)
//	{
//		for (j =0; j < size; j++)
//		{
//			if (a[j] > a[j+1])
//			{
//				m = a[j+1];
//				a[j+1] = a[j];
//				a[j] = m;
//
//			}
//		}
//		
//		
//	}
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("输入查找的数\n");
//	scanf("%d", &b);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (b < a[mid])
//		{
//			right = mid - 1;
//
//		}
//		else if (b > a[mid])
//		{
//			left = mid + 1;
//		}
//		else if (b = a[mid])
//		{
//			printf("找到下标%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	
//	return 0;
//}
//int main()//乘法表
//{
//	int i, j, z;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			z = i * j;
//			printf("%d*%d=%-2d  ", i, j, z);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,82,9,0};
//	int size = sizeof(a) / sizeof(a[0]);
//	int m = a[0], i;
//	for (i = 0; i < size; i++)
//	{
//		if (a[i] > m)
//		{
//			m = a[i];
//		}
//	}
//	printf("最大值为%d\n",m);
//}
//int main()
//{
//	int i, flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//}
//int main()//素数优化算法；
//{
//	int i, j, c=0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i);j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			c++;
//			printf("%d\n", i);
//		}
//
//	}
//	printf("%d", c);
//}
//int main()
//{
//	int i;
//	int j,z=0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			
//		}
//		if(j==i)
//			{
//			printf("素数%d\n", i);
//			z = z++;
//			}
//	}
//	printf("%d", z);
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		while ((year % 4 == 0&& year % 100 != 0)||year%400==0)
//		{
//			printf("闰年%d\n", year);
//			break;
//		}
//	
//	}
// }
//int Max(int x, int y);
//int Min(int x, int y);
//int main()//辗转相除法
//{
//	
//	int m, n;
//	int a, b, i;
//	scanf("%d\n%d", &m, &n);
//	a = Max(m, n);
//	b = Min(m, n);
//	while (a%b!=0)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	printf("最大公约数为%d", b);
//}
//int Max(int x, int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return z;
//}
//int Min(int x, int y)
//{
//	int z = x < y ? x : y;
//	return z;
//}
//int main()
//{
//	int i ,f;
//	int a, b,x=1;
//	scanf("%d\n%d", &a, &b);
//	for (i = 1; i <= a && i <= b;i++)
//	{
//		if
//		(a%i == 0,b%i == 0)
//		{
//			x = i;
//			printf("公约数有%d\n", x);
//		}
//		
//	}
//	printf("最大公约数为%d", x);
//
//}
//int main()
//{
//	char ch[40] = {"China will always be in my heart"};
//	char ct[40]=  {"################################"};
//	int i, j;
//	for (i = 0,j=31; i < j; i++,j--)
//	{
//		system("cls");
//		ct[i] = ch[i];
//		ct[j] = ch[j];
//		printf("%s\n", ct);
//		Sleep(1000);
//		
//	}
//}
//int main()
//{
//	char passwd[10] = { "123456"};
//	char login[10];
//	int i;
//	printf("请输入密码\n");
//
//	for (i = 0; i < 3;i++)
//	{
//		scanf("%s", login);
//		if (strcmp(login, passwd)== 0&&i<3)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else if(strcmp(login, passwd) != 0&&i<2)
//		{
//			printf("密码错误，请重新输入");
//		}
//		else if(strcmp(login, passwd) != 0 && i== 2)
//		{
//			printf("三次密码错误，暂时无法登录");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 4;//1+2+6
//	int i, j,x,sum=0;
//	for (i = 1; i <=a; i++)
//	{
//		for (j = 1,x=1;j <=i; j++)
//		{
//			x= x * j;
//		}
//		sum= sum + x;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int left = 0;
//	int k = 88;
//	int sz = sizeof(a) / sizeof(a[0]);
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到值下标%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//}
//int main()
//{
//	int a, i, j=1;
//	int sum = 0;
//	char arr[1];
//	printf("输入一个数");
//	scanf("%d", &a);
//	for (i = 1; i < a+1; i++)
//	{
//		j = i * j;
//	}
//	sum = j;
//		printf("%d\n%d", sum, j);
//	return 0;
//
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <=10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//0为假不循环；
//		k++;
//	printf("循环几次\n%d",k);
//	return 0;
//}
//struct Book 
//{
//	char name[20];
//	int  price;
//
//};
//int main()
//{
//	struct Book b1 = { "c",123 };
//	struct Book b2 = { "java",123 };
//	struct Book b3 = { "pytho",123 };
//	struct Book* pd = &b1;
//	strcpy(b1.name, "java");
//	printf("%s\n", (*pd).name);
//	printf("%s\n", pd->name);
//}

//int main()
//{
//	char ch;
//	while (ch = getchar()!=EOF)
//	{
//		if (ch<'0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char ret = 0,input;
//	char passwd[23] = { 0 };
//	printf("请输入密码->");
//	scanf("%s", passwd);
//	while (input = getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//}
//int main()
//{
//
//	char ch;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//}
//int main()
//{
//	int day;
//	printf("输入时间");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("周一");
//			break;
//	case 2:
//		printf("周2");
//		break;
//	case 3:
//		printf("周3");
//		break;
//	case 4:
//		printf("周4");
//		break;
//
//	}
//}
//int main()
//{
//	int i=1 ,a=1;
//	for (i = 1; i <= 100;i++)
//	{
//		if ((i % 2 )==1)
//		{
//			printf("奇数=%d\n", i);
//		}
//		
//	}
//	while (a < 100)
//	{
//		printf("%d", a);
//		a += 2;
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int a;
//	printf("请输入你的年龄\n");
//	scanf("%d", &a);
//	if (a > 18 && a <= 80)
//		printf("成年");
//	else if (a > 80 && a <= 100)
//		printf("老年人");
//	else if (a > 100)
//		printf("长寿");
//	else
//		printf("未成年");
//}
//struct Book//结构体
//{
//	char name[20];
//	int price;
//	char time[20];
//};
//int main()
//{
//	struct Book b1 = { "声乐",33,"1999.2.21" };
//	struct Book* pd = &b1;
//	strcpy(b1.name, "c++");
//	printf("%s\n", (*pd).name);
//	printf("%s\n", pd->name);
//}
//int main()
//{
//	struct Book b1 = { "声乐",33,"1999.2.21"};
//	printf("书名%s\n", b1.name);
//	printf("价格%d\n", b1.price);
//	printf("出版时间%s\n", b1.time);
//
//}

//int main()
//{
//	double a = 2.31;
//	double* pd = &a;
//	*pd = 321.23;
//	printf("%p\n", pd);
//	printf("%p\n", &a);
//	printf("%lf\n", *pd);
//	printf("%lf\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 231;
//	printf("%p\n", &a);
//	printf("%d\n", *p);
//	printf("%d", a);
//
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 183,b=233;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//}

//#include<stdio.h>
//
//
//int main()
//{
	//extern int g_val;
//	//printf("%d\n", g_val);
//}
//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int add(int x, int y);
//	int size(char arr1[], char arr2[]);
//	int a=0,b=0,c;
//	char arr1[10] = { 0 }, arr2[20] = { 0 };
//	printf("请输入数字");
//	scanf("%d\n%d", &a, &b);
//	c=add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x * y ;
//	return(z) ;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a;
//	char arr[14];
//	scanf("%s", arr);
//	a = strlen(arr);
//	printf("%d\n", a);
//	return 0;
//}
//  
//#include<stdio.h>
//#include<string.h>
//int max(int x, int y, int z)
//{
//	int a,b;
//	a = x > y ? x : y;
//	b = a > z ? a : z;
//	return (b);
//}
//int main()
//{
//	int a, b, c, m;
//	printf("输入三个数字");
//	scanf("%d\n%d\n%d", &a, &b, &c);
//	m = max(a, b, c);
//	printf("%d\n", m);
//
//
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a && b;
//	printf("%d\n", c);
//
//}
