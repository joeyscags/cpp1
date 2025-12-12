	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   main.cpp                                           :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2025/12/11 19:29:04 by jcupp             #+#    #+#             */
	/*   Updated: 2025/12/11 20:01:03 by joeyscags        ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include <cstdlib>
	#include <fstream>
	#include <iostream>
	#include <sstream>
	#include <string>

	int	main(int argc, char **argv)
	{
		if (argc != 4)
		{
			std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
			return (EXIT_FAILURE);
		}
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::ifstream inputFile(filename);
		if (!inputFile)
		{
			std::cerr << "Error: Could not open input file '" << filename << "'." << std::endl;
			return (EXIT_FAILURE);
		}
		std::ostringstream buffer;
		buffer << inputFile.rdbuf();
		std::string content = buffer.str();
		inputFile.close();
		std::string replaced;
		if (!replaceAll(content, s1, s2, replaced))
		{
			std::cerr << "Error: Failed to process file." << std::endl;
			return (EXIT_FAILURE);
		}
		std::ofstream outputFile(filename + ".replace");
		if (!outputFile)
		{
			std::cerr << "Error: Could not open output file." << std::endl;
			return (EXIT_FAILURE);
		}
		outputFile << replaced;
		outputFile.close();
		return (EXIT_SUCCESS);
	}
