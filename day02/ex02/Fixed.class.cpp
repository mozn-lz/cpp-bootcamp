#include "Fixed.class.hpp"

const int Fixed::__fracBits = 8;

Fixed::Fixed(void):	_fixedPointValue(0) {
	// std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & n) {
	*this = n;
	// std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const num): _fixedPointValue(num << __fracBits) {
	// std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const num): _fixedPointValue(roundf(num * (1 << __fracBits))) {
	// std::cout << "Float constructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
	// std::cout << "setRawBits member function called" << std::endl;
	return;
}

int		Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->__fracBits);
}

float	Fixed::toFloat(void) const {
	return (((float)(this->_fixedPointValue)) / (1 << __fracBits));
}

Fixed & Fixed::operator=(Fixed const & res) {
	// std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = res.getRawBits();
	 return (*this);
}

Fixed & Fixed::operator-(Fixed const & res) {
	this->_fixedPointValue -= res.getRawBits();
	return (*this);
}

Fixed & Fixed::operator/(Fixed const & res) {
	this->_fixedPointValue = ((this->_fixedPointValue << __fracBits) / res.getRawBits());
	return (*this);
}

Fixed Fixed::operator*(Fixed const & res) {
	this->_fixedPointValue = ((long)(this->_fixedPointValue) * (long)(res.getRawBits()) >> this->__fracBits);
	return (*this);
}

Fixed Fixed::operator+(Fixed const & res) {
	this->_fixedPointValue += res.getRawBits();
	return (*this);
}

bool Fixed::operator<(Fixed const & res) {
	return (this->_fixedPointValue < res.getRawBits());
}

bool Fixed::operator<=(Fixed const & res) {
	return (this->_fixedPointValue <= res.getRawBits());
}

bool Fixed::operator>(Fixed const & res) {
	return (this->_fixedPointValue > res.getRawBits());
}

bool Fixed::operator>=(Fixed const & res) {
	return (this->_fixedPointValue >= res.getRawBits());
}

bool Fixed::operator==(Fixed const & res) {
	return (this->_fixedPointValue == res.getRawBits());
}

bool Fixed::operator!=(Fixed const & res) {
	return (this->_fixedPointValue != res.getRawBits());
}

Fixed & Fixed::operator++(void) {
	this->_fixedPointValue++;
	return (*this);
}

Fixed & Fixed::operator--(void) {
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	operator++();
	return (temp);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	operator--();
	return (temp);
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

std::ostream & operator<<(std::ostream & o, Fixed const & res) {
	o << res.toFloat();
	return (o);
}
