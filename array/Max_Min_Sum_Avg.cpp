#include <iostream>
using namespace std;

struct array
{
	int a[10];
	int size;
	int length;
};

void display(struct array arr)
{
	int i;
	for (i = 0; i < arr.length; i++)
	{
		printf("%d\n", arr.a[i]);
	}
}

int Max(struct array arr)
{
	int max;
	int i;
	max = arr.a[0];
	for (i = 0; i <= arr.length; i++)
	{
		if (max < arr.a[i])
		{
			max = arr.a[i];
		}
	}
	return max;
}

int Min(struct array arr)
{
	int min;
	int i;
	min = arr.a[0];
	for (i = 0; i <= arr.length; i++)
	{
		if (min > arr.a[i])
		{
			min = arr.a[i];
		}
	}
	return min;
}

int Sum(struct array arr)
{
	int i;
	int sum = 0;

	for (i = 0; i < arr.length; i++)
	{
		sum = sum + arr.a[i];
	}
	return sum;
}

float Avg(struct array arr)
{

	return (float)Sum(arr) / arr.length;
}

int main()
{
	struct array arr = {{0, 4, 5, 6, 4, 98, 7, 6, 5}, 10, 10};

	printf("%d\n ", Max(arr));

	//      printf("%d\n",Min(arr));

	//      printf("%d\n",Sum(arr));

	printf("%f\n", Avg(arr));

	display(arr);

	return 0;
}
