#include "minishell.h"

// int main( int argc, char **argv, char **envp)
// {
//     int numberLines = 0;
//     if ( (argc == 2) && strcmp(argv[1], "/n" ) == 0 )
//          numberLines = 1;

//     for ( int i = 0; envp[i] != NULL; ++i )
//     {
//         if ( numberLines )
//             printf("%d : ", i);
//         printf("%s\n", envp[i]);
//     }
// 	return (0);
// }

void ignore_signals()
{
	// "Ctrl-C"
   	signal(SIGINT, SIG_IGN);
	// "Ctrl-Z"
    signal(SIGTSTP, SIG_IGN);
	// "Ctrl-\"
    signal(SIGQUIT, SIG_IGN);
}

int main()
{
	char *line;
	int i  = 0; 
	int fd = open("./dup.txt", O_CREAT);
	if(fd < 0)
        printf("Error: File not found\n");
	// dup(fd);
	// ignore_signals();
	dup2(fd, 1);
	while (i < 2)
	{
		line = readline("Line :");
		// printf("%s \n", line);
		write(fd, line, ft_strlen(line));
		++i;
	}
	return (0);
}