#include <stdio.h>
 
int main()
{
 
        int array[50], size, j, largest;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (j = 0; j < size; j++)
		scanf("%d", &array[j]);
 
        largest = array[0];
 
        for (j = 1; j < size; j++) 
        {
		if (largest < array[j])
			largest = array[j];
	}
 
        printf("\n largest element present in the given array is : %d", largest);
 
        return 0;
 
}
