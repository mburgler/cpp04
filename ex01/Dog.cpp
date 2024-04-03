/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:54:23 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/02 17:38:23 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Constructor called for Dog" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& ref)
{
	std::cout << "Copy constructor called for Dog"<<std::endl;
	*this = ref;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Destructor called for Dog"<<std::endl;
}

Dog& Dog::operator=(const Dog& ref)
{
	std::cout << "Copy assignment operator called for Dog"<<std::endl;
	if (&ref != this) {
		this->_type = ref._type;
		if (brain) {
			delete brain;
        }
		brain = new Brain(*ref.brain);
	}
	return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

void Dog::mind_boggeling(const std::string thought) {
	brain->think_obsessively_about(thought);
}

void Dog::think_aloud() const {
	brain->whats_on_your_mind_darling();
}
