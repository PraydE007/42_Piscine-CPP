/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:34:40 by jaleman           #+#    #+#             */
/*   Updated: 2017/07/06 10:34:41 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <cmath>
# include <iostream>

class Fixed
{
public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed(void);
    Fixed               &operator=(const Fixed &rhs);
    Fixed               &operator++(void);
    Fixed               &operator--(void);
    Fixed               operator++(int);
    Fixed               operator--(int);
    bool                operator>(const Fixed &rhs) const;
    bool                operator<(const Fixed &rhs) const;
    bool                operator>=(const Fixed &rhs) const;
    bool                operator<=(const Fixed &rhs) const;
    bool                operator==(const Fixed &rhs) const;
    bool                operator!=(const Fixed &rhs) const;
    Fixed               operator+(const Fixed &rhs) const;
    Fixed               operator-(const Fixed &rhs) const;
    Fixed               operator*(const Fixed &rhs) const;
    Fixed               operator/(const Fixed &rhs) const;
    int                 getRawBits(void) const;
    void                setRawBits(int const);
    int                 toInt(void) const;
    float               toFloat(void) const;
    static Fixed        &min(Fixed &a, Fixed &b);
    const static Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    const static Fixed  &max(const Fixed &a, const Fixed &b);

private:
    int                 _fixedPointValue;
    static const int    _fracBits;
};

std::ostream            &operator<<(std::ostream &out, Fixed const &val);

#endif
