#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}
void ft_print_numbers(void) {
	int i = 1;
	while(i >= 1 & i <=9){
		ft_putchar(i);
		i++;
	}
}
