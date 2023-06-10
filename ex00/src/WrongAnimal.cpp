/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud </var/spool/mail/arnaud>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:39:39 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/06 15:39:41 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->type = "Une double erreur de la nature";
    std::cout << "[WrongAnimal] vient d'etre cree !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "Copy constructor for WrongAnimal called" << std::endl;
    *this = src;
    return;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] vient d'etre suprime !" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
    this->type = copy.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "grummmmppppffff" << std::endl;
}

void WrongAnimal::setType(std::string value)
{
    this->type = value;
}

std::string const WrongAnimal::getType() const
{
    return (this->type);
}

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance)
{
    ostream << instance.getType();
    return ostream;
}
