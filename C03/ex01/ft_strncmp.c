#include <unistd.h>
#include <stdio.h>
int	ft_strncmp(char *s1, char* s2, unsigned int n)
{
	int i = 0;
	int j = 0;

	while(j < n)
	{
		if((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		{
			i++;	
		}
		j++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char a[] = "Ahmet buraya geldi";
	char b[] = "Ahmet buradan gitti.";
	int x;
	
	x = ft_strncmp(a, b, 14);
	printf("%d",x);
	return (0);
}
