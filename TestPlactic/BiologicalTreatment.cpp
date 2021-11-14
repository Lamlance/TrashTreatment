#include "BiologicalTreatment.h"
#include <fstream>
#include <string>
#include <sstream>

std::string BiologicalTreatment::getLine_data(const char lineData[], Recycle_Number number)
{
	std::stringstream ss(lineData);
	std::string ans("");
	std::string buffer;
	
	while (!ss.eof() )
	{
		std::getline(ss, buffer, ',');
		try
		{
			if ( std::stoi(buffer) == int(number) )
			{
				std::getline(ss, buffer, ',');
				ans += buffer + ": ";
				std::getline(ss, buffer, ',');
				ans += (buffer + "\n");
			}
		}
		catch (const std::exception&)
		{
			std::getline(ss, buffer);
			continue;
		}
		std::getline(ss, buffer);
	}
	return ans;
}


void BiologicalTreatment::TreatTrash(Recycle_Number number)
{
	std::ifstream fo("../Databases/SinhHoc.csv");
	std::string str;
	std::string buffer;


	if (!fo.is_open())
	{
		std::cout << "Missing databases\n";
		return;
	}

	while (!fo.eof())
	{
		std::getline(fo, buffer);
		str += this->getLine_data(buffer.c_str(), number);
	}

	std::cout << str << std::endl;
}
