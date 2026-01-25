/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:54:03 by abosc             #+#    #+#             */
/*   Updated: 2026/01/24 12:54:04 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	private:
		int					raw;
		static const int	fractional = 8;
	public:
		Fixed				(void);
		Fixed				(const Fixed& other); // constructeur par copy
		Fixed&				operator=(const Fixed& other); // surcharge d'operateur
		~Fixed				();
		
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
