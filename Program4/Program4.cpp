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

const int MAXSIZE = 25, MAXG = 240, MAXLWD = 101, MAXMASS = 3200;

void ReadParcelPostTable(int masses[], float costs[], int & sizeOfTable);
void PrintParcelPostTable(const int masses[], const float costs[], int sizeOfTable);
int FindIndexOfMass(const int masses[], int lookUpMass, int size);
float FindLargestDimension( const int dim[], int size);
float Girth( const int dim[], int size);

int main()
{
   cout << fixed << showpoint << setprecision(2);
   int size, dim, masses;
   float costs;
   ReadParcelPostTable(masses, costs, size);
   ReadInDimension(dim, size);
   PrintParcelPostTable(masses, costs, size );
   //largest = FindLargestDimension(dim, size);
   printTransnum_mass_reject(masses, costs, size);
   return 0;
}

/*---------------------------------------------------------------------
 * @author Zachary
 *
 * Reads the parcel post table, reading the size of the table first
 * and that many masses and costs.  Assume that the massess are
 * ordered in ascending order by mass in (integer) grams.
 *
 * @params: ( In, In, Out )
 ---------------------------------------------------------------------*/
void ReadParcelPostTable(int masses[], float costs[], int & sizeOfTable)
{
	while (!cin.eof())
	cout << "Enter how many in Parcel Post Table (Grams Dollars):"<< endl;
	cin >> sizeOfTable;
	cout << endl << "Enter Parcel Post Table (mass & cost) information:" << endl;
	cout << "Parcel Post Table in tabular form with " << sizeOfTable
		 << " entries." << endl;
	for(int i = 0; i < sizeOfTable; i++)
		if(i <= MAXSIZE)   //might not needed for grade but will pervent
			cin >> masses[i] >> costs[i];
}

/*---------------------------------------------------------------------
 * @author Zachary
 *
 * Prints the parcel post table in tabular form. Prints the heading 
 * that includes printing the size of the table. (See sample output)
 *
 * @params ( In, In, In )
 ---------------------------------------------------------------------*/
void PrintParcelPostTable(const int masses[], const float costs[], int sizeOfTable)
{
	cout << "Enter how many in Parcel Post Table (Grams Dollars):"
  		 << endl << endl << "Enter Parcel Post Table (mass & cost) information:" 
	 	 << endl << endl << "Parcel Post Table in tabular form with 10 entries."
		 << endl << endl << "      Mass        Cost" << endl
                       << "    ------       -----" << endl;
	for(int i = 0; i < sizeOfTable; i++)
	{
		cout << masses[i] << costs[i] << endl;
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
	cout << "    ------       -----" << endl;// change
}

/*---------------------------------------------------------------------
 * @author Elizabeth
 * @author Zachary
 *
 * checks what reject to use
 *this test masses, leargest dimension and Girth
 * @params none?
 ---------------------------------------------------------------------*/
bool printCost_Reject(const int masses, const int largest, const int Girth, int sizeOfTable)
{
	int numofreject = 0;
	for(int i = 0; i < sizeOfTable; i++)
	{
		if(masses[i] >= MAXSIZE)
		{
			cout <<  "REJECT_01 – EXCEEDS MASS LIMIT" << endl;
			++numofreject;
         return true;
		}
		else if(largest[i] >= MAXLWD)
		{	
			cout << "REJECT_02 – EXCEEDS DIMENSION LIMIT" << endl;
			++numofreject;
         return true;
		}
      else if(Girth[i] >= MAXG)
		{
			cout << "REJECT_03 – EXCEEDS LENGTH/GIRTH LIMIT" << endl;
			++numofreject;
         return true;
		}
	}
	return false;
}


void printTransnum_mass_reject( const int masses[], const int costs[], int sizeOfTable)

{
	for(int i = 0; i < sizeOfTable; i++)
	{
		if (printCost_Reject == false)
			cout << i // transacton number 
				 << masses[i] << costs[i] << endl;
		else
			cout << i // transacton number 
				 << masses[i] << printCost_Reject() << endl;
	}
	cout << "Number of packages processed is " << sizeOfTable << endl; // total packages
	cout <<	"Number of packages rejected is " << numofreject << endl;// total rejected 
	cout << "Total cost of sending non-rejected packages is " << // total cost << endl;
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
 * @params ( Out, In, In )
 ---------------------------------------------------------------------*/
int FindIndexOfMass(const int masses[], int lookUpMass, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (lookUpMass <= masses[i])
			return lookUpMass = i; // index of masses[i]
		else
		return -1;
	
	}
}
void ReadInDimension (int dim[], int size)
{
	int s1 = 0, s2 = 0, s3 = 0;
	for(int i = 0; i < size; i++)
	{
		cin >> s1 >> s2 >> s3;
		dim[i] = s1, s2, s3;
	}
}
/*void FindLength ( const int dim[], int size, int length[])
for(int i = 0; i < size; i++)
{
	if (s1 < s2 && s1 < s3)
		return length[i] = s1;
	else if( s2 < s3)
		return length[i] = s2;
	return length[i] = s3;
}
*/

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
	for(int i = 0 ; i < size ; i ++)
	{
		if (s1 < s2 && s1 < s3)
		return largest = s1;
	else if( s2 < s3)
		return largest = s2;
	return largest = s3;
		//if(dim[i] > largest)	
			//largest = dim[i];
	}
	//return largest;		
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
float Girth( const int dim[], int size)
{
for(int i = 0; i < size; i++)
{
	return // Girth = 2 * ( s1 + s2 + s3 – length(length = larghest dimension))
}
