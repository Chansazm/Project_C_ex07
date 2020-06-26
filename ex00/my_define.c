#define FALSE 0
#define TRUE 1
#define SUCCESS 0
#define EVEN(a) ((a % 2 == 0) ? TRUE : FALSE)
#define EVEN_MSG "I have an even number of arguments." 
#define ODD_MSG "I have an odd number of arguments."


void	my_putstr(char *str)
{
    int index = 0;
	while (str[index] != '\0') {
		write(1, &str[index], 1);
		index++;
	}
}

_Bool	my_is_even(int nbr){
	return (EVEN(nbr) ? TRUE : FALSE);
}

int		my_main(int argc)
{
	if (my_is_even(argc - 1) == TRUE)
		my_putstr(EVEN_MSG);
	else
		my_putstr(ODD_MSG);
	return (SUCCESS);
}

char* my_define(int param_1)
{
    return ((my_is_even(param_1)) ? EVEN_MSG : ODD_MSG);
}