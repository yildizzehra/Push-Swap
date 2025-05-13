

#include "../inc/push_swap.h"

void	free_n_exit(t_data *data, char *msg)
{
	if (msg)
		write(2, msg, ft_strlen(msg));
	if (data)
	{
		if (data->a)
			free(data->a);
		if (data->b)
			free(data->b);
		if (data->join_args)
			free (data->join_args);
		if (data)
			free(data);
	}
	exit(1);
}

static void	arg_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		exit(0);
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || argv[i][0] == ' ')
			free_n_exit(NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if ((!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
			&& (argv[i][j] != '-' && argv[i][j] != '+' && argv[i][j] != ' '))
			|| (argv[i][j] == '-' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '+' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '-' && argv[i][j + 1] == ' ')
			|| (argv[i][j] == '+' && argv[i][j + 1] == ' '))
				free_n_exit(NULL, "Error\n");
			j++;
		}
	}
}

static void	space_check(int ac, char **av, t_data *data)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	tmp2 = ft_strdup("");
	while (++i < ac && av[1])
	{
		tmp = ft_strjoin(tmp2, av[i]);
		if (tmp2)
			free(tmp2);
		if (i != ac -1)
		{
			tmp2 = ft_strjoin(tmp, " ");
			if (tmp)
				free(tmp);
			tmp = tmp2;
		}
	}
	data->join_args = ft_strdup(tmp);
	if (data->join_args == NULL)
		free_n_exit(data, "Error\n");
	if (tmp)
		free(tmp);
}

int	main(int ac, char **av)
{
	t_data	*data;

	arg_check(ac, av);
	data = malloc(sizeof * data);
	if (!data)
		exit(1);
	initialize_data(ac, av, data);
	space_check(ac, av, data);
	split_and_atoi(data);
	exit_sorted_or_duplicate(data, 0);
	create_index(data);
	if (data->a_size == 2 && data->a[0] > data->a[1])
		swap("sa", data->a, data->a_size);
	else if (data->a_size == 3)
		three(data);
	else if (data->a_size >= 4 && data->a_size <= 5)
		four_and_five(data);
	else
		radix_sort(data);
	exit_sorted_or_duplicate(data, 1);
	free_n_exit(data, "Error\n");
}
