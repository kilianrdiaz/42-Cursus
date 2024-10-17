/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:23:38 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/10/17 20:56:50 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

int main(int argc, char **argv, char **envp)
{
	char	**cmd1;
	char	**cmd2;
	int		pipefd[2];
	pid_t	pid1;
	pid_t	pid2;

	if (argc != 5)
		return (0);
	cmd1 = ft_split(argv[2], ' ');
	cmd2 = ft_split(argv[3], ' ');
	if (pipe(pipefd) == -1)
	{
		perror ("Error al crear la tuberia");
		exit(EXIT_FAILURE);
	}
	pid1 = fork();
	if (pid1 == -1)
	{
		perror ("Error al hacer fork");
		exit (EXIT_FAILURE);
	}
	if (pid1 == 0)
	{
		close(pipefd[0]);
		dup2(pipefd[1], STDOUT_FILENO);
		close(pipefd[1]);
		execve(get_path(argv[2], envp), cmd1, envp);
		perror("Error en exceve del primer proceso hijo.");
		exit (EXIT_FAILURE);
	}
	pid2 = fork();
	if (pid2 == -1)
	{
		perror ("Error al hacer fork");
		exit (EXIT_FAILURE);
	}
	if (pid2 == 0)
	{
		close (pipefd[1]);
		dup2 (pipefd[0], STDIN_FILENO);
		close (pipefd[0]);
		execve(get_path(argv[3], envp), cmd2, envp);
		perror ("Error en exceve del segundo proceso.");
		exit(EXIT_FAILURE);
	}

	close(pipefd[0]);
	close(pipefd[1]);
	wait(NULL);
	wait(NULL);
	return 0;
}
