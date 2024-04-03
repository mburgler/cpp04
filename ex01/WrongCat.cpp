/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 20:11:52 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 20:12:09 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default Constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ref)
{
	std::cout << "Copy constructor called for WrongCat"<<std::endl;
	*this = ref;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called for WrongCat"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	std::cout << "Copy assignment operator called for WrongCat"<<std::endl;
	if (&ref != this) {
		this->_type = ref._type;
	}
	return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Raaaawwwrrr!" << std::endl;
}
