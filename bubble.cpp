#include <iostream>

void print_array(int *A, size_t num);
void bubble_sort(int *A, size_t num);
void swap(int &A, int &B);

int main(int argc, char *argv[])
{
	int arr[] = {2435234,23452345,2452,342,24,7856,3453546,5768,4,42,4678,96,763,4};
	size_t size = sizeof(arr)/sizeof(arr[0]);

	print_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	return 0;
}

void print_array(int *A, size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}

void bubble_sort(int *A, size_t num)
{
	for (size_t i = 1; i <= num-1; ++i)
	{
		for (size_t j = num-1; j >= i; --j)
		{
			if (A[j-1] > A[j])
			{
				swap(A[j-1], A[j]);
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

