/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:18:31 by ratinax           #+#    #+#             */
/*   Updated: 2023/02/26 12:04:44 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	zombies = zombieHorde(10, "dumb ass");

	if (zombies == NULL)
		return (1);
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
