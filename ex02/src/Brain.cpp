/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:33:48 by afavre            #+#    #+#             */
/*   Updated: 2023/06/10 18:33:52 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] generation de ca memoire a long terme !" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Memory";
}

Brain::~Brain() {
	std::cout << "[Brain] Destruction de ca memoire a long terme !" << std::endl;
	delete [] (this->ideas);
}

