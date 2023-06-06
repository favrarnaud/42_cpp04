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
    Animal a;
    Cat c;
    Dog d;

    std::cout << " ||||| Les mignons petit animeaux ! ||||| " << std::endl;
    std::cout << " ----- Animal ----------------------------------------------- " << std::endl;
    std::cout << a.getType() << std::endl;
    a.makeSound();
    std::cout << " ----- Cat -------------------------------------------------- " << std::endl;
    std::cout << c.getType() << std::endl;
    c.makeSound();
    std::cout << " ----- Dog -------------------------------------------------- " << std::endl;
    std::cout << d.getType() << std::endl;
    d.makeSound();
    std::cout << " ------------------------------------------------------------ " << std::endl;

    std::cout << " ||||| les erreurs de la nature ! ||||| " << std::endl;

    WrongCat wc;
    wc.makeSound();
    return (0);
}