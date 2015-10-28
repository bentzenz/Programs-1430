//---------------------------------------------------------------------
//
// Name:  Elizabeth Harasymiw ,Zachary Bentzen   
//
// Course:  CS 1430, Section 5  
//
// Purpose:  program to help a post office in a small city in Wisconsin print a report of the parcels/boxes that were processed in a week.
//
// Input:    mass, length, width or depth
//
// Output:  
//---------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void ReadParcelPostTable(int masses[], float costs[], int & sizeOfTable);
void PrintParcelPostTable(const int masses[], const float costs[], int sizeOfTable);
int FindIndexOfMass(const int masses[], int lookUpMass, int size);
float FindLargestDimension( const int dim[], int size);
float Girth( const int dim[], int size);

int main()
{
   int mass;
   cin >> mass;
   return 0;
}
//Reads the parcel post table, reading the size of the table first
//and that many masses and costs.  Assume that the massess are
//ordered in ascending order by mass in (integer) grams.
//params: TODO
void ReadParcelPostTable(int masses[], float costs[], int & sizeOfTable);

 

//Prints the parcel post table in tabular form. Prints the heading 
//that includes printing the size of the table. (See sample output)
//params: TODO
void PrintParcelPostTable(const int masses[], const float costs[], int sizeOfTable);

 

//Finds and returns an index of the look-up-mass in the Masses 
//array. Since the Masses array is ordered in ascending order by 
//mass, this function returns the index of the first mass 
//in the masses array such that lookUpMass is less than or equal 
//to masses[i].
//On the off chance that no such index can be found, returns -1.
//params: TODO
int FindIndexOfMass(const int masses[], int lookUpMass, int size);

 

//Returns the largest value in the dim array; size is how many items
//are in the dim array.
//params: TODO
float FindLargestDimension( const int dim[], int size);

 

//Returns the girth of a parcel where girth is calculated as twice 
//the difference of the sum of the elements in the dim array and the 
//largest of the dimensions. 
//params: TODO
float Girth( const int dim[], int size);