/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_Cure.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Materia_Cure.hpp"

Materia_Cure::Materia_Cure() : A_Materia("cure") {
	std::cout << "Enchantement de la materia en materia de soin !" << std::endl;
}

Materia_Cure::~Materia_Cure() {
	std::cout << "Desenchantement de la materia de soin !" << std::endl;
}

Materia_Cure *Materia_Cure::clone() const {
	Materia_Cure *a = new Materia_Cure();
	return (a);
}

void Materia_Cure::use(I_Character &target) {
	std::cout << "lance un soin sur " << target.getName() << std::endl;
}