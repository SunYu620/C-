#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

int main() 
{
	int i = 0;
	int arr[10] = { 0 };
	for ( i = 0; i < 10; i++)
	{
		arr[i] = i;
	}

	return 0;
}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	Reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//void game()
//{
//	char ret = 0;
//	char board[ROW][COL] = { 0 };
//	//��ʼ������
//	InitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board, ROW, COL);
//	while (1)
//	{
//		//�������
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//��������
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�����Ƿ�Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ\n");
//	}
//	else
//	{
//		printf("ƽ��\n");
//	}
//}
//
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*** 1.paly  0.exit  ***\n");
//	printf("***********************\n");
//}
//
//
//void test() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("���������ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("��������ȷ��ѡ��\n");
//				break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//void Bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		// ������һ�������Ѿ�����
//		int flag = 1;
//		//ÿһ������
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				//������������ݲ���ȫ����
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main() {
//	int i = 0;
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// ��������Ϸ
//void game()
//{
//	// ���������
//	int rand_num = rand() % 100 + 1;
//	int input = 0;
//
//	while (1)
//	{
//error:
//		printf("��������µ����֣�1-100����");
//		scanf("%d", &input);
//		if (input < 1 || input>100)
//		{
//			printf("���벻�Ϸ������������룺\n");
//			goto error;
//		}
//		if (input > rand_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < rand_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}
//	}
//}
//
//void menu() {
//
//	printf("************************\n");
//	printf("*** 1.play  0. exit  ***\n");
//	printf("************************\n");
//}
//
//int main() {
//	int input = 0;
//	//����ʱ���
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				break;
//			default:
//				printf("���벻�Ϸ������������룡\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}


// ���ֲ���,�ҵ������±꣬�Ҳ�������-1
//int Binary_search(int arr[], int key, int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int key = 12;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d", ret);
//	}
//	return 0;
//}


//int main() {
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &i);
//	while (i>1)
//	{
//		sum *= i;
//		i--;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	print(input);
//	return 0;
//}

//Func(int* num)
//{
//	(*num)++;
//}
//
//int main() {
//
//	int num = 0;
//	Func(&num);
//	printf("%d\n", num);
//	Func(&num);
//	printf("%d\n", num);
//	Func(&num);
//	printf("%d\n", num);
//}


//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////�Ʋ���������
//int main() {
//	int n = 0;
//	int input = 0;
//	scanf("%d", &input);
//	n = Fib(input);
//	printf("%d\n", n);
//}



//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j < sqrt(i); j++)
//		{
//			if ( i%j == 0 )
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	scanf("%d%d", &m, &n);
//	while (tmp = m%n)
//	{
//		m = n;
//		n = tmp;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main() {
//
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= 9; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return 0;
//}


//int main() {
//	int i = 0;
//	char pwd[10] = "";
//	for ( i = 0; i < 3; i++)
//	{
//		printf("����������>��");
//		scanf("%s", pwd);
//		if (0 == strcmp("password", pwd)) {
//			break;
//		}
//		if (i < 2)
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	else
//	{
//		printf("log in\n");
//	}
//
//	return 0;
//}

//int main() {
//
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	printf("%s\n", arr2);
//	while (left<=right)
//	{
//
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//
//	}
//	return 0;
//}
