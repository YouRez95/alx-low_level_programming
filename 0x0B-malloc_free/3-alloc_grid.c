#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **array;
        int i = 0;

        if (width <= 0 || height <= 0)
                return NULL;
        array = (int **)malloc(width * height * sizeof(int));
        while (i < (int)(width * height * sizeof(int)))
        {
                *(array + i) = 0;
                i++;
        }

        return (array);

}

