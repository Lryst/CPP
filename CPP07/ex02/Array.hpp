/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:00:09 by lryst             #+#    #+#             */
/*   Updated: 2021/08/10 13:29:29 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
	private :
		T	_t;

	public :
		Array<T>()
		{
			
		}
		Array<T>(Array const & cpy);
		Array<T>(int n)
		{
			
		}
		
		int	array_len(T const & tab);
};

#endif
