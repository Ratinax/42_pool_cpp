#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria{

	private :

	public :
		Ice(void);
		Ice(const Ice &i);
		Ice &operator=(const Ice &i);
		~Ice(void);
		virtual AMateria* clone() const;
};

#endif
