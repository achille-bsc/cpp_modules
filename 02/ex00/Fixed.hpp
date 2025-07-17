/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:54:23 by abosc             #+#    #+#             */
/*   Updated: 2025/07/16 20:19:10 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	private:
		int					integer;
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
