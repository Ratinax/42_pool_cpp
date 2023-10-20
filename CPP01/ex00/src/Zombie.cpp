/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:45:19 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/01 14:40:32 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	_name = "Unnamed";
	std::cout << BLACK << _name << " is born" << WHITEENDL;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << BLACK << _name << " is born" << WHITEENDL;
}

Zombie::~Zombie()
{
	std::cout << BLACK << _name << " is dead" << WHITEENDL;
}

void	Zombie::announce(void)
{
	std::cout << BLUE << _name << " BraiiiiiiinnnzzzZ..." << WHITEENDL;
}
