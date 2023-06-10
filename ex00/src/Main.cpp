/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:45:25 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 12:45:27 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
    const Animal *a = new Animal();
    const Animal *c = new Cat();
    const Animal *d = new Dog();

    std::cout << " ||||| Les mignons petit animeaux ! ||||| " << std::endl;
    std::cout << " ----- Animal ----------------------------------------------- " << std::endl;
    std::cout << a->getType() << std::endl;
    a->makeSound();
    std::cout << " ----- Cat -------------------------------------------------- " << std::endl;
    std::cout << c->getType() << std::endl;
    c->makeSound();
    std::cout << " ----- Dog -------------------------------------------------- " << std::endl;
    std::cout << d->getType() << std::endl;
    d->makeSound();
    std::cout << " ------------------------------------------------------------ " << std::endl;

    delete a;
    delete c;
    delete d;

    std::cout << " ||||| les erreurs de la nature ! ||||| " << std::endl;

    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();

    wa->makeSound();
    wc->makeSound();

    delete wa;
    delete wc;

    return (0);
}