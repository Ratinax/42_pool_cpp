/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:54:49 by tibernot          #+#    #+#             */
/*   Updated: 2023/02/27 10:22:16 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}

void	Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}
void	Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}
void	Contact::setNickName(std::string nickName)
{
	_nickName = nickName;
}
void	Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}
void	Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}
std::string	Contact::getLastName(void)
{
	return(_lastName);
}
std::string	Contact::getNickName(void)
{
	return(_nickName);
}
std::string	Contact::getPhoneNumber(void)
{
	return(_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return(_darkestSecret);
}

std::ostream	&operator<<(std::ostream &out, Contact contact)
{
	out << "First name :" << contact.getFirstName() << std::endl;
	out << "Last name :" << contact.getLastName() << std::endl;
	out << "Nick name :" << contact.getNickName() << std::endl;
	out << "Phone number :" << contact.getPhoneNumber() << std::endl;
	out << "Darkest secret :" << contact.getDarkestSecret() << std::endl;
	return (out);
}
