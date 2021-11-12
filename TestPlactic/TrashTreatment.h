#pragma once
#ifndef TRASH_TREATMENT_H
#define TRASH_TREATMENT_H
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <string.h>

#define bio_filename "Biological.csv"
#define chemical_filename "Chemical.csv"

using namespace std;
enum class TEN_NHUA : int
{
	PE = 1,HDPE = 2, PVC = 3, LDPE = 4, PP = 5, PS = 6, OTHER = 7
};

// is a relation + has a relation
class TrashTreatment // class Abstract ko constructor
{
protected:
	string method_name;
	string description;
public:
	//virtual void TreatTrash(TEN_NHUA number);
	~TrashTreatment() {};
	string return_method_name() {
		return method_name;
	}
};

class Trash
{
public:
	int weight;
	TEN_NHUA number;
	vector<TrashTreatment> treat;
public:
	void dieuKien() {

	}
	
};


class BurialTreatment: public TrashTreatment
{
public:
	void TreatTrash(TEN_NHUA number) { cout << "Burial\n"; };
};

class ChemicalTreatment : public TrashTreatment
{
public:

	void TreatTrash(TEN_NHUA number)
	{
		cout << "Chemical\n";
		this->timChat();
	};
	void timChat() { cout << "CHAT A"; };
	vector<Trash*> readChemicalTreatment();
};


class BiologicalTreatment : public TrashTreatment {
public:
	void TreatTrash(TEN_NHUA number)
	{
		cout << "Biological\n";
		this->timChat();
	};
	void timChat() { cout << "CHAT A"; };
	vector<Trash*> readBiologicalTreatment();
	void test();
};


#endif // !TRASH_TREATMENT
