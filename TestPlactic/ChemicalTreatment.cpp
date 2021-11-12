#include "ChemicalTreatment.h"
#include <fstream>
#include <string>
#include <sstream>
#include <exception>

std::string ChemicalTreatment::getLine_data(const char lineData[], Recycle_Number number)
{
	std::string ans("");
	std::string buffer;
	std::stringstream ss(lineData);

	std::getline(ss, buffer, ',');
	ans += buffer +": ";// Ten chat
	std::getline(ss, buffer, ',');
	ans += buffer;// Chi tiet chat
	ans += "\n"; // cho dep :))

	while (!ss.eof() && buffer.compare("") != 0)
	{
		std::getline(ss, buffer, ',');
		try
		{
			if (std::stoi(buffer) == int(number))
			{
				return ans;
			}
		}
		catch (const std::exception&) { continue; }
	} 

	return "";
}

void ChemicalTreatment::TreatTrash(Recycle_Number number)
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
		str += this->getLine_data(buffer.c_str(),number) ;
	}

	std::cout << str << std::endl;
	
	return;
}
