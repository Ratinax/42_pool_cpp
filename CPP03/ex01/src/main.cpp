/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:10:59 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/03 14:35:49 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	roger("Roger");

	roger.attack("Patrick");
	roger.beRepaired(20);
	roger.takeDamage(110);
	return (0);
}
