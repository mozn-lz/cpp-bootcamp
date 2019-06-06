#include "Fixed.class.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed(void):	_fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & n) {
	*this = n;
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const num): _fixedPointValue(num << _fracBits) {
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const num): _fixedPointValue(roundf(num * (1 << _fracBits))) {
	std::cout << "Float constructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return;
}

int		Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fracBits);
}

float	Fixed::toFloat(void) const {
	return (((float)(this->_fixedPointValue)) / (1 << _fracBits));
}


Fixed & Fixed::operator=(Fixed const & res) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = res.getRawBits();
	 return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::ostream & operator<<(std::ostream & o, Fixed const & res) {
	o << res.toFloat();
	return (o);
}
