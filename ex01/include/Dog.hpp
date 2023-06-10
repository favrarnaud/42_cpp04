/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:45:48 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 12:45:50 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../include/Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog &src);
    ~Dog();

    Dog &operator=(Dog const &copy);

    void makeSound() const;
private:
	Brain *brain;
};

#endif
