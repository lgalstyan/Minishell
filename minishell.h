#ifndef MINISHELL
#define MINISHELL

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <signal.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "libft.h"

typedef struct s_node
{
	char **heardock;
	char **append;
	char **infile;
	char **outfile;
	char **cmd;
}			t_node;

#endif
