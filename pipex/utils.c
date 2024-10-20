/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:53:47 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/10/20 17:57:30 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		free(tab[i++]);
	free (tab);
	return ;
}

char	*ft_getenv(char **envp)
{
	int	i;

	i = 0;
	while (envp[i] != NULL)
	{
		if (ft_strncmp(envp[i], "PATH=", 5))
			return envp[i] + 6;
		i++;
	}
	return (NULL);
}

char	*get_path(char **cmd, char **envp)
{
	char	**full_path;
	char	*path;
	char	*exec;
	int		i;

	full_path = ft_split(ft_getenv(envp), ':');
	i = 0;
	while (full_path[i] != NULL)
	{
		path = ft_strjoin(full_path[i], "/");
		exec = ft_strjoin(path, cmd[0]);
		free(path);
		if (access(exec, F_OK | X_OK))
		{
			ft_free_tab(cmd);
			ft_free_tab(full_path);
			return (exec);
		}
		free(exec);
		i++;
	}
	ft_free_tab(cmd);
	ft_free_tab(full_path);
	return (cmd[0]);
}

