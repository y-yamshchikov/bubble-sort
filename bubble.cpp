#include <iostream>

void print_array(int *A, size_t num);
void swap(int &A, int &B);
void bubble_sort(int *A, size_t num);

int main(int argc, char *argv[])
{
	int arr[] = {31423,34252345,234,52,3423412,523412342,4516,68577,462,34243,566,74,552341,2};
	size_t size = sizeof(arr)/sizeof(arr[0]);

	print_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	return 0;
}

void bubble_sort(int *A, size_t num)
{
	if (num < 2)
	{
		return;
	}

	for (size_t i = num-1; i > 0; --i)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (A[j] > A[j+1])
			{
				swap(A[j], A[j+1]);
			}
		}
	}
}

void print_array(int *A, size_t num)
{
	for (size_t i = 0; i < num; i++)
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
