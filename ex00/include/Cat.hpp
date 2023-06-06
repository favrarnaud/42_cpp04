/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:45:57 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 12:45:59 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../include/Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(const Cat &src);
    ~Cat();

    Cat &operator=(Cat const &copy);

    void makeSound() const;
private:
};

#endif

