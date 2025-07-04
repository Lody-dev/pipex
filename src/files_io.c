/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_io.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viaremko <lodyiaremko@proton.me>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:46:43 by viaremko          #+#    #+#             */
/*   Updated: 2025/06/22 19:11:34 by viaremko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/pipex.h"

void	open_io_files(t_pipex *px, int argc, char **argv)
{
	int	infile;
	int	outfile;

	infile = 1;
	outfile = argc - 1;
	if (px->heredoc == 0)
	{
		px->outfile_fd = open(argv[outfile], O_CREAT | O_WRONLY | O_TRUNC,
				0644);
		if (px->outfile_fd < 0)
		{
			ft_error(1, "Can't create/open outfile\n");
		}
		px->infile_fd = open(argv[infile], O_RDONLY);
		if (px->infile_fd < 0)
		{
			close(px->outfile_fd);
			ft_error(1, "Can't open infile\n");
		}
	}
	else
		px->outfile_fd = open(argv[outfile], O_CREAT | O_WRONLY | O_APPEND,
				0644);
}
