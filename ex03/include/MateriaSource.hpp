/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:14:43 by afavre            #+#    #+#             */
/*   Updated: 2023/06/12 18:14:48 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & ref);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & ref);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria	*_inventory[4];
};

#endif
