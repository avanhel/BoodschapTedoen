/**************************************************************************
 *
 *
 * 	Author: 	A.M.F. van Helden
 *	Program:	BoodschapTedoensqlite.h
 *
 *	Created on: 14 aug. 2015
 *
 *	Purpose:	This communicates with an sqlite database.
 *
 *				This file is shared by all the gui's
 *
******************************************************************************/


#ifndef BOODSCHAPTEDOEN_SQLITE_H_
#define BOODSCHAPTEDOEN_SQLITE_H_


//////////////////////////////
// Includes
/////////////////////////////
#include "../sqlite/sqlite3.h"
#include <string>

class BoodschapTedoen_sqlite {
public:
	BoodschapTedoen_sqlite(string p_DatabaseName);
	virtual ~BoodschapTedoen_sqlite();



	/* sqlite functions */

	// Checks if the database is a valid database created by this program
	bool CheckDatabase(void);

	// the basic function where a database is created
	// returns true if succeded
	// returns false if unable to create database
	bool CreateDatabase(void);

	// In this function
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



private:
	string m_DataBaseName;

};

#endif /* BOODSCHAPTEDOEN_SQLITE_H_ */
