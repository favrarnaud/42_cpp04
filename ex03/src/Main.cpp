/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Materia_Ice.hpp"
#include "../include/Materia_Cure.hpp"
#include "../include/Character.hpp"

int main() {
	std::cout << "---> Creation des materias ! <---" << std::endl;
	A_Materia *ice = new Materia_Cure();

	std::cout << std::endl << "---> Creation des Personnages ! <---" << std::endl;
	I_Character *arnaud = new Character("arnaud");

	std::cout << std::endl << "---> test des fonctions des personnages ! <---" << std::endl;

	std::cout << "||| equiper une materia NULL |||" << std::endl;
	arnaud->equip(NULL);
	std::cout << std::endl;

	std::cout << "||| equiper une vrai materia |||" << std::endl;
	arnaud->equip(ice);
	std::cout << std::endl;

//	std::cout << "||| utiliser une materia NULL |||" << std::endl;
//	arnaud->use(1, *lajoie);
//	std::cout << std::endl;
//
//	std::cout << "||| utiliser une vrai materia |||" << std::endl;
//	arnaud->use(0, *lajoie);
//	std::cout << std::endl;

	std::cout << "||| desequiper une materia NULL |||" << std::endl;
	arnaud->unequip(1);
	std::cout << std::endl;

	std::cout << "||| desequiper une vrai materia |||" << std::endl;
	arnaud->unequip(0);
	std::cout << std::endl;

	std::cout << std::endl << "---> Destruction des objets ! <---" << std::endl;
	delete ice;
	delete arnaud;

	return (0);
}
