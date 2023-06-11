/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_Ice.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_ICE_HPP
#define MATERIA_ICE_HPP

#include "A_Materia.hpp"

class Materia_Ice : public A_Materia{
public:
	Materia_Ice();
	~Materia_Ice();

	Materia_Ice *clone() const;
	void use(I_Character &target);
};

#endif