#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource {
	public :
		virtual ~IMateriaSource(void);
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
	protected:
		IMateriaSource(void);
		IMateriaSource(const IMateriaSource &i);
		IMateriaSource &operator=(const IMateriaSource &i);
};

#endif
