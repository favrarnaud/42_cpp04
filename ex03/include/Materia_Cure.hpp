/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_Cure.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CURE_HPP
#define MATERIA_CURE_HPP

#include "A_Materia.hpp"

class Materia_Cure : public A_Materia{
public:
	Materia_Cure();
	~Materia_Cure();

	Materia_Cure *clone() const;
	void use(I_Character &target);
};

#endif