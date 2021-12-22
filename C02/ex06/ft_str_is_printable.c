#include <stdio.h>
#include <unistd.h>
int	ft_str_is_pritable(char *str)
{
	int size;

	while(str[size] != '\0')
		size++;
	if(size == 0)
	{printf("%d",0);
	return 0;
	}
	size = size - 1;
	while(size > 0)
	{
		char x = str[size] + '0';
		if(x < 32 || x > )
		{printf("%d",1);
			return 1;
		}
	}
	printf("%d",0);
	return 0;
}

int main(void)
{
	ft_str_is_pritable("flaskdfalsfkalsş4");
	return 0;
}
