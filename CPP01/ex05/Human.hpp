/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:40:38 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 14:48:51 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"
# include <iostream>

class Human
{
	private :
		Brain _brain1;
	public :
		std::string identify() const;
		const Brain	& getBrain();
};

#endif