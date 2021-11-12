#include "TrashTreatment.h"

vector<Trash*> BiologicalTreatment::readBiologicalTreatment() {
	fstream fin;
	fin.open(bio_filename, fstream::in);
	string s;
	vector <Trash*> t;
	t[0] = new Trash[7]; //for num plastic from 1 to 7
	for (int i = 0; i < 7; i++) {
		t[0][i].number = (TEN_NHUA)(i + 1);
	}
	getline(fin, s, '\n');
	while (!fin.eof()) {
		int num;
		char com;
		fin >> num;
		fin >> com;
		getline(fin, method_name, ',');
		getline(fin, description, '\n');
		t[0][num - 1].treat.push_back(*this);
	}
	fin.close();
	return t;
}

vector<Trash*> ChemicalTreatment::readChemicalTreatment() {
	fstream fin;
	fin.open(chemical_filename, fstream::in);
	string s;
	vector <Trash*> t;
	t[1] = new Trash[7]; //for num plastic from 1 to 7
	for (int i = 0; i < 7; i++) {
		t[1][i].number = (TEN_NHUA)(i + 1);
	}
	getline(fin, s, '\n');
	while (!fin.eof()) {
		getline(fin, method_name, ',');
		getline(fin, description, ',');
		getline(fin, s, '\n');
		int n = s.length();
		for (int i = 0; i < n; i++) {
			if (0 < s[i] && s[i] < 8)
				t[1][s[i] - 1].treat.push_back(*this);
		}
	}
	fin.close();
	return t;
}

