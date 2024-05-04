/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 03:32:57 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/03 03:32:57 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	init_pipex(t_pipex *pipex, char **argv, char **envp)
{
	pipex->infile = open(argv[1], O_RDONLY);
	if (pipex->infile == -1)
		ft_printf("Error: Open infile failed.\n");
	pipex->outfile = open(argv[4], O_RDWR | O_TRUNC | O_CREAT, 0640);
	if (pipex->outfile == -1)
		ft_printf("Error: Open outfile failed.\n");
	pipex->path = find_path(envp);
	pipex->path_cmd = ft_split(pipex->path, ':');
	if (!pipex->path_cmd)
		ft_printf("Error: Command not found.\n");
}

char	*find_path(char *envp[])
{
	int	i;

	i = ft_strlen("PATH=");
	while (ft_strncmp("PATH=", *envp, i))
		envp++;
	if (*envp == NULL)
		error_msg("Error\nCommand path not found.\n", 0);
	return (*envp + i);
}