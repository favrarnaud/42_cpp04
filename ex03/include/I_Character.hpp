/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I_Character.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_HPP
#define I_CHARACTER_HPP

#include <iostream>
#include "A_Materia.hpp"

class I_Character {
public:
	virtual ~I_Character() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(A_Materia *materia) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, I_Character& target) = 0;
};

#endif
