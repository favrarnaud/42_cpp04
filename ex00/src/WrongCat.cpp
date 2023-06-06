/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud </var/spool/mail/arnaud>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:39:47 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/06 15:39:49 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

Cat::Cat() {
    this->setType("Cat");
    std::cout << "[Cat] vient d'etre cree !" << std::endl;
}

Cat::Cat(const Cat &src): Animal()
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
    return;
}

Cat::~Cat() {
    std::cout << "[Cat] vient d'etre suprime !" << std::endl;
}

void Cat::makeSound() {
    std::cout << "miaou" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    this->type = copy.type;
    return (*this);
}
