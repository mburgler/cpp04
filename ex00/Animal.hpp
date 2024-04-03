/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:57:10 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/03 16:02:55 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class Animal {
	protected:
		std::string _type;
	
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& ref);
        virtual ~Animal(void);
		Animal& operator=(const Animal& ref);
		virtual void	makeSound() const; // without the 
		std::string getType() const;
};
