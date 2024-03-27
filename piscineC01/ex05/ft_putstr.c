void	ft_putstr.c(char *str)
{
	char *str;
	
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
