#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	k;
	int	temp;

	j = 0;
	k = 0;
	while (j < size)
	{
		k = 0;
		while (k < size)
		{
			if (tab[k] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[k];
				tab[k] = temp;
			}
			k++;
		}
		j++;
	}
}
