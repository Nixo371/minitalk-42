#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static void sig_handler(int signum)
{
	static unsigned char	c = 0;
	static int				i = 0;

	c |= (signum == SIGUSR1); //Make current bit a "1" is SIGUSR1 is passed
	if (++i == 8)
	{
		i = 0;
		ft_putchar_fd(c, 1);
		c = 0;
	}
	else
		c <<= 1;
}

int main(void)
{
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);

	ft_putstr_fd("Server PID: ", STDOUT_FILENO);
	ft_putnbr_fd(getpid(), STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	while(1)
	{
		pause();
	}	
	return (0);
}