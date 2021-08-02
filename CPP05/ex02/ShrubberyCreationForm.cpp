/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:05:06 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 17:51:08 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.cpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 25, 5) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 25, 5) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
	this->_target = cpy.target;
}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
	this->_target = src._target;

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	filename;

	filename = this->_target + "_shrubbery";
	std::ofstream ofs(filename);
	try
	{
		Form:execute(executor);
	}
	catch (std::string& e)
	{
		throw ;
	}
	ofs << "						vv\n
							vvv^^^^vvvvv\n
						vvvvvvvvv^^vvvvvv^^vvvvv\n
				vvvvvvvvvvv^^^^^^^^^^^^^vvvvv^^^vvvvv\n
			vvvvvvv^^^^^^^^^vvv^^^^^^^vvvvvvvvvvv^^^vvv\n
		vvvv^^^^^^vvvvv^^^^^^^vv^^^^^^^vvvv^^^vvvvvv\n
		vv^^^^^^^^vvv^^^^^vv^^^^vvvvvvvvvvvv^^^^^^vv^\n
		vvv^^^^^vvvv^^^^^^vvvvv^^vvvvvvvvv^^^^^^vvvvv^\n
		vvvvvvvvvv^^^v^^^vvvvvv^^vvvvvvvvvv^^^vvvvvvvvv\n
		^vv^^^vvvvvvv^^vvvvv^^^^^^^^vvvvvvvvv^^^^^^vvvvvv\n
			^vvvvvvvvv^^^^vvvvvv^^^^^^vvvvvvvv^^^vvvvvvvvvv^v\n
				^^^^^^vvvv^^vvvvv^vvvv^^^v^^^^^^vvvvvv^^^^vvvvv\n
		vvvv^^vvv^^^vvvvvvvvvv^vvvvv^vvvvvv^^^vvvvvvv^^vvvvv^\n
		vvv^vvvvv^^vvvvvvv^^vvvvvvv^^vvvvv^v##vvv^vvvv^^vvvvv^v\n
		^vvvvvv^^vvvvvvvv^vv^vvv^^^^^^_____##^^^vvvvvvvv^^^^\n
			^^vvvvvvv^^vvvvvvvvvv^^^^/\@@@@@@\#vvvv^^^\n
				^^vvvvvv^^^^^^vvvvv/__\@@@@@@\^vvvv^v\n
					;^^vvvvvvvvvvv/____\@@@@@@\vvvvvvv\n
					;      \_  ^\|[  -:] ||--| | _/^^\n
					;        \   |[   :] ||_/| |/\n
					;         \\ ||___:]______/\n
					;          \   ;=; /\n
					;           |  ;=;|\n
					;          ()  ;=;|\n
					(()          || ;=;|\n
								/ / \;=;\\n";
	ofs.close();
}