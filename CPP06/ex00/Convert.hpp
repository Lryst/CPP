/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:44:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 01:04:27 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>
# include <cctype>

class Convert
{
	private :
		std::string _cast;
		int _type;
		Convert();

	public :
		Convert(std::string cast);
		Convert(Convert const & cpy);
		Convert const & operator=(Convert consy & src);
		~Convert();
		
		/* void	cast_from_int();
		void	cast_from_char();
		void	cast_from_double();
		void	cast_from_float(); */

		void	setType();
		int		getType();
		
		int		casting();
};

#endif
