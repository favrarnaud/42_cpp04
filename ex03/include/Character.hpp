/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "A_Materia.hpp"
#include "I_Character.hpp"

class Character : public I_Character {
public:
	Character(std::string name);
	~Character();

	std::string const &getName() const;

	void equip(A_Materia *materia);
	void unequip(int index);
	void use(int index, I_Character &target);
protected:
	std::string name;
	A_Materia *inventory[4];
};

#endif