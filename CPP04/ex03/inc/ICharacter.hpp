#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "colors.hpp"
# include "AMateria.hpp"
class AMateria;

class	ICharacter {

	public :
		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
	protected :
		ICharacter(void);
		ICharacter(const ICharacter &c);
		ICharacter &operator=(const ICharacter &c);
};

#endif
