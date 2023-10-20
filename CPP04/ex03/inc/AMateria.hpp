#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "colors.hpp"
# include "ICharacter.hpp"
class ICharacter;

class	AMateria {

	protected :
		std::string const _type;
	public :
		AMateria(void);
		AMateria(std::string type);
		AMateria(const AMateria &a);
		AMateria &operator=(const AMateria &a);
		virtual ~AMateria(void);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
