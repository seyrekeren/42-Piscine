#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int s = 0;
	while(dest[s] != '\0')
	{
		s ++;
	}

	while(i < size)
	{
		dest[s + i] = src[i];
		i++;
	}
	

}

int main(void)
{
	char dizi1[50] =  "dizi1'in icindekiler", dizi2[50] = "dizi2'nin icindekiler";

	ft_strlcpy(dizi2, dizi1, 10);

	write(1, &dizi2[23], 1);

	return (0);
}
