#pragma once
#ifndef CHEMICAL_TREATMENT_H
#define CHEMICAL_TREATMENT_H
#include "TrashTreatment.h"
#include <string>

class ChemicalTreatment: public TrashTreatment
{
public:
	//Doc file
	void TreatTrash(Recycle_Numer number);
	std::string getLine_data(const char lineData[]);
};


#endif // !CHEMICAL_TREATMENT_H
