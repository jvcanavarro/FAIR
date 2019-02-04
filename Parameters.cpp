#include <iostream>
#include <string>
using namespace std;

class Parameters
{
	string outputDir,version, single, forward, reverse, interlaced, adapter, forwardAdapter, reverseAdapter;
	bool onlyIdentify, onlyRemove, trim, trimQuality;
	int minQuality, threads, phredOffset;
public:
	bool parseParameters(int argc, char **argv);
	void printHelp();
	void printVersion();
	string getOutputDir();
	string getSingle();
	string getForward();
	string getReverse();
	string getInterlaced();
	bool identifyOnly();
	bool removeOnly();
	bool trim();
	bool trimQuality();
	int getMinQuality();
	string getAdapter();
	string getForwardAdapter();
	string getReverseAdapter();
	int getThreads();
	int getPhredOffset();	// Quality
};

bool Parameters::parseParameters(int argc, char **argv)
{

}

void Parameters::printHelp()
{

}

void Parameters::printVersion()
{

}

string Parameters::getOutputDir()
{

}

string Parameters::getSingle()
{

}

string Parameters::getForward()
{

}

string Parameters::getReverse()
{

}

stirng Parameters::getInterlaced()
{

}

bool Parameters::identifyOnly()
{

}

bool Parameters::removeOnly()
{

}

bool Parameters::trim()
{

}

bool Parameters::trimQuality()
{

}

int Parameters::getMinQuality()
{

}

string Parameters::getAdapter()
{

}

string Parameters::getForwardAdapter()
{

}

string Parameters::getReverseAdapter()
{

}

int Parameters::getThreads()
{

}

int Parameters::getPhredOffset()
{
	
}