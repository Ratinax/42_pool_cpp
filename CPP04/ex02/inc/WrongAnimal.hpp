/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:35 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 11:06:35 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "colors.hpp"

class	WrongAnimal {

	protected :
		std::string	_type;
	public :
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal &operator=(const WrongAnimal &a);
		~WrongAnimal(void);
		void	makeSound(void);
};

#endif
