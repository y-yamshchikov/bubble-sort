#include <iostream>


int bubble_sort(int *array, int n/*number of elements*/);
void swap(int &a, int &b);
int print_array(int *array, int n/*number of elements*/);

int main (int argc, char* argv[])
{
#define NUM 10
	int a[NUM] = {1,4,2,6,3,5,3,2,6,6};

	bubble_sort(a, NUM);
	print_array(a, NUM);

	return 0;
}

int bubble_sort(int *array, int n/*number of elements*/)
{
	if (array == nullptr)
	{
		return 1;
	}
	if (n < 2)
	{
		return 0;
	}

	for (int i = n-1; i != 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j] > array[i])
			{
				swap(array[j], array[i]);
			}
		}
	}
}
void swap(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

int print_array(int *array, int n/*number of elements*/)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout<<std::endl;
}
