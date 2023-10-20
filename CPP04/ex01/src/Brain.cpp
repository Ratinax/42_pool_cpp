/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:18:59 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 16:08:18 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BLACK << "Brain default constructor called" << WHITEENDL;
}

Brain::Brain(const Brain &b)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = b._ideas[i];
	std::cout << BLACK << "Brain copy constructor called" << WHITEENDL;
}

Brain	&Brain::operator=(const Brain &b)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = b._ideas[i];
	std::cout << BLACK << "Brain copy assignment operator called" << WHITEENDL;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << BLACK << "Brain destructor called" << WHITEENDL;
}
