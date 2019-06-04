#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1) {
		i = 0;
		while (av[++i]) {
			j = -1;
			while (av[i][++j]) {
				av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << " *LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

