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

#include "../include/A_Animal.hpp"

A_Animal::A_Animal() {
    this->type = "Une erreur de la nature";
    std::cout << "[Animal] vient d'etre cree !" << std::endl;
}

A_Animal::A_Animal(const A_Animal &src)
{
    std::cout << "Copy constructor for Animal called" << std::endl;
    *this = src;
    return;
}

A_Animal::~A_Animal() {
    std::cout << "[Animal] vient d'etre suprime !" << std::endl;
}

A_Animal &A_Animal::operator=(A_Animal const &copy)
{
    this->type = copy.type;
    return (*this);
}

void A_Animal::setType(std::string value)
{
    this->type = value;
}

std::string const A_Animal::getType() const
{
    return (this->type);
}

std::ostream	&operator<<(std::ostream &ostream, const A_Animal &instance)
{
    ostream << instance.getType();
    return ostream;
}
