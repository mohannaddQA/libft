int	skip_spaces(const char *nptr, int *i)
{
	while (nptr[*i] && (nptr[*i] == 32 || (nptr[*i] >= 9 && nptr[*i] <= 13)))
	{
		(*i)++;
	}
	return (0);
}

int	sign_state(const char *nptr, int *i)
{
	int	sign;

	sign = 1;
	if (nptr[*i] && (nptr[*i] == '+' || nptr[*i] == '-'))
	{
		if (nptr[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	skip_spaces(nptr, &i);
	sign = sign_state(nptr, &i);
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
// Note that we must define nptr parameter as const becasue we are passing it as a const value 