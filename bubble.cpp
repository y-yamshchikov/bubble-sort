#include <iostream>

void bubble_sort(int *A, int num);
void swap(int &A, int &B);
void print_array(int *A, int num);

int STORAGE[256000];

int main(int argc, char *argv[])
{
	int arr[] = {3,55,2,7,89,1,99,7,3,4,56,7,2434,24,68,888,5};
	int size = sizeof(arr)/sizeof(int);

	print_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	return 0;
}

void bubble_sort(int *A, int num)
{
	if (num < 2)
	{
		return;
	}

	for (int i = num-1; i > 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[j] > A[j+1])
			{
				swap(A[j], A[j+1]);
			}
		}
	}
}

void swap(int &A, int &B)
{
	int C = A;
	A = B;
	B = C;
}

void print_array(int *A, int num)
{
	for (int i = 0; i < num; i++)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}
