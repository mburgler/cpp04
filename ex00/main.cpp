/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:11:07 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/03 16:21:03 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main() {
	Dog dog;
	Cat cat;
	Animal animal;
	WrongAnimal	wrongAnimal;
	WrongCat	wrongCat;

	std::cout << "\nDIRECT USAGE OF DERIVED OBEJCTS causes no issues\n" << std::endl;
	dog.makeSound();
	cat.makeSound();
	animal.makeSound();
	wrongAnimal.makeSound();
	wrongCat.makeSound();

	std::cout << "\nBASE CLASS POINTERS AND REFERENCES TO THE DERIVED CLASS\n" << std::endl;
	const Animal* meta = new Animal();
	const WrongAnimal* w = new WrongCat();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	w->makeSound();

	delete meta;
	delete w;
	delete j;
	delete i;

	return 0;
}
