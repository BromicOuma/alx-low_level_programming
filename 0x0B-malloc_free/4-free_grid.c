#include "main.h"

/**
  * free_grid - function to free memory allocation
  * @grid: pointer to pointer of grid function
  * @height: the height
  *
  * Return: freed grid
  */

void free_grid(int **grid, int height)

{

	int i;



	for (i = 0; i < height; i++)

	{

		free(grid[i]);

	}



	free(grid);

}
