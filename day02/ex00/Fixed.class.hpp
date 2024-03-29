#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int	_value;
	static const int	_frac = 8;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & i);

# endif