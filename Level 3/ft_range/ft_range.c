#include <unistd.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{

	int size =  abs(end-start) + 1;
	int *arr = (int *)malloc(size * sizeof(int));;
	int i = 0;
	
	while (i < size)
		{
			if (end > start)
				arr[i++] = start++;
			else
				arr[i++] = start--;
		}
	return(arr);
}
