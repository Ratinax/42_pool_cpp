/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:32 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 09:27:45 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "colors.hpp"
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{

	private :

	public :
		WrongCat(void);
		WrongCat(const WrongCat &w);
		WrongCat &operator=(const WrongCat &w);
		~WrongCat(void);
		void	makeSound(void);
};

#endif
