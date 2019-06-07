#include "Fixed.class.hpp"

const int Fixed::__fracBits = 8;

Fixed::Fixed(void):	_fixedPointValue(0) {
	std::cout << "Default constructor called\n";
	return;
}

Fixed::Fixed(Fixed const & n) {
	*this = n;
	std::cout << "Copy constructor called\n";
	return;
}

Fixed::Fixed(int const num): _fixedPointValue(num << __fracBits) {
	std::cout << "Int constructor called\n";
	return;
}

Fixed::Fixed(float const num): _fixedPointValue(roundf(num * (1 << __fracBits))) {
	std::cout << "Float constructor called\n";
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
	std::cout << "setRawBits member function called\n";
	return;
}

int		Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->__fracBits);
}

float	Fixed::toFloat(void) const {
	return (((float)(this->_fixedPointValue)) / (1 << __fracBits));
}


Fixed & Fixed::operator=(Fixed const & res) {
	std::cout << "Assignation operator called\n";
	this->_fixedPointValue = res.getRawBits();
	 return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return;
}

std::ostream & operator<<(std::ostream & o, Fixed const & res) {
	o << res.toFloat();
	return (o);
}
