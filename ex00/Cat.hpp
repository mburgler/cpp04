/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:57:10 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 18:06:36 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat();
		Cat(const Cat& ref);
        ~Cat(void);
		Cat& operator=(const Cat& ref);
		void makeSound() const;
};
