/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Materia.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:04:38 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/11 18:05:03 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include "I_Character.hpp"

class A_Materia {
public:
	A_Materia(std::string const &type);
	A_Materia(const A_Materia &src);
	virtual ~A_Materia();

	A_Materia &operator=(A_Materia const &copy);

	std::string const getType() const;

	virtual A_Materia *clone() const = 0;
	virtual void use(I_Character &target) = 0;
protected:
	std::string type;
};

std::ostream &operator<<(std::ostream &ostream, const A_Materia &instance);

#endif