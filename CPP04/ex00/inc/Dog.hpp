/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:26 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:39:00 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "colors.hpp"
#include "Animal.hpp"

class	Dog : public Animal{

	private :

	public :
		Dog(void);
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);
		~Dog(void);
		void	makeSound(void) const;
};

#endif
