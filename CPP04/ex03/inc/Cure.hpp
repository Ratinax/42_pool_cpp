#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria{

	private :

	public :
		Cure(void);
		Cure(const Cure &c);
		Cure &operator=(const Cure &c);
		~Cure(void);
		virtual AMateria* clone() const;
};

#endif
