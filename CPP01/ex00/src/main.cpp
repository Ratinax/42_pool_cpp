/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:18:31 by ratinax           #+#    #+#             */
/*   Updated: 2023/02/27 10:47:07 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main()
{
	Zombie	zombie;
	Zombie	*zombie2 = newZombie("Cyanure");

	if (!zombie2)
	{
		std::cout << MAGENTA << "New failed" << WHITEENDL;
		return (1);
	}
	zombie.announce();
	zombie2->announce();
	randomChump("Bouuuuliste");
	delete zombie2;
	return (0);
}
