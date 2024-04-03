/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:57:10 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 17:58:51 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	
	public:
		Dog();
		Dog(const Dog& ref);
        ~Dog(void);
		Dog& operator=(const Dog& ref);
		void makeSound() const;
};
