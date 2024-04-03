/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:57:10 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/02 17:38:07 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& ref);
        ~Dog(void);
		Dog& operator=(const Dog& ref);
		void makeSound() const;
		void	mind_boggeling(const std::string thought);
		void	think_aloud() const;
};
