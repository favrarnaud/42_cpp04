/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:14:05 by afavre            #+#    #+#             */
/*   Updated: 2023/06/12 18:14:07 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & ref);
		Ice & operator=(Ice const & ref);
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
	private:
		std::string _type;
};

#endif
