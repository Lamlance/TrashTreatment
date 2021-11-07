#pragma once
#ifndef TRASH_TREATMENT_H
#define TRASH_TREATMENT_H
#include <iostream>
#include <vector>

enum class TEN_NHUA : int
{
	PE = 1,HDPE = 2
};

// is a relation + has a relation
class Trash
{
public:
	std::vector<TrashTreatment*> treat;
	void dieuKien()
	{
	}
		;
private:
	int weight;
	TEN_NHUA number;
};


class TrashTreatment // Class Abstract ko constructor
{
public:
	virtual void TreatTrash(TEN_NHUA number) = 0;
	~TrashTreatment() {};
};



class BurialTreatment: public TrashTreatment
{
public:
	void TreatTrash(TEN_NHUA number) { std::cout << "Burial\n"; };
};

class ChemicalTreatment : public TrashTreatment
{
public:

	void TreatTrash(TEN_NHUA number)
	{
		std::cout << "Chemical\n";
		this->timChat();
	};
	void timChat() { std::cout << "CHAT A"; };
};


#endif // !TRASH_TREATMENT
