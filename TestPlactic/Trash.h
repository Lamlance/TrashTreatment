#pragma once
#ifndef TRASH_H
#define TRASH_H
#include "TrashTreatment.h"
#include "BiologicalTreatment.h"
#include "ChemicalTreatment.h"
#include <string>

enum class TreatmentType: int
{
	ChemTreatment = 1,BioTreatment 
};

class Trash
{
public:
	Trash(int recycleNumber = 7, int weightVal = 0);
	virtual std::string getPlastic_name() { return "YOU:))"; };
	void treatTrash();
private:
	TrashTreatment* treatment;
	std::string ansTreatment;
	int weight;
	Recycle_Number number;
};

#endif // !TRASH_H

