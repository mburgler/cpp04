/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:12:34 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/02 17:36:57 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Constructor called for Brain"<< std::endl;
}

Brain::Brain(const Brain& ref) {
	std::cout << "Copy Constructor called for Brain"<< std::endl;
	*this = ref;
}

Brain::~Brain() {
	std::cout << "Destructor called for Brain"<< std::endl;
}

Brain& Brain::operator=(const Brain& ref) {
	std::cout << "Copy assignment operator called for Brain"<<std::endl;
	if(&ref != this) {
		for (int i = 0; i != 100; ++i) {
			this->ideas[i] = ref.ideas[i];
		}
	}
	return *this;
}

void	Brain::think_obsessively_about(const std::string thought) {
	for (int i = 0; i != 100; ++i) {
		ideas[i] = thought;
	}
}

void	Brain::whats_on_your_mind_darling() {
	for (int i = 0; i != 100; ++i) {
		std::cout << "Idea (" << i << ") " << ideas[i] << std::endl;
	}
}
