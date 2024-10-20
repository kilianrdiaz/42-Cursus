/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:23:38 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/10/20 18:38:52 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

/*void	exec(char **argv, char **cmd, char **envp)
{
	char
}*/

int main(int argc, char **argv, char **envp)
{
	char	**cmd1;
	char	**cmd2;
	int		pipefd[2];
	int		fd;
	pid_t	pid;

	if (argc != 5)
		return (0);
	cmd1 = ft_split(argv[2], ' ');
	cmd2 = ft_split(argv[3], ' ');
	if (pipe(pipefd) == -1)
	{
		perror("Error al crear la tuberia");
		exit(EXIT_FAILURE);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error al hacer fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		fd = open(argv[1], O_RDONLY, 0777);
		dup2(fd, STDIN_FILENO);
		dup2(pipefd[1], STDOUT_FILENO);
		close(pipefd[0]);
		if (execve(get_path(argv[2], envp), cmd1, envp) == -1)
		{
			perror("Error en exceve del proceso hijo.");
			ft_free_tab(cmd1);
			exit (EXIT_FAILURE);
		}
	}
	else
	{
		fd = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
		dup2(fd, STDOUT_FILENO);
		dup2(pipefd[0], STDIN_FILENO);
		close (pipefd[1]);
		execve(get_path(argv[3], envp), cmd2, envp);
	}
	return 0;
}
