#pragma once
#ifndef BIOLOGICAL_TREATMENT_H
#define BIOLOGICAL_TREATMENT_H
#include "TrashTreatment.h"

class BiologicalTreatment:public TrashTreatment
{
public:
	void TreatTrash(Recycle_Number number);
private:
	std::string getLine_data(const char lineData[], Recycle_Number number);
};


#endif // !BIOLOGICAL_TREATMENT_H
