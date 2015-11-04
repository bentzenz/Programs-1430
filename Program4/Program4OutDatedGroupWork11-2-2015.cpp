//---------------------------------------------------------------------
//
// Name:  Elizabeth Harasymiw ,Zachary Bentzen   
//
// Course:  CS 1430, Section 5  
//
// Purpose:  program to help a post office in a small city in Wisconsin 
//    print a report of the parcels/boxes that were processed in a week.
//
// Input:    mass, length, width or depth
//
// Output:  
//---------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAXSIZE = 25, MAXLG = 240, MAXLWD = 101, MAXMASS = 3200;

void ReadParcelPostTable(int masses[], float costs[], int & sizeOfTable);
void PrintParcelPostTable(const int masses[], const float costs[], int sizeOfTable);
int FindIndexOfMass(const int masses[], int lookUpMass, int size);
float FindLargestDimension( const int dim[], int size);
float Girth( const int dim[], int size);

int main()
{
   cout << fixed << showpoint << setprecision(2);
   int mass, size;
   float masses[MAXSIZE], costs[MAXSIZE];

   ReadParcelPostTable( masses, costs, size );
   
   PrintParcelPostTable( masses, costs, size );
   largest = FindLargestDimension( const int dim[], size);
   return 0;
}

/*---------------------------------------------------------------------
 * @author Zachary
 *
 * Reads the parcel post table, reading the size of the table first
 * and that many masses and costs.  Assume that the massess are
 * ordered in ascending order by mass in (integer) grams.
 *
 * @params: in, in, out
 ---------------------------------------------------------------------*/
void ReadParcelPostTable(int masses[], float costs[], int & sizeOfTable)
{
	cout << "Enter how many in Parcel Post Table (Grams Dollars):"<< endl;
	cin >> sizeOfTable;
	cout << endl << "Enter Parcel Post Table (mass & cost) information:" << endl;

	for(int i = 0; i < sizeOfTable; i++)
		if(i <= MAXSIZE)   //might not needed for grade but will pervent
			cin >> masses[i] >> costs[i];
	// this function is ReadInData
}

/*---------------------------------------------------------------------
 * @author Zachary
 *
 * Prints the parcel post table in tabular form. Prints the heading 
 * that includes printing the size of the table. (See sample output)
 *
 * @params TODO
 ---------------------------------------------------------------------*/
void PrintParcelPostTable(const int masses[], const float costs[], int sizeOfTable)
{
	cout << "Enter how many in Parcel Post Table (Grams Dollars):"
  		 << endl << endl << "Enter Parcel Post Table (mass & cost) information:" 
	 	 << endl << endl << "Parcel Post Table in tabular form with 10 entries."
		 << endl << endl << "      Mass        Cost" << endl
                         << "    ------       -----" << endl;
	for(int i = 0; i < size; i++)
	{
	/* for(int i = 0; i < size; i++)
	{
		if(masses[i] >= MAXSIZE)
		{
			cout <<  "REJECT_01 – EXCEEDS MASS LIMIT" << endl;
		}
		else if(largest[i]; >= MAXLWD)
		{	
			cout << "REJECT_02 – EXCEEDS DIMENSION LIMIT" << endl;
		}
		else if(Girth( const int dim[], size) >= MAXLG)
		{	
		}
	*/
	}			   
	cout << "    ------       -----" << endl;
}
void printCost_Reject()
{
	for(int i = 0; i < size; i++)
	{
		if(masses[i] >= MAXSIZE)
		{
			cout <<  "REJECT_01 – EXCEEDS MASS LIMIT" << endl;
		}
		else if(largest[i]; >= MAXLWD)
		{	
			cout << "REJECT_02 – EXCEEDS DIMENSION LIMIT" << endl;
		}
		else if(Girth( const int dim[], size) >= MAXLG)
		{	
		}
}

/*---------------------------------------------------------------------
 * @author Elizabeth
 * @author Zachary
 *
 * Finds and returns an index of the look-up-mass in the Masses 
 * array. Since the Masses array is ordered in ascending order by 
 * mass, this function returns the index of the first mass 
 * in the masses array such that lookUpMass is less than or equal 
 * to masses[i].
 * On the off chance that no such index can be found, returns -1.
 *
 * @params TODO
 ---------------------------------------------------------------------*/
int FindIndexOfMass(const int masses[], int lookUpMass, int size)
{

}

/*---------------------------------------------------------------------
 * @author Elizabeth
 *
 * Returns the largest value in the dim array; size is how many items
 * are in the dim array.
 *
 * @params: ( In, In )
 ---------------------------------------------------------------------*/
float FindLargestDimension( const int dim[], int size);
{
	float largest = 0;
	int i = 0;

	for(i = 0 ; i < size ; i ++))
		if(dim[i] > largest)	
			largest = dim[i];
	return largest;
		
}
 
/*---------------------------------------------------------------------
 * @author Elizabeth
 *
 * Returns the girth of a parcel where girth is calculated as twice 
 * the difference of the sum of the elements in the dim array and the 
 * largest of the dimensions. 
 *
 * @params: ( In, In )
 ---------------------------------------------------------------------*/
float Girth( const int dim[], int size);