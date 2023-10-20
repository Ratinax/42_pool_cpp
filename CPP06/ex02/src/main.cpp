/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:06:04 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/13 15:38:35 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include "colors.hpp"
#include <typeinfo>
#include <ctime>

#define RANDOM_USELESS_VALUE 5

int	setRandom(void)
{
	std::srand(std::time(NULL));
	return (RANDOM_USELESS_VALUE);
}

Base	*generate(void)
{
	static int lol = setRandom();
	(void) lol;
	int	nb = rand() % 3;

	switch(nb)
	{
		case 0:
			return (new (std::nothrow)A());
			break;
		case 1:
			return (new (std::nothrow)B());
			break;
		case 2:
			return (new (std::nothrow)C());
			break;
		default:
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << GREEN << "Congratulation its an A" << WHITEENDL;
	else if (dynamic_cast<B*>(p))
		std::cout << BLUE << "Congratulation its a B" << WHITEENDL;
	else if (dynamic_cast<C*>(p))
		std::cout << RED << "Congratulation its a C" << WHITEENDL;
}

void	identify(Base &p)
{
	try
	{
		A tmp(dynamic_cast<A &>(p));
		std::cout << "Detecting A" << std::endl;
	}
	catch (...)
	{
		try
		{
			B tmp(dynamic_cast<B &>(p));
			std::cout << "Detecting B" << std::endl;
		}
		catch (...)
		{
			try
			{
				C tmp(dynamic_cast<C &>(p));
				std::cout << "Detecting C" << std::endl;
			}
			catch (...)
			{
				std::cout << "Unknown type" << std::endl;
			}
		}
	}
}

int	main()
{
	Base	*ptr1 = generate();
	if (ptr1 == NULL)
	{
		std::cout << MAGENTA << "could not create 1st pointer" << WHITEENDL;
		return (1);
	}
	Base	*ptr2 = generate();
	if (ptr2 == NULL)
	{
		std::cout << MAGENTA << "could not create 2nd pointer" << WHITEENDL;
		delete ptr1;
		return (1);
	}
	Base	*ptr3 = generate();
	if (ptr2 == NULL)
	{
		std::cout << MAGENTA << "could not create 3rd pointer" << WHITEENDL;
		delete ptr1;
		delete ptr2;
		return (1);
	}
	identify(ptr1);
	identify(ptr2);
	identify(ptr3);
}
