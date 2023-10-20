/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:10:59 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/03 14:47:14 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	roger("Roger");

	roger.attack("Patrick");
	roger.beRepaired(20);
	roger.takeDamage(20);
	roger.takeDamage(90);
	roger.beRepaired(20);
	return (0);
}
