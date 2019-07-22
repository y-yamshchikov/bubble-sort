#include <iostream>

void print_array(int *A, size_t size);
void bubble_sort(int *A, size_t size);
void swap(int &A, int &B);

int main(int argc, char *argv[])
{
	int A[] = {32443,55675,5656,43,567,94,36,74764656,576,8,798,45,6,52,34,556,67,8,5,900856543,43,657,4733563,56,3563,73,5346,53};
	size_t size = sizeof(A)/sizeof(A[0]);

	print_array(A, size);
	bubble_sort(A, size);
	print_array(A, size);

	return 0;
}

void print_array(int *A, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}

void bubble_sort(int *A, size_t size)
{
	for (size_t i = 1; i <= size-1; ++i)
	{
		for (size_t j = size-1; j >= i; --j)
		{
			if (A[j-1] > A[j])
			{
				swap(A[j], A[j-1]);
			}
		}
	}
}

void swap(int &A, int &B)
{
	int C = B;
	B = A;
	A = C;
}
