#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>

// Conditional Include for the direct/stat.h depending on the OS
#ifdef _WIN32
#include <direct.h>
#elif defined __linux__
#include <sys/stat.h>
#endif

#include "../Defs.h"
using namespace std;

class UI
{
private:

    MODE AppMode;
	string InputFileName;
	string OutputFileName;

public:

    /*
	* Function: UI.
	* Default Constructor.
	*/
    UI();

    /*
	* Function: ~UI.
	* Destructor.
	*/
    ~UI();

    /*
	* Function: SetAppMode.
	* Sets the Application Mode.
	*/
    void SetAppMode();

	/*
	* Function: GetIOFiles.
	* Reads the Input & Output Files Names.
	*/
    void GetIOFiles();

	/*
	* Function: FileExists.
	* Checks if a file exists (Needed for the Input & Output Files).
	*/
	bool FileExists(string fileName) const;

    /*
	* Function: GetAppMode.
	* Returns the current Application Mode.
	*/
    MODE GetAppMode() const;

	/*
	* Function: GetInputFilePath.
	* Returns the path of the input file.
	*/
    string GetInputFilePath() const;

	/*
	* Function: GetOutputFilePath.
	* Returns the path of the output file.
	*/
    string GetOutputFilePath() const;
    
    /*
	* Function: SaveOutput.
	* Produces the simulation output file.
	*/
    void SaveOutput() const;

    /*
	* Function: PrintMsg.
	* Prints a message to the CLI.
	*/
    void PrintMsg(const string &msg) const;
};

#endif