/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:35 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:31:56 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "colors.hpp"

class	AAnimal {

	protected :
		std::string	_type;
	public :
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &a);
		AAnimal &operator=(const AAnimal &a);
		virtual ~AAnimal(void);
		virtual void	makeSound(void) const = 0;
};

#endif
