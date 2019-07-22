#include <iostream>

void swap(int &A, int &B);
void print_array(int *A, size_t num);
void bubble_sort(int *A, size_t num);

int main(int argc, char *argv[])
{
	int A[] = {3424,2452,43,52,432,34,2134523452,4234,234,243524,2,34,74678578,6786,69,6,85,74,5,63,4,52,34};
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

void print_array(int *A, size_t num)
{
	for (size_t i = 0; i < num; ++i)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<std::endl;
}

void bubble_sort(int *A, size_t num)
{
	for(size_t i = 1; i <= num-1; ++i)
	{
		for(size_t j = num-1; j >= i; --j)
		{
			if (A[j-1] > A[j])
			{
				swap(A[j], A[j-1]);
			}
		}
	}
}
