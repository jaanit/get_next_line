/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:39:05 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/30 11:22:52 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr( char *s, int c);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_readfile(char *str, int fd);
char	*ft__next(char *str);
char	*ft_ligne(char *str);
#endif
