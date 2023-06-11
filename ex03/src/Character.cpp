/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string name) {
	this->name = name;
	std::cout << "naissance de " << this->name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::~Character() {
	std::cout << "mort de " << this->name << std::endl;
}

std::string const &Character::getName() const {
	return (this->name);
}

void Character::equip(A_Materia *materia) {
	if (!materia)
	{
		std::cout << this->name << " ne comprend pas pourquoi il doit equiper de l'air !" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			std::cout << this->name << " equipe la materia " << materia->getType() << " a l'emplacement " << i << "." << std::endl;
			this->inventory[i] = materia;
			return;
		}
	}
	std::cout << "l'inventaire de " << this->name << " est deja plein !" << std::endl;
}

void Character::unequip(int index) {
	if (this->inventory[index] != NULL)
	{
		std::cout << this->name << " desequipe la materia " << this->inventory[index]->getType() << std::endl;
		this->inventory[index] = 0;
	}
	else
		std::cout << "Aucune materia na ete equiper ici !" << std::endl;
}

void Character::use(int index, I_Character &target) {
	(void)index;
	(void)target;
	if (!this->inventory[index])
		std::cout << this->name << " ne veut pas taper sans materia !" << std::endl;
	else
		this->inventory[index]->use(target);
}