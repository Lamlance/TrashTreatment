#pragma once
#ifndef CHEMICAL_TREATMENT_H
#define CHEMICAL_TREATMENT_H
#include "TrashTreatment.h"
#include <string>

class ChemicalTreatment: public TrashTreatment
{
public:
	void TreatTrash(Recycle_Number number);
private:
	std::string getLine_data(const char lineData[], Recycle_Number number);
};


#endif // !CHEMICAL_TREATMENT_H
