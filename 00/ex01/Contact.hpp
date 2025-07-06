/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 23:18:39 by abosc             #+#    #+#             */
/*   Updated: 2025/06/26 23:57:57 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "header.hpp"

class Contact
{
	private:
	str		name;
	str		last;
	str 	nick;
	str 	phone;
	str 	secret;
	
	public:
	str		getName() const;
	str		getLast() const;
	str		getNick() const;
	str		getPhone() const;
	str		getSecret() const;
	
	void	setName(str name);
	void	setLast(str last);
	void	setNick(str nick);
	void	setPhone(str phone);
	void	setSecret(str secret);
};

#endif