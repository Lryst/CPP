/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:44:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/05 22:49:23 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>

class Convert
{
	private :
		std::string _cast;
		Convert();

	public :
		Convert(std::string cast);
		Convert(Convert const & cpy);
		Convert const & operator=(Convert consy & src);
		~Convert();
		
		void	cast_to_int();
		void	cast_to_char();
		void	cast_to_double();
		void	cast_to_float();	
};

#endif
