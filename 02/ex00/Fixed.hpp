/* ******************************************************************************** */
/*                                                                                  */
/*                                                  ░▒▓██████▓▒░░▒▓███████▓▒░       */
/*   Fixed.hpp                                      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*   By: Achille BOSC <achillebosc.dev@icloud.com>  ░▒▓████████▓▒░▒▓███████▓▒░      */
/*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*   Created: 2025/09/17 15:27 by AB                ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░      */
/*                                                                                  */
/* ******************************************************************************** */

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
