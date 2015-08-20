/**************************************************************************
 *
 *
 * 	Author: 	A.M.F. van Helden
 *	Program:	LanguageChoice.h
 *
 *	Purpose:	All the key phrases for the menus are
 *				stored in a central location.
 *				By using a numerator and an array, it is possible to change the
 *				language at runtime
 *
 *				This file is shared by all the gui's
******************************************************************************/


#ifndef LANGUAGECHOICE_H
#define LANGUAGECHOICE_H

// always make sure that the enum has the same number as all the menu items


enum MenuText
{

};

// all the menu terms in Dutch
const char* const Dutch[]=
{

};


// all the menu terms in English
const char* const English[]=
{

};


// the function works as follows
// cout << Dutch[TXT_kreet] << "\n";

#endif // LANGUAGECHOICE_H
