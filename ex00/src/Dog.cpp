/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:46:06 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 12:46:07 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() {
    this->setType("Dog");
    std::cout << "[Dog] vient d'etre cree !" << std::endl;
}

Dog::Dog(const Dog &src): Animal()
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = src;
    return;
}

Dog::~Dog() {
    std::cout << "[Dog] vient d'etre suprime !" << std::endl;
}

void Dog::makeSound() {
    std::cout << "ouaf" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
    return (*this);
}
