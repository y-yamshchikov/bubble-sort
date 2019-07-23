#include <iostream>

void print_array(int *A, size_t size);
void swap(int &A, int &B);
void bubble_sort(int *A, size_t size);
void bubble_sort(int *A, size_t size);

int main(int argc, char *argv[])
{
	int arr[] = {3242345,35657,48956,3,4,356467,5,896,764,5,5,656785,697,767,54};
	size_t size = sizeof(arr)/sizeof(arr[0]);

	print_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	return 0;
}

void print_array(int *A, size_t size)
{
	for(size_t i = 0; i < size; ++i)
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
			if (A[j-1] > A[j])
			{
				swap(A[j-1], A[j]);
			}
		}
	}
}
