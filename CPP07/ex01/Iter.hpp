/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:20:42 by lryst             #+#    #+#             */
/*   Updated: 2021/08/10 12:57:11 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename a>
void	iter(a const *array, int len, void	f(a const &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template<typename a>
void	display(a const content)
{
	std::cout << "content [" << content << "]" << std::endl;
}

#endif
