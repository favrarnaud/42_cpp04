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
#include "../include/Brain.hpp"

class A_Animal{
public:
    A_Animal();
    A_Animal(const A_Animal &src);
    virtual ~A_Animal();

    A_Animal &operator=(A_Animal const &copy);

    virtual void setType(const std::string type);
    virtual std::string const getType() const;

    void virtual makeSound() const = 0;
protected:
    std::string type;
};

std::ostream &operator<<(std::ostream &ostream, const A_Animal &instance);

#endif
