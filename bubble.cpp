#include <iostream>

void swap(int &A, int &B);
void print_array(int *A, size_t num);
void bubble_sort(int *A, size_t num);

int main(int argc, char *argv[])
{
	int arr[] = {324,345234523,452,34,3,123,2342,34524,52,3452,345,13,123,41324,134,526634746,4,6,3};
	size_t size = sizeof(arr)/sizeof(arr[0]);

	print_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	return 0;
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

void bubble_sort(int *A, size_t num)
{
	for (size_t i = 1; i <= num-1; ++i)
	{
		for (size_t j = num-1; j >=i; --j)
		{
			if (A[j-1] > A[j])
			{
				swap(A[j-1], A[j]);
			}
		}
	}
}
