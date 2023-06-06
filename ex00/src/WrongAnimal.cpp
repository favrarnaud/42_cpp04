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

Animal::Animal() {
    this->type = "Une erreur de la nature";
    std::cout << "[Animal] vient d'etre cree !" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "Copy constructor for Animal called" << std::endl;
    *this = src;
    return;
}

Animal::~Animal() {
    std::cout << "[Animal] vient d'etre suprime !" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
    this->type = copy.type;
    return (*this);
}

void Animal::makeSound() {}

void Animal::setType(std::string value)
{
    this->type = value;
}

std::string const Animal::getType() const
{
    return (this->type);
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance)
{
    ostream << instance.getType();
    return ostream;
}
