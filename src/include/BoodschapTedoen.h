/*
 * BoodschapTedoen.h
 *
 *  Created on: 28 Jul 2015
 *      Author: avanhelden
 */

/*
 * This class is the main class for the back-end of the application
 * It contains all the functions such that the gui can be platform specific
 * All functions return a TRUE if it was an success or FALSE if the function failed
 */
#ifndef BOODSCHAPTEDOEN_H_
#define BOODSCHAPTEDOEN_H_

#include <string>
#include <stdio.h>

#include "BoodschapTedoen_sqlite.h"
#include "BoodschapTedoen_xml.h"

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

	// Get a name of a list at the counter location
	// returns true if it succeded
	// returns false if there is no list at that location
	bool GrapListName(
			string *p_ListName,	// OUT list name
			int p_counter);		// IN counter value

	// Get a name of a list at the counter location
	bool GrapListItem(
			string *p_ListItem,	// OUT the item name
			int p_counter,		// IN counter value
			string p_ListName); 		// returns an item on the list


	// get
	// stores the name of the new list and creates a new list
	bool GiveListName(
			string p_ListName); // IN list name

	// stores a list item into a list
	bool GiveListItem(
			string p_ListName, 	// IN list name
			string p_ListItem ); // IN item text


	// remove items
	// removes a list item from a list
	bool RemoveListItem(
			string p_ListName,  // IN list name
			string p_ListItem ); // IN List item

	// removes a list with all its items
	bool RemoveListName(
			string p_ListName); // IN List name

	// xml functions
	// exports a list as an xml file
	bool ExportXMLList(
			string p_FileName, 		// IN Export file name
			string p_ListName, 		// IN List name to be exported
			string p_FolderName);	 // IN File location
	//exports all lists to an xml file
	bool ExportXMLAll(
			string p_FileName, // IN file name of the XML file
			string p_FolderName);	 // IN File location

	// imports an XML file which is specified.
	bool ImportXMLFile(
			string p_FileName, // IN file name of the XML file
			string p_FolderName);	 // IN File location

	// Cloud services. These will be included at a later date.
	// An XML file named BoodschapTedoen.xml is stores in the folder BoodschapTedoen
	// in the cloud specified.
	// The user can use this file to update or overwrite the local database.

	// export to a cloud service like dropbox
	bool ExportTO(int p_version, int p_option);
	// import from a cloud service like dropbox
	bool ImportFrom(int p_version, int p_option);

private:

};

#endif /* BOODSCHAPTEDOEN_H_ */
