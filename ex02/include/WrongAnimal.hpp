/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud </var/spool/mail/arnaud>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:36:27 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/06 15:36:31 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    ~WrongAnimal();

    WrongAnimal &operator=(WrongAnimal const &copy);

    void setType(const std::string type);
    std::string const getType() const;

    void makeSound(void) const;
protected:
    std::string type;
};

std::ostream &operator<<(std::ostream &ostream, const WrongAnimal &instance);

#endif

