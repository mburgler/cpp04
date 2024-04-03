/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:11:07 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/02 17:59:16 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main() {
	//standard main
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	//additional tests for deep copy testing
	Cat* cat1 = new Cat();
	std::cout << "##### cat 1 construction, thought setting and thinking aloud\n" << std::endl;
	cat1->mind_boggeling("World Domination... <3");
	cat1->think_aloud();
	std::cout << "##### cat 2 construction,no thought setting and thinking aloud \n" << std::endl;
	Cat cat2;
	cat2.think_aloud();
	std::cout << "##### cat 2 thought setting and thinking aloud\n" << std::endl;
	cat2.mind_boggeling("Sleeping is my fav activity ...");
	cat2.think_aloud();
	std::cout << "##### cat 2 deep copy before deletion of copied object\n" << std::endl;
	cat2 = *cat1;
	cat2.think_aloud();
	std::cout << "##### cat 2 deep copy after deletion of copied object\n" << std::endl;
	delete cat1;
	cat2.think_aloud();

	//array of animals
	std::cout << "##### array of animals\n" << std::endl;
	const int nmb_of_animals = 10;
	Animal* animals[nmb_of_animals];
	for (int i = 0; i < (nmb_of_animals / 2); ++i) {
		animals[i] = new Dog();
        animals[i + nmb_of_animals / 2] = new Cat();
	}
	for (int i = 0; i < nmb_of_animals; ++i) {
		std::cout << "#ANIMAL NMB " << i << std::endl;
        animals[i]->makeSound();
		Cat* catPtr = dynamic_cast<Cat*>(animals[i]);
        if (catPtr != nullptr) { // Check if the cast was successful
            catPtr->mind_boggeling("Catnip ...");
			catPtr->think_aloud();
        }
    }
    for (int i = 0; i < nmb_of_animals; ++i) {
        delete animals[i];
    }
	
	return 0;
}
