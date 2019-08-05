#include <iostream>

void print_array(int *A, size_t size);
void swap(int &A, int &B);
void bubble_sort(int *A, size_t size);

int main(int argc, char *argv[])
{
	int A[] = {23,523452,45234,5234,2474585,464,5,65,7365,8456,345,64376467,56,45,6,4356,74,6,7};
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
		for (size_t j = size-1; j >= i ; --j)
		{
			if (A[j-1] > A[j])
			{
				swap(A[j-1], A[j]);
			}
		}
	}
}
