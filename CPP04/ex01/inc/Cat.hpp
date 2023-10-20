/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:32 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:38:13 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "colors.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal{

	private :
		Brain	*_brain;
	public :
		Cat(void);
		Cat(const Cat &c);
		Cat &operator=(const Cat &c);
		~Cat(void);
		void	makeSound(void) const;
};

#endif
