#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
  // Write code here
  string quotes[]{
  "Don't pursue happiness – create it.",
        "All things are difficult before they are easy.",
        "The early bird gets the worm, but the second mouse gets the cheese.",
        "Someone in your life needs a letter from you.",
        "The fortune you search for is in another cookie.",
        "Help! I'm being held prisoner in a Chinese bakery!"
  };
srand(time(0));
int dice=rand()%51;
int i=rand()%6;

cout<<dice<<endl;
cout<<quotes[i]<<endl;

}
