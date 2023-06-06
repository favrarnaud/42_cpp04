/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arnaud </var/spool/mail/arnaud>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:36:43 by arnaud            #+#    #+#             */
/*   Updated: 2023/06/06 15:36:46 by arnaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../include/Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(const Cat &src);
    ~Cat();

    Cat &operator=(Cat const &copy);

    void makeSound();
private:
};

#endif
