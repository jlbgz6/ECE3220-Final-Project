#include <iostream>
#include <fstream>



void save()
{
	fstream load;
	// From line 13 to 30 is to create a new file if the file is not exist
	load.open(".txt");

	try
	{
		if (!load.is_open())
		{
			load.close();
			load.open(".txt", fstream::out);
			load.close();
			throw ("File does not exist, generating loader data file loader.txt");
		}
	}
	catch (const runtime_error& error)
	{
		cerr << error.what() << endl;
	}
	load.close();

	
	load.open("loader.txt", fstream::out);
	// This is where you save the data into file
	//
	//
	//
	load.close();

	return;
}




void load()
{
	ifstream load;
	load.open("loader.txt", fstream::in);
	try
	{
		if (!load.is_open())
		{
			load.close();
			throw ("loader.txt File does not Exist");
		}
		if (load.peek() == EOF)
		{
			load.close();
			throw ("loader.txt File is empty, no data saved");
		}

		// This is where you read the data
		//
		//
		//

		load.close();

	}
	catch (const runtime_error& error)
	{
		cerr << error.what() << endl;
	}

	return;
}
