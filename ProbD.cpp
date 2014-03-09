#include <iostream>
#include <string>

using namespace std;

int main()
{
	int case_num = 0;
	bool hold = true;

	string type; //trash variable
	string slash; //trash variable
	string con; //trash variable
	
	float width; //inputted in millimeters								//output in centimeters
	float ratio; //ratio of height to width. .75 is 75% etc ...
	float diameter; //diameter of the rim of the tire, inputted in inches
	
	float total;
	
	while(hold == true)
	{
		case_num++;
		
		cin >> type;
		if(type == "0")
		{
			return 0;
		}
		
		//cout << width << " " << ratio << " " << diameter << endl;
		
		//width = width/10;
		diameter = diameter*2.54;
		ratio = ratio/100;
		
		//cout << width << " " << ratio << " " << diameter << endl;
		
		total = (((2 * (width * ratio))/10) + diameter);
		
		cout << "Case #" << case_num << ": " << total << endl;
	}

	return 0;
}
