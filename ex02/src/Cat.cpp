/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:46:13 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 12:46:15 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() {
    this->setType("Cat");
	this->brain = new Brain();
    std::cout << "[Cat] vient d'etre cree !" << std::endl;
}

Cat::Cat(const Cat &src): A_Animal()
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
    return;
}

Cat::~Cat() {
    std::cout << "[Cat] vient d'etre suprime !" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const {
    std::cout << "miaou" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain();
    this->type = copy.type;
    return (*this);
}
