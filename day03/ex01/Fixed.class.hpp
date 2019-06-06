#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _fixedPointValue;
	static const int _fracBits;

public:
	Fixed(void);
	Fixed(Fixed const & n);
	Fixed(int const num);
	Fixed(float const num);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
	Fixed & operator=(Fixed const & res);

	~Fixed(void);
};

std::ostream & operator<<(std::ostream & o, Fixed const & res);

#endif
