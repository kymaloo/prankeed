/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 05:21:44 by trgaspar          #+#    #+#             */
/*   Updated: 2024/03/20 05:21:44 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char *argv[], char *envp[])
{
	t_pipex	*pipex;

	if (*envp == NULL)
		return (1);
	if (argc != 5)
		return (1);
	pipex = ft_calloc(1, sizeof(t_pipex));
	if (!pipex)
		return (1);
	if (pipe(pipex.pipefd) < 0)
		free_file(&pipex);
}

// Reste à faire : 1) Vérifier la commande
//				   2) Récuperer la sorti du 1er fichier
//				   3) Executer la commande du le fichier

//				   4) Vérifier la commande
//				   5) Récuperer la sorti du 1er commande
//				   6) Executer la commande de la 1ere commande