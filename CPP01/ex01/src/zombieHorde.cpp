/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:43:49 by ratinax           #+#    #+#             */
/*   Updated: 2023/02/27 10:39:00 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *zombies = new (std::nothrow)Zombie[N];

	if (zombies == NULL)
	{
		std::cout << MAGENTA << "new failed" << WHITEENDL;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}
