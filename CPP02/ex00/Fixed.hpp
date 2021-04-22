/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:17:30 by lryst             #+#    #+#             */
/*   Updated: 2021/04/22 18:05:17 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
	private :
		int _p_fixe;
		const static int _nbr_bits = 8;
	public :
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & cpy);
		Fixed & operator=(Fixed const & src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif