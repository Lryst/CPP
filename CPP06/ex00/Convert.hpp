/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:44:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 03:56:32 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <iomanip>

class Convert
{
	private :
		std::string _cast;
		int _type;
		Convert();

	public :
		Convert(std::string cast);
		Convert(Convert const & cpy);
		Convert const & operator=(Convert const & src);
		~Convert();
		
		int	cast_from_int();
		int	cast_from_char();
		int	cast_from_double();
		int	cast_from_float();
		int	cast_from_spe();
		int	cast_from_spef();

		void	setType(int  type);

		std::string	getCast();
		int		getType();
		
		int		casting();
};

#endif
