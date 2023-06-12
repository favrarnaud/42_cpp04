/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:16:00 by afavre            #+#    #+#             */
/*   Updated: 2023/06/12 18:16:02 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"

int main()
{	std::cout << std::endl;
	std::cout << "test des constructeurs :" << std::endl;
	std::cout << "-----------------------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* arnaud = new Character("arnaud");
	std::cout << std::endl;

	std::cout << "Creation des materia :" << std::endl;
	std::cout << "-----------------------" << std::endl;
	AMateria	*m1;
	AMateria	*m2;
	AMateria	*m3;
	AMateria	*m4;
	AMateria	*m5;

	m1 = src->createMateria("ice");
	arnaud->equip(m1);
	m2 = src->createMateria("cure");
	arnaud->equip(m2);
	m1 = src->createMateria("fire"); // null
	arnaud->equip(m1);
	std::cout << std::endl;
	
	std::cout << "Test utilisation des materia par les personnages:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	arnaud->use(0, *bob);
	arnaud->use(1, *bob);
	std::cout << std::endl;
	arnaud->use(2, *bob);
	arnaud->use(-4, *bob);
	arnaud->use(18, *bob);
	std::cout << std::endl;
	
	std::cout << "copie profonde personnages:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	Character	*charles = new Character("Charles");
	m3 = src->createMateria("cure");
	charles->equip(m3);
	m4 = src->createMateria("ice");
	charles->equip(m4);
	m1 = src->createMateria("earth");
	charles->equip(m1);
	Character	*charles_copy = new Character(*charles);
	std::cout << std::endl;
	
	std::cout << "copie profonde du personnage:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	charles->unequip(0);
	m5 = charles_copy->getMateriaFromInventory(1);
	charles_copy->unequip(1);
	delete m5;
	m1 = src->createMateria("cure");
	charles_copy->equip(m1);
	m1 = src->createMateria("ice");
	charles_copy->equip(m1);
	std::cout << std::endl;

	charles->use(0, *bob);
	charles->use(1, *bob);
	charles->use(2, *bob);
	charles->use(3, *bob);
	std::cout << std::endl;
	charles_copy->use(0, *bob);
	charles_copy->use(1, *bob);
	charles_copy->use(2, *bob);
	charles_copy->use(3, *bob);
	std::cout << std::endl;
	
	std::cout << "test de la fonction unequip() :" << std::endl;
	std::cout << "-----------------------" << std::endl;
	arnaud->unequip(-1);
	arnaud->unequip(18);
	arnaud->unequip(3);
	std::cout << std::endl;
	arnaud->use(1, *charles);
	arnaud->unequip(1);
	arnaud->use(1, *charles);
	std::cout << std::endl;
	
	std::cout << "Destructeurs :" << std::endl;
	std::cout << "-----------------------" << std::endl;
	delete bob;
	delete arnaud;
	delete src;
	delete charles;
	delete charles_copy;
	delete m2;
	delete m3;
	std::cout << std::endl;

	return (0);
}
