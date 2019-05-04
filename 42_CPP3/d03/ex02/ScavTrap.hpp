
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "Colors.hpp"
# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
	public:
	//constructors
	ScavTrap( void );
	ScavTrap( ScavTrap const & copy );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & other );

	void        challengeNewcomer( std::string const & challenge );
};


#endif
