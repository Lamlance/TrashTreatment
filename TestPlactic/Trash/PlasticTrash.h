#pragma once
#ifndef PLASTIC_TRASH_H
#define PLASTIC_TRASH_H
#include "../PlasticTreatment/TrashTreatment.h"
#include "../PlasticTreatment/BiologicalTreatment.h"
#include "../PlasticTreatment/ChemicalTreatment.h"
#include "Trash.h"
#include <string>

enum class TreatmentType: int
{
	ChemTreatment = 1,BioTreatment 
};

class PlasticTrash:public Trash
{
public:
	PlasticTrash(int recycleNumber = 7,int weightVal = 1);
	void treatTrash();
private:
	TrashTreatment* treatment;
	std::string ansTreatment;
	Recycle_Number number;
};

#endif // !TRASH_H

