/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-ol <matde-ol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:35:17 by matde-ol          #+#    #+#             */
/*   Updated: 2023/11/20 18:12:19 by matde-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strchr(char *src);
int		ft_strlen(char *src);
char	*ft_substr(char *src, int start, int len);
char	*ft_strlcpy_f(char *src, int len);
int		ft_strchr(char *src);
int		ft_strlen(char *src);
int		ft_security(char *reste, char *dest);
char	*get_next_line(int fd);
#endif
