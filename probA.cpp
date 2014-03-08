#include <iostream>
#include <vector>
#include <stringstream>
using namespace std;


struct Point
{
  int x;
  int y;

}
istream &operator>>(istream in, Point p)
{
  in>>p.x>>p.y;
  return in;
}
struct Partition
{
  Point start;
  Point stop;
  int numLightningStrikes;
  float slope;
  

}

int minx(Partition p)
{
  return min(start.x, stop.x);
}

int maxx(Partition p)
{
  return max(start.x, stop.x);
}

int main()
{
  int N=0;// num plots
  int M=0;// num ls
  int caseNum = 0;
  Point ulc, lrc, temp, lsLoc;
  Partition tempPart;
  string inputLine;
  vector<Partition> part;
  // case loop here
  
  // first line
  cin>>N>>M>>ulc>>lrc;
  
  // num plots/ partition start
  {
  while( N-- > 0)
    cin>>temp;
    tempPart.start.x = temp.x;
    tempPart.start.y = ulc.y;
    tempPart.end.x = temp.y;
    tempPart.end.y = lrc.y;    
    part.push_back(tempPart);
  }
  
  // rest of area
  //part[part.size()-1].
  
  //number of lightning strikes
  while( --M > 0)
  {
    cin>>lsLoc;
    for(int i =0; i< part.size(); i++)
    {
      
    }  
  }
  
  // ending stuff
  cout<<"# PROGRAM A BY TEAM RAMROD"<<endl;
  
  return 0;
}