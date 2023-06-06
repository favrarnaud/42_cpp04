/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:40:56 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 13:40:58 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

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

void Animal::makeSound() const {}

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
