#include <iostream>

void swap(int &A, int &B);
void print_array(int *A, size_t size);
void bubble_sort(int *A, size_t size);

int main (int argc, char* argv[])
{
	int A[] = {45,34,52342,34125234,523,41,234,123,41,234,123,412,345,67,458,8790,8078,56,34523,8,65,70,7,9,7,568,768,5};
	size_t size = sizeof(A)/sizeof(A[0]);

	print_array(A, size);
	bubble_sort(A, size);
	print_array(A, size);

	return 0;
}
void swap(int &A, int &B)
{
	int C = B;
	B = A;
	A = C;
}

void print_array(int *A, size_t size)
{
	for(size_t i = 0; i < size; i++) 
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}

void bubble_sort(int *A, size_t size)
{
	for (size_t i = 1; i <= size-1; i++)
	{
		for (size_t j = size-1; j >= i; j--)
		{
			if (A[j-1] > A[j])
			{
				swap(A[j-1], A[j]);
			}
		}
	}
}
