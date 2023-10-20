/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:45:17 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/14 11:11:10 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6};
	std::string	tab2[] = {"this", "is", "a", "test"};

	iter(tab, 7, print);
	std::cout << WHITEENDL;
	iter(tab2, 4, print);
	return 0;
}
