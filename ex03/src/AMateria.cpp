/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:15:13 by afavre            #+#    #+#             */
/*   Updated: 2023/06/12 18:15:16 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia has beed created\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Abstract materia has beed constructed\n";
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia has beed destroyed\n";
}

AMateria::AMateria(AMateria const & ref) : _type(ref._type)
{
	std::cout << "Abstract materia has beed constructed from a copy\n";
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
