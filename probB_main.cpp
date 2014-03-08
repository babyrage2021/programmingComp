#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N ; //total number of pins
	int T1; //first pin
	int T2; //second pin
	int T3; //third pin

	int tick_count = 0; //count of total number of ticks needed  
	int case_num = 0; //for the output
  
	bool hold = true;

	cout << "# PROGRAM B BY TEAM RAMROD" << endl;

	while(hold == true)
	{
		case_num++;
	    N=1;
		while(N % 5  != 0)
		{
			cin >> N >> T1 >> T2 >> T3;
			//cout<<N<<" "<<T1<<" "<<T2<<" "<<T3<<endl; //debugging line
		}
		
		//N--; //because the tumbler runs from 0 to N-1

		if(N == 0 && T1 ==0 && T2==0 && T3==0) //exits on recieving the right input
		{
			hold = false;
			return 0;
		}
	
		tick_count = tick_count + (2 * N); //the first two clockwise rotations
		tick_count = tick_count + (N - 1); //for maximum number of inputs start to the right of T1, so that you must spin one shy of N to reach T1
		tick_count = tick_count + N; //spinning once counterclockwise
		tick_count = tick_count + (-(T1 - N) + (N - T2)); //spinning counterclockwise to reach T2
		tick_count = tick_count + (-(90 - N) + T3); //spinning clockwise to reach T3;

		cout << "Case #" << case_num << ": " << tick_count << endl;

		tick_count = 0;
		T1 = 0;
		T2 = 0;
		T3 = 0;
	}
	
	return 0;
}
