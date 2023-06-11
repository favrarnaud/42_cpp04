/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Materia.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A_Materia.hpp"

A_Materia::A_Materia(std::string const &type) {
	this->type = type;
	std::cout << "Creation d'une materia vierge !" << std::endl;
}

A_Materia::A_Materia(const A_Materia &copy) {
	std::cout << "Copie d'une materia vierge !" << std::endl;
	*this = copy;
}

A_Materia::~A_Materia() {
	std::cout << "Destruction d'une materia vierge !" << std::endl;
}

A_Materia &A_Materia::operator=(A_Materia const &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const A_Materia::getType() const {
	return (this->type);
}

std::ostream	&operator<<(std::ostream &ostream, const A_Materia &instance)
{
	ostream << instance.getType();
	return ostream;
}