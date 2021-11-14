#include "Trash.h"
Trash::Trash(int recycleNumber, int weightVal) :
	number(static_cast<Recycle_Number>(recycleNumber)), weight(weightVal), treatment(nullptr) {};

void Trash::treatTrash()
{
	TreatmentType type = TreatmentType::ChemTreatment;
	int cmd = 1;
	std::cout << "What kind of treatment do you want to treat your trash ? \n";
	std::cout << " 0.I don't know \n";
	std::cout << " 1.Chemical treatment \n";
	std::cout << " 2.Biological treatment \n";
	std::cout << "Enter number: ";
	std::cin >> cmd;

	type = static_cast<TreatmentType>(cmd);

	switch (type)
	{
	case TreatmentType::ChemTreatment:
	{
		treatment = new ChemicalTreatment();
	}
		break;
	case TreatmentType::BioTreatment:
	{
		treatment = new BiologicalTreatment();
	}
		break;
	default:
	{
		treatment = new ChemicalTreatment();
	}
		break;
	}

	treatment->TreatTrash(this->number);

}
