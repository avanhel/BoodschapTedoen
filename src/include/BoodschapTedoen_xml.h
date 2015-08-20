/**************************************************************************
 *
 *
 * 	Author: 	A.M.F. van Helden
 *	Program:	BoodschapTedoen_xml.h
 *
 *	Created on: 14 aug. 2015
 *
 *	Purpose:	This file contains the xml export and import functions
 *				It also contains functions to synchronize with cloud services
 *
 *				This file is shared by all the gui's
 *
******************************************************************************/

#ifndef BOODSCHAPTEDOEN_XML_H_
#define BOODSCHAPTEDOEN_XML_H_

#include <string>


class BoodschapTedoen_xml {
public:
	BoodschapTedoen_xml();
	virtual ~BoodschapTedoen_xml();

	// xml functions
	// exports a list as an xml file
	bool ExportList(
			string p_FileName, 		// IN Export file name
			string p_ListName, 		// IN List name to be exported
			string p_FolderName);	 // IN File location
	//exports all lists to an xml file
	bool ExportAll(
			string p_FileName, // IN file name of the XML file
			string p_FolderName);	 // IN File location

	// imports an XML file which is specified.
	bool ImportFile(
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
};

#endif /* BOODSCHAPTEDOEN_XML_H_ */
