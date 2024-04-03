/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:57:10 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 20:11:48 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	
	public:
		WrongAnimal();
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& ref);
        ~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal& ref);
		void	makeSound() const; // without the 
		std::string getType() const;
};
