/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:23:32 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 17:34:20 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "colors.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal{

	private :
		Brain	*_brain;
	public :
		Cat(void);
		Cat(const Cat &c);
		Cat &operator=(const Cat &c);
		~Cat(void);
		virtual void	makeSound(void) const;
};

#endif
