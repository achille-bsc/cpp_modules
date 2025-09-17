/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:41:02 by abosc             #+#    #+#             */
/*   Updated: 2025/09/17 21:26:24 by abosc            ###   ########.fr       */
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
		Fixed				();
		Fixed				(const int		fixedPoint);
		Fixed				(const float	floatingPoint);
		Fixed				(const Fixed&	other);
		~Fixed				();
		Fixed&				operator=	(const Fixed& other);
		bool				operator>	(const Fixed& other);
		bool				operator<	(const Fixed& other);
		bool				operator>=	(const Fixed& other);
		bool				operator<=	(const Fixed& other);
		bool				operator==	(const Fixed& other);
		bool				operator!=	(const Fixed& other);
		float				operator+	(const Fixed& other);
		float				operator-	(const Fixed& other);
		float				operator*	(const Fixed& other);
		float				operator/	(const Fixed& other);
		Fixed				operator++	();
		Fixed				operator--	();
		Fixed				operator++	(int);
		Fixed				operator--	(int);
		float				toFloat		(void)	const;
		int					toInt		(void)	const;
		static Fixed		min			(Fixed& a, Fixed& b);
		static Fixed		min			(const Fixed& a, const Fixed& b);
		static Fixed		max			(Fixed& a, Fixed& b);
		static Fixed		max			(const Fixed& a, const Fixed& b);
};

std::ostream    &operator<<(std::ostream &os, Fixed const &fixed);

#endif