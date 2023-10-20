/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:14:49 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 10:54:31 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Dog			daDog;
	Animal		*daAnimal;
	Animal		Animal2(daDog);

	WrongAnimal	*wrongAnimal = new (std::nothrow)WrongCat();

	if (wrongAnimal == NULL)
	{
		std::cout << RED << "Error" << WHITE << " did not succed to do a new" << WHITEENDL;
		return (1);
	}
	Animal		*cat = new (std::nothrow)Cat();

	if (cat == NULL)
	{
		delete wrongAnimal;
		std::cout << RED << "Error" << WHITE << " did not succed to do a new" << WHITEENDL;
		return (1);
	}
	daAnimal = &daDog;

	daAnimal->makeSound();
	wrongAnimal->makeSound();
	cat->makeSound();
	Animal2.makeSound();
	delete cat;
	delete wrongAnimal;
	return (0);
}
