/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:18:31 by ratinax           #+#    #+#             */
/*   Updated: 2023/02/28 17:43:57 by tibernot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <colors.hpp>

std::string replaceCharPtr(char* charPtr)
{
	std::string str(charPtr);
	return str;
}

std::string	replace(std::string originString, std::string strIn, std::string strTo)
{
	std::string	res;
	int			i;

	if (strIn.length() == 0)
		return (originString);
	res = originString;
	i = originString.find(strIn);
	while (i >= 0)
	{
		res.erase(i, strIn.length());
		res.insert(i, strTo);
		i = res.find(strIn, i + strTo.length());
	}
	return (res);
}

int main(int argc, char **argv)
{
	std::ifstream	myInFile;
	std::ofstream	myOutFile;
	std::string		outFileName;
	std::string		strIn;
	std::string		strTo;
	std::string		line;

	if (argc != 4)
	{
		std::cout << MAGENTA << "Should be formated : " << YELLOW << "./Sed [name of file in] [string to replace] [string that replaces]" << WHITEENDL;
		return (0);
	}

	strIn = replaceCharPtr(argv[2]);
	strTo = replaceCharPtr(argv[3]);
	outFileName = replaceCharPtr(argv[1]) + ".replace";

	myInFile.open(argv[1]);
	if (!(myInFile.is_open()))
	{
		std::cout << MAGENTA << "Unable to open file" << WHITEENDL;
		return (0);
	}
	myOutFile.open(outFileName.c_str());
	if (myOutFile.is_open())
	{
		while (std::getline(myInFile, line))
			myOutFile << replace(line, strIn, strTo) << std::endl;
		myInFile.close();
	}
	else
		std::cout << MAGENTA << "Unable to open file" << WHITEENDL;
	return (0);
}
