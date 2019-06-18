#include <iostream>

void bubble_sort(int *A, size_t num);
void swap(int &A, int &B);
void print_array(int *A, size_t num);

int STORAGE[256000];

int main(int argc, char *argv[])
{
	int arr[] = {3,5,5,555,32,34,78,8,995456,13,8,654,3,6,777,3212,642855};
	size_t size = sizeof(arr)/sizeof(int);

	print_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	return 0;
}

void bubble_sort(int *A, size_t num)
{
	for (size_t i = num-1; i > 1; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (A[j] > A[i])
			{
				swap(A[i], A[j]);
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

void print_array(int *A, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}
