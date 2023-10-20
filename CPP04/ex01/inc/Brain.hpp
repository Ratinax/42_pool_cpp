/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:33:29 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/04 11:34:13 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "colors.hpp"

class	Brain {

	private :
		std::string	_ideas[100];
	public :
		Brain(void);
		Brain(const Brain &b);
		Brain &operator=(const Brain &b);
		~Brain(void);
};

#endif
