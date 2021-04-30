/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:07:28 by lryst             #+#    #+#             */
/*   Updated: 2021/04/30 11:43:02 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>
# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class ClapTrap
{
	protected :
		unsigned int _hit;
		unsigned int _max_hit;
		unsigned int _nrj;
		unsigned int _max_nrj;
		unsigned int _lvl;
		unsigned int _melee_att;
		unsigned int _ranged_att;
		unsigned int _armor_red;
		std::string  _name;

    public :
        ClapTrap();
		ClapTrap(unsigned int hit, unsigned int max_hit, unsigned int nrj,
			unsigned int max_nrj, unsigned int lvl, unsigned int melee_att,
			unsigned int ranged_att, unsigned int armor_red, std::string name);
        ClapTrap(ClapTrap const & cpy);
        virtual ~ClapTrap();
        ClapTrap & operator=(ClapTrap const & src);
        
        void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif