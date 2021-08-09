/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:54:04 by lryst             #+#    #+#             */
/*   Updated: 2021/08/09 12:34:00 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename T>
/* class Whatever
{
	private :
		T   _val;
		Whatever<T>();

	public :
		Whatever(T t, T u);
		Whatever(Whatever<T> const & cpy);
		Whatever const &operator=(Whatever<T> const & src);
		~Whatever();

		void	swap(T & t, T & u);
		T const & min(T const & t, T const & u);
		T const & max(T const & t, T const & u);
		void	swap<T>(T & t, T & u)
		{
			T 	*tmp;
			*tmp->_val = &u->_val;
			*u->_val = &t->_val;
			*t->_val = &tmp->_val;
		};
		T const & min<T>(T const & t, T const & u)
		{
			if (t < u._val)
				return (t._val);
			return (u._val);
		};
		T const & max<T>(T const & t, T const & u)
		{
			if (t._val > u._val)
				return (t._val);
			return (u._val);
		};
}; */

//template<typename T>
void	swap(T & t, T & u)
{
	T 	tmp;
	tmp = u;
	u = t;
	t = tmp;
}

template<typename T>
T const & min(T const & t, T const & u)
{
	if (t < u)
		return (t);
	return (u);
}

template<typename T>
T const & max(T const & t, T const & u)
{
	if (t > u)
		return (t);
	return (u);
}

#endif
