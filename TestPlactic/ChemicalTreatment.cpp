#include "ChemicalTreatment.h"
#include <fstream>
#include <string>
#include <sstream>

std::string ChemicalTreatment::getLine_data(const char lineData[])
{
	std::string ans("");
	std::string buffer;
	std::stringstream ss(lineData);
	while (!ss.eof())
	{
		std::getline(ss, buffer, ',');
		ans += buffer;
		std::getline(ss, buffer, ',');
		ans += buffer;

		do
		{
			std::getline(ss, buffer, ',');
			ans += buffer;
		} while (!ss.eof() && buffer.compare("") != 0);
	}
	return ans.c_str();
}

void ChemicalTreatment::TreatTrash(Recycle_Numer number)
{
	std::ifstream fo("../Databases/HoaHoc.csv");
	std::string str;
	std::string buffer;


	if (!fo.is_open())
	{
		std::cout << "Missing databases\n";
		return;
	}

	while (!fo.eof())
	{
		std::getline(fo,buffer);
		str += this->getLine_data(buffer.c_str() ) + "\n";
	}
	std::cout << str << std::endl;
	return;
}
