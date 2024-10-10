/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:23:38 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/10/10 17:53:40 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

int main(int argc, char **argv)
{
	char	**cmd1;
	char	**cmd2;
	int		pipedfd[2];
	pid_t	pid1, pid2;

	cmd1 = ft_split(argv[2]);
	cmd2 = ft_split(argv[3]);
	
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
		exceve
	}

}
