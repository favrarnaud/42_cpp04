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

WrongCat::WrongCat() {
    this->setType("WrongCat");
    std::cout << "[WrongCat] vient d'etre cree !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal()
{
    std::cout << "Copy constructor for WrongCat called" << std::endl;
    *this = src;
    return;
}

WrongCat::~WrongCat() {
    std::cout << "[WrongCat] vient d'etre suprime !" << std::endl;
}

void WrongCat::makeSound() {
    std::cout << "miagrrrrrrrrr" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
    return (*this);
}
