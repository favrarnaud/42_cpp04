/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:45:39 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 12:45:41 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
public:
    Animal();
    Animal(const Animal &src);
    virtual ~Animal();

    Animal &operator=(Animal const &copy);

    void setType(const std::string type);
    std::string const getType() const;

    void virtual makeSound() const;
protected:
    std::string type;
};

std::ostream &operator<<(std::ostream &ostream, const Animal &instance);

#endif
