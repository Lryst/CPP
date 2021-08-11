/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42f.r>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:17:38 by lryst             #+#    #+#             */
/*   Updated: 2021/08/11 16:02:08 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstdlib>
# include <iostream>
# include <exception>

template <class T>
class Array
{
	private:
		T	*_t;
		unsigned int _len;

	public:
		Array();
		Array(int n);
		Array(Array const & cpy);
		~Array();

		Array<T> & operator=(Array const src);
		T & operator[](unsigned int nbr) const;
		
		unsigned int	size();
		void			print_array() const;
};

template <class T>
Array<T>::Array()
{
	this->_len = 0;
	this->_t = new T;
}

template <class T>
Array<T>::Array(int n)
{
	this->_len = n;
	this->_t = new T[n];
}

template <class T>
Array<T>::Array(Array const & cpy)
{
	this->_t = new T[cpy._len];
	for (unsigned int i = 0; i < cpy._len; i++)
		this->_t[i] = cpy._t[i];
	this->_len = cpy._len;
}

template <class T>
Array<T>::~Array()
{
	if (this->_t)
		delete[] this->_t;
}

template <class T>
Array<T>	& Array<T>::operator=(Array const src)
{
	if (this->_t)
		delete [] this->_t;
	this->_t = new T[src._len];
	this->_len = src._len;
	for (unsigned int i = 0; i < this->_len; i++)
		this->_t[i] = src._t[i];
	return *this;
}

template <class T>
T & Array<T>::operator[](unsigned int nbr) const
{
	if (nbr > this->_len)
		throw std::exception();
	return (this->_t[nbr]);
}

template <class T>
unsigned int Array<T>::size()
{
	return this->_len;
}

template <class T>
void	Array<T>::print_array() const
{
	for (unsigned int i = 0; i < this->_len; i++)
		std::cout << this->_t[i] << std::endl;
}

#endif
