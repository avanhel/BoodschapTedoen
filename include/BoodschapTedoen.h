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
#include <stdio.h>
#include "../sqlite/sqlite3.h"
using namespace std;

class BoodschapTedoen
{
public:
	BoodschapTedoen();
	virtual ~BoodschapTedoen();

	// list with functions for the main screen
	// list functions


	/* sqlite functions */

	// Checks if the database is a valid database created by this program
	bool CheckDatabase(void);

	// the basic function where a database is created
	// returns true if succeded
	// returns false if unable to create database
	bool CreateDatabase(void);

	bool DatabaseRepair(void);
	// Get a name of a list at the counter location
	// returns true if it succeded
	// returns false if there is no list at that location
	bool GrapListName(
			string *p_ListName,	// OUT list name
			int p_counter);		// IN counter value

	// Get a name of a list at the counter location
	bool GrapListItem(
			string *p_ListItem,	// OUT the item name
			int p_counter,
			string p_ListName); 		// returns an item on the list
	bool GiveListName(string p_ListName);						// stores the name of the new list
	bool GiveListItem(string p_ListName, string p_ListItem ); 	// stores a list item into a list


	// xml functions
	bool ExportList(string p_FileName,string p_ListName); 		// exports a list as an xml file
	bool ExportAll(string p_FileName); 							//exports all lists to an xml file
	bool ImportFile(string p_FileName, string p_FolderName);	 // imports an XML file which is specified.

private:

};

#endif /* BOODSCHAPTEDOEN_H_ */
