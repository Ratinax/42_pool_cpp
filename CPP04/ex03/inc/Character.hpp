#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter{

	private :
		AMateria		*_inventory[4];
		AMateria		*_floor[10];
		std::string		_name;
		unsigned int	_floorInd;
	public :
		Character(void);
		Character(const Character &c);
		Character(std::string name);
		Character &operator=(const Character &c);
		~Character(void);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
