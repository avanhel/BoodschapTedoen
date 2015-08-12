/*
 * BoodschapTedoen.h
 *
 *  Created on: 28 Jul 2015
 *      Author: avanhelden
 */

/*
 * This class is the main class for the back-end of the application
 * It contains all the functions such that the gui can be platform specific
 *
 */
#ifndef BOODSCHAPTEDOEN_H_
#define BOODSCHAPTEDOEN_H_
#include <string>
using namespace std;

class BoodschapTedoen
{
public:
	BoodschapTedoen();
	virtual ~BoodschapTedoen();

	// list with functions for the main screen
	string GrapListName(int p_counter);	// returns the name of the list at that specific location
	string GrapListItem(int p_counter, string p_ListName); 	// returns an item on the list
	void GiveListName(string p_ListName); // stores the name of the new list
	void GiveListItem(string p_ListName, string p_ListItem ); // stores a list item into a list

	void ExportList(string p_FileName,string p_ListName); // exports a list as an xml file
	void ExportAll(string p_FileName); //exports all lists to an xml file

	void ImportFile(string p_FileName, string p_FolderName); // imports an XML file which is specified.

private:

};

#endif /* BOODSCHAPTEDOEN_H_ */
