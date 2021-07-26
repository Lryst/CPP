/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:48:39 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 14:18:18 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	private :
		std::string _ideas[100];

	public :
		Brain();
		Brain(Brain const & cpy);
		Brain const & operator=(Brain const & src);
		~Brain();
};

#endif