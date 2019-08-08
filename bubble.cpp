#include <iostream>

void bubble_sort(int *A, size_t size);
void swap(int &A, int &B);
void print_array(int *A, size_t size);

int main (int argc, char *argv[])
{
	int A[] = {23423,42345,234,2,34243,5623543,62,534,23452,462,345,234,523452,34612,43,3};
	size_t size = sizeof(A)/sizeof(A[0]);

	print_array(A, size);
	bubble_sort(A, size);
	print_array(A, size);

	return 0;
}

void print_array(int *A, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}

void swap(int &A, int &B)
{
	int C = B;
	B = A;
	A = C;
}

void bubble_sort(int *A, size_t size)
{
	for (size_t i = 1; i <= size-1; ++i)
	{
		for (size_t j = size-1; j >= i; --j)
		{
			if(A[j-1] > A[j])
			{
				swap(A[j-1], A[j]);
			}
		}
	}
}
