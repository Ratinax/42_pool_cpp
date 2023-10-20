/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:35 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:29:07 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "colors.hpp"

class	Animal {

	protected :
		std::string	_type;
	public :
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &a);
		Animal &operator=(const Animal &a);
		virtual ~Animal(void);
		virtual void	makeSound(void) const;
};

#endif
