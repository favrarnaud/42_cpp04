/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:13:32 by afavre            #+#    #+#             */
/*   Updated: 2023/06/12 18:13:35 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const & ref);
		~Character();
		Character & operator=(Character const & ref);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
	private:
		AMateria			*_inventory[4];
		std::string const	_name;
};

#endif
