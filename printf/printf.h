/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qserbu <qserbu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:20:29 by qserbu            #+#    #+#             */
/*   Updated: 2023/11/24 18:32:17 by qserbu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>

int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr_base(int n);
int				ft_printf(const char *s, ...);
int				ft_putnbr_pos(unsigned int n);
int				ft_putnbr_hexa(long long int n);
int				ft_putnbr_hexalow(long long int n);

unsigned int	ft_pointer(void *ptr);
#endif