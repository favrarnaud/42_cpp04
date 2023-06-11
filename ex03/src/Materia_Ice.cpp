/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_Ice.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A_Materia.hpp"
#include "../include/Materia_Ice.hpp"

Materia_Ice::Materia_Ice() : A_Materia("ice") {
	std::cout << "Enchantement de la materia en materia de glace !" << std::endl;
}

Materia_Ice::~Materia_Ice() {
	std::cout << "Desenchantement de la materia de glace !" << std::endl;
}

Materia_Ice *Materia_Ice::clone() const {
	Materia_Ice *a = new Materia_Ice();
	return (a);
}

void Materia_Ice::use(I_Character &target) {
	std::cout << "lance une lance de glace sur " << target.getName() << std::endl;
}