/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:14:49 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/17 10:16:06 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*animals[50];

	for (int i = 0; i < 25; i++)
	{
		animals[i] = new Dog();
		std::cout << BLACK << i << WHITEENDL;
	}
	for (int i = 25; i < 50; i++)
	{
		animals[i] = new Cat();
		std::cout << BLACK << i << WHITEENDL;
	}

	for (int i = 0; i < 50; i++)
	{
		delete animals[i];
		std::cout << BLACK << i << WHITEENDL;
	}
	return (0);
}
