#include "libft.h"

static int	num_len(int n)
{
	int				len;

	len = 1;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	if (n < 0)
		return (len + 1);
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*itoa;
	long			long_n;


	long_n = (long)n; 
	len = num_len(n);
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	itoa[len--] = '\0';
	if (long_n < 0)
	{
		itoa[0] = '-';
		long_n *= -1;
	}
	while (len >= 0)
	{
		if (itoa[len] == '-')
			break ;
		itoa[len--] = (long_n % 10) + '0';
		long_n /= 10;
	}
	return (itoa);
}
int main()
{
	// // this causes an overflow to -2147483648
	ft_itoa(-2147483648);
	// int n = -2147483648;
	// printf("%d \n%d", n, n * -1);
}



/*
#include "libft.h"

char	*ft_itoa_negative(long n, int len)
{
	char	*itoa;

	n *= -1;
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	itoa[0] = '-';
	while (len > 1)
	{
		itoa[(len--) - 1] = (n % 10) + '0';
		n /= 10;
	}
	printf("%s", itoa);
	return (itoa);
}

char	*ft_itoa(int n)
{
	int				len;
	int				num_cpy;
	char			*itoa;

	num_cpy = n;
	len = 1;
	while (num_cpy / 10)
	{
		num_cpy /= 10;
		len++;
	}
	if (n < 0)
		return (ft_itoa_negative(n, len + 1));
		// Note when I did it like this and tried to send it as a positive number right away, it fails for the boundries ft_itoa_negative(-n, len + 1)
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	while (len)
	{
		itoa[(len--) - 1] = (n % 10) + '0';
		n /= 10;
	}
	return (itoa);
}
// int main()
// {
// 	// // this causes an overflow to -2147483648
// 	// ft_itoa(2147483648);
// 	int n = -2147483648;
// 	printf("%d \n%d", n, n * -1);
// }

*/

