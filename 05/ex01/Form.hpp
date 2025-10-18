/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:16 by marvin            #+#    #+#             */
/*   Updated: 2025/10/17 10:45:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <exception>

class Form
{
	private:
		const std::string	name;
		const int			sign_required_grade;
		const int			exec_required_grade;
		bool				is_signed;
	public:
		Form(std::string name, const int sign_required_grade, const int exec_required_grade, bool is_signed);
		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
