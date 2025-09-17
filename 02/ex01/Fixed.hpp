/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:41:02 by abosc             #+#    #+#             */
/*   Updated: 2025/09/17 21:13:16 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
class Fixed
{
	private:
		int					fpValue;
		static const int	fractionnalBits;
		int					getFixedPoint(void) const;
		void				setFixedPoint(int const fixedPoint);
	public:
		Fixed					();
		Fixed					(const int		fixedPoint);
		Fixed					(const float	floatingPoint);
		Fixed					(const Fixed& other);
		~Fixed					();
		Fixed&					operator=	(const Fixed& other);
		float					toFloat(void)	const;
		int						toInt(void)		const;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &fixed);

#endif