/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:18:31 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/01 14:51:06 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << MAGENTA << "The way to use the Harl filter is : ./HarlFilter [name of the complain]" << WHITEENDL;
		return (0);
	}
	Harl harl;

	harl.complain(argv[1]);
}
