#include <string>

using namespace std;

int main(int argc, char** argv)
{
	const string cc = "g++";
	const string stdlib = "-std=c++17";
	
	for (int i = 1; i < argc; ++i)
	{
		string outfile = argv[i];
		outfile.erase(outfile.end()-4, outfile.end());
		const string command = cc + " " + argv[i] + " -o " + outfile + " " + stdlib;
		system(command.c_str());
	}
}
