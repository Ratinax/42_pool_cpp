/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:26 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:34:23 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "colors.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal{

	private :
		Brain	*_brain;
	public :
		Dog(void);
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);
		~Dog(void);
		virtual void	makeSound(void) const;
};

#endif
