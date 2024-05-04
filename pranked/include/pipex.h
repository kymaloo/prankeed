/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 05:24:07 by trgaspar          #+#    #+#             */
/*   Updated: 2024/03/20 05:24:07 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_pipex
{
	int			pipefd[2];
	int			intfile;
	int			outfile;
	char		*path;
	char		**path_cmd;
	char		**cmd;
	char		*cmd_path;
}				t_pipex;