/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:48:31 by lryst             #+#    #+#             */
/*   Updated: 2021/05/17 13:49:33 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H
# include "AssaultTerminator.hpp"

class AssaultTerminator :
{
	private :
	
	public :
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & cpy);
		AssaultTerminator & operator=(AssaultTerminator const & src);
		~AssaultTerminator();
};

#endif 