#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

static void ft_kill(int	pid, char *str)
{
	int	i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while(i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1); // Send a 1
			else
				kill(pid, SIGUSR2); // Send a 0
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR2);
		usleep(100);
	}
}

int main(int argc, char **argv)
{
	if (argc != 3 || !ft_strlen(argv[2]))
		return (1);

	ft_kill(ft_atoi(argv[1]), argv[2]);
}