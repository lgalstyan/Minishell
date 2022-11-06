#include "minishell.h"

// stanum e char **, stugum e te inch hramar e u kanchum e hamapatasxany 
void	switch_commands(char **arr)
{
	if (!ft_strcmp(arr[0], "echo"))
	{
		printf("->echo<-");
		//cmp_echo();
	}
	if (!ft_strcmp(arr[0], "cd"))
	{
		printf("-> cd <-");
		//cmp_cd();
	}
	else if (!ft_strcmp(arr[0], "pwd"))
	{
		printf("-> pwd <-");
		//cmp_pwd();
	}
	else if (!ft_strcmp(arr[0], "export"))
	{
		printf("-> export <-");
		//cmp_export();
	}
	else if (!ft_strcmp(arr[0], "unset"))
	{
		printf("-> unset <-");
		//cmp_unset();
	}
	else if (!ft_strcmp(arr[0], "env"))
	{
		printf("-> env <-");
		//cmp_env();
	}
	else if (!ft_strcmp(arr[0], "exit"))
	{
		printf("-> exit <-");
		//cmp_exit();
	}
}