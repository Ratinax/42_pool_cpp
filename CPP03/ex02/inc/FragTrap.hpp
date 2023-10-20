/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:16:28 by tibernot          #+#    #+#             */
/*   Updated: 2023/03/03 14:25:59 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
class	FragTrap : public ClapTrap{

	private :

	public :
		FragTrap(void);
		FragTrap(const FragTrap &f);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &f);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif
