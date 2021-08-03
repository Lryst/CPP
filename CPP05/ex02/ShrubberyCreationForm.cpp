/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:05:06 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 13:51:35 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 25, 5) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 25, 5), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy)
{
	this->setGradeR(cpy.getGradeR());
	//this->setGradeA(cpy.getGradeA());
	this->_grade_action = 137;
	this->setName(cpy.getName());
	this->setStatus(cpy.getStatus());
	this->setRaison(cpy.getRaison());
	this->_target = cpy._target;
}

ShrubberyCreationForm const & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	this->setGradeR(src.getGradeR());
	//this->setGradeA(src.getGradeA());
	this->_grade_action = 137;
	this->setName(src.getName());
	this->setStatus(src.getStatus());
	this->setRaison(src.getRaison());
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
		Form::execute(executor);
	}
	catch (std::string& e)
	{
		throw ;
	}
	ofs << "								vv\n";
	ofs << "						vvv^^^^vvvvv\n";
	ofs << "					vvvvvvvvv^^vvvvvv^^vvvvv\n";
	ofs << "			vvvvvvvvvvv^^^^^^^^^^^^^vvvvv^^^vvvvv\n";
	ofs << "		vvvvvvv^^^^^^^^^vvv^^^^^^^vvvvvvvvvvv^^^vvv\n";
	ofs << "	vvvv^^^^^^vvvvv^^^^^^^vv^^^^^^^vvvv^^^vvvvvv\n";
	ofs << "	vv^^^^^^^^vvv^^^^^vv^^^^vvvvvvvvvvvv^^^^^^vv^\n";
	ofs << "	vvv^^^^^vvvv^^^^^^vvvvv^^vvvvvvvvv^^^^^^vvvvv^\n";
	ofs << "	vvvvvvvvvv^^^v^^^vvvvvv^^vvvvvvvvvv^^^vvvvvvvvv\n";
	ofs << "	^vv^^^vvvvvvv^^vvvvv^^^^^^^^vvvvvvvvv^^^^^^vvvvvv\n";
	ofs << "		^vvvvvvvvv^^^^vvvvvv^^^^^^vvvvvvvv^^^vvvvvvvvvv^v\n";
	ofs << "			^^^^^^vvvv^^vvvvv^vvvv^^^v^^^^^^vvvvvv^^^^vvvvv\n";
	ofs << "	vvvv^^vvv^^^vvvvvvvvvv^vvvvv^vvvvvv^^^vvvvvvv^^vvvvv^\n";
	ofs << "	vvv^vvvvv^^vvvvvvv^^vvvvvvv^^vvvvv^v##vvv^vvvv^^vvvvv^v\n";
	ofs << "	^vvvvvv^^vvvvvvvv^vv^vvv^^^^^^_____##^^^vvvvvvvv^^^^\n";
	ofs << "		^^vvvvvvv^^vvvvvvvvvv^^^^/\\@@@@@@\\#vvvv^^^\n";
	ofs << "			^^vvvvvv^^^^^^vvvvv/__\\@@@@@@\\^vvvv^v\n";
	ofs << "				;^^vvvvvvvvvvv/____\\@@@@@@\vvvvvvv\n";
	ofs << "				;      \\_  ^\\|[  -:] ||--| | _/^^\n";
	ofs << "				;        \\   |[   :] ||_/| |/\n";
	ofs << "				;         \\ ||___:]______/\n";
	ofs << "				;          \\   ;=; /\n";
	ofs << "				;           |  ;=;|\n";
	ofs << "				;          ()  ;=;|\n";
	ofs << "				(()          || ;=;|\n";
	ofs << "							/ / \\;=;\\n";
	ofs.close();
}