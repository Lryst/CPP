/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:17:30 by lryst             #+#    #+#             */
/*   Updated: 2021/04/22 22:53:47 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
	private :
		int _p_fixe;
		const static int _nbr_bits = 8;

	public :
		Fixed(void);
		Fixed(int const nbr);
		Fixed(float const fnbr);
		Fixed(Fixed const & cpy);
		
		~Fixed(void);
		
		Fixed & operator=(Fixed const & src);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & src);

#endif