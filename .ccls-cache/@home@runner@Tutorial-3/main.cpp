#include <iostream>
#include<iomanip>

using namespace std;

/*int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  int r;
  
 cout <<setw(5)<<"No" <<setw(15)<< "Name" <<setw(10)<< "Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout <<setw(5)<<setiosflags(ios::fixed)<< r+1<<
 setw(15)<<setiosflags(ios::fixed)<< names[r]<<
 setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<< marks[r] <<endl;
 }

}*/

/*
#include <iostream>

using namespace std;

int volume(int height, int width, int length);

int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;
cout<<endl;

 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;

 totalVolume = volume(box1Height, box1Width, box1Length)
 + volume(box2Height, box2Width, box2Length);
 cout<<endl;
 
 cout << "Volume of Box is " << totalVolume << endl;

int volume(int height, int width, int length);

 return 0;
}
// Implement the Volume() function here

int volume(int height, int width, int length){
int total;
  total= height*width*length;
  return total;
}
*/  

#include <iostream>
using namespace std;

struct Box{
int height,width,length;
}box1,box2;

int volume(int height, int width, int length);
// 1. Define a structure called Box
// have the integer data types Height, Width, Length
// Do not change the main function
int main() {

 // 2. Create a variable called box1 of the Box structure type
 // int box1Height, box1Width, box1Length;
 // 3. Create a variable called box2 of the Box structure type

 // int box2Height, box2Width, box2Length;
 int totalVolume;

  

 // 4. Input the height, width, lenght of box1 and box2
 cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
cin >> box1.length;

 cout << "Enter Box 2 Height : ";
 cin >> box2.height;
 cout << "Enter Box 2 Width : ";
 cin >>  box2.width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.length;

 // 5. Replace the coding below to pass the Box type structure
 totalVolume = volume(box1.height,box1.width,box1.length)
 + volume(box2.height,box2.width,box2.length);


 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}
// Implement the functions here

int volume(int height, int width, int length){
  int total;
  total=
}