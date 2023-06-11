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
//	const A_Animal *a = new A_Animal();
	const A_Animal *cat = new Cat();
	const A_Animal *dog = new Dog();

	delete dog;
	delete cat;
//	delete a;

    return (0);
}