/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:21:40 by lryst             #+#    #+#             */
/*   Updated: 2021/05/25 16:53:56 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>

class Character
{
	private :
		_name;

	public :
		Character();
		Character(std::string const & type);
		Character(Character const & cpy);
		Character & operator=(Character const & src);
		~Character();
};

#endif
