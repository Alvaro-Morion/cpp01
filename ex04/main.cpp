/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:52:40 by amorion-          #+#    #+#             */
/*   Updated: 2022/03/28 18:36:16 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::string		text;
	std::string		line;
	std::size_t		pos = 0;;

	if(argc != 4)
	{
		std::cerr << "Invalid number of arguments\n";
		return(1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if(s1.empty() || s2.empty())
	{
		std::cerr << "String must not be empty\n";
		return(1);
	}
	file = argv[1];
	ifs.open(file);
	if(!ifs.is_open())
	{	
		std::cerr << "Unable to open " << file << std::endl;
		return(1);
	}
	ofs.open(file + ".replace");
	if(!ofs.is_open())
	{
		std::cerr <<  "Unable to open/create " << file + ".replace" << std::endl;
		ifs.close();
		return(1);
	}
	while(getline(ifs, line))
	{	
		text += line;
		if(!ifs.eof())
			text += "\n";
	}
	while((pos = text.find(s1, pos)) != text.npos)
	{
		text.erase(pos, s1.size());
		text.insert(pos, s2);
		pos += s2.size();
	}
	ifs.close();
	ofs << text;
	ofs.close();
	return(0);
}
