#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int clustergroup = 5;
const int attr = 28;	//attribute
const int inst = 20;	//instances

float trainData[inst][attr]
{
	{ 64558, 64556, 64543, 64543, 64541, 64543, 64543, 64541, 64541, 64541, 64541, 64541, 64541, 64528, 64528, 63529, 63529, 64541, 64541, 64541, 64541, 64541, 64541, 64541, 64528, 64528, 64528, 64528 },
	{ 60502, 60489, 61485, 60487, 61485, 61513, 60515, 60500, 60500, 60487, 60500, 61526, 60528, 60528, 60528, 60500, 61483, 61485, 60472, 60472, 60461, 61470, 60487, 60487, 61485, 60487, 60472, 60472 },
	{ 57040, 57040, 57040, 58041, 58041, 58041, 58041, 57042, 57042, 58043, 58043, 58043, 58043, 58043, 57042, 58041, 58041, 58041, 58041, 58041, 58041, 58041, 58041, 58041, 58041, 58041, 58041, 58041 },
	{ 71083, 72087, 71091, 71095, 71099, 72103, 71099, 72099, 72099, 73098, 72094, 73094, 72091, 72091, 72091, 72095, 72095, 72095, 72095, 71095, 71095, 72103, 71103, 71103, 71103, 72103, 72103, 72098 },
	{ 68209, 68209, 68216, 68216, 68223, 68223, 68223, 68223, 68230, 68230, 68230, 68230, 68230, 68230, 68223, 68223, 68223, 68223, 68230, 67224, 67217, 67217, 68223, 68223, 68223, 68223, 68223, 68230 },
	{ 71046, 71046, 71046, 71046, 71046, 71046, 71046, 71046, 71046, 70046, 69046, 70046, 70046, 69046, 69046, 70048, 70048, 70048, 70049, 70049, 70049, 70048, 70049, 70048, 70046, 70046, 70048, 71048 },
	{ 61096, 61096, 60093, 60092, 60093, 60093, 61096, 61096, 61096, 61096, 60092, 60092, 60092, 60092, 61092, 61092, 60089, 60089, 60089, 60089, 60089, 60092, 60089, 60089, 60089, 61088, 61088, 60089 },
	{ 68132, 69137, 69137, 68137, 68137, 69142, 69142, 68137, 68137, 68137, 69142, 69142, 69142, 69142, 69142, 68142, 68142, 69142, 69142, 69142, 69142, 69142, 69142, 68137, 69137, 69137, 69137, 69136 },
	{ 71590, 71575, 71574, 71560, 71560, 71559, 72573, 71559, 71559, 71559, 71559, 72588, 72588, 72587, 72573, 72572, 72571, 72557, 72557, 72556, 72556, 72557, 72556, 72542, 72542, 72556, 72556, 72556 },
	{ 74631, 74649, 74650, 74650, 74650, 74632, 74632, 74632, 73633, 73650, 73650, 74667, 74667, 73650, 73633, 73617, 73617, 73617, 73617, 73585, 73584, 73600, 73601, 73601, 73585, 73585, 73585, 73585 },
	{ 62999, 62999, 62999, 62999, 62999, 62999, 61999, 62999, 62999, 62999, 62999, 62999, 61999, 62999, 62999, 62999, 62999, 62999, 62999, 62999, 62999, 62999, 62999, 61999, 62999, 62999, 62999, 61999 },
	{ 46014, 46014, 46014, 46014, 46014, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015 },
	{ 82394, 82382, 82383, 82372, 82382, 82372, 82416, 82440, 82428, 82416, 82382, 82372, 82383, 82394, 82405, 82394, 82382, 82383, 82383, 82383, 82394, 82394, 82394, 82394, 82383, 83382, 82372, 82361 },
	{ 78999, 78999, 78999, 78999, 79999, 78999, 78999, 78999, 79999, 78999, 78999, 78999, 78999, 79999, 79999, 78999, 78999, 79999, 79999, 78999, 79999, 79999, 79999, 79999, 79999, 79999, 78999, 78999 },
	{ 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056 },
	{ 71999, 71999, 71999, 70999, 71999, 71999, 71999, 71999, 71999, 71999, 71999, 71999, 71999, 70999, 70999, 70999, 71999, 71999, 71999, 70999, 71999, 71999, 71999, 70999, 70999, 70999, 70999, 70999 },
	{ 66805, 65808, 65808, 66805, 66805, 65785, 65785, 65785, 65785, 66782, 65765, 66763, 66760, 66760, 66760, 66739, 66722, 66722, 66722, 67736, 66719, 66719, 66701, 66701, 67717, 66701, 66698, 66698 },
	{ 63076, 63072, 64072, 64068, 63065, 64065, 65064, 64061, 65061, 63062, 63062, 63062, 64065, 63058, 65061, 65061, 65058, 65057, 65055, 66054, 66054, 65055, 65055, 64055, 63052, 64052, 63052, 63052 },
	{ 67197, 67197, 67204, 67210, 67204, 67204, 67210, 67210, 67210, 67210, 67204, 66198, 67197, 67197, 66198, 67203, 67203, 66198, 66198, 66204, 67211, 66204, 67217, 66211, 66212, 66211, 66211, 67218 },
	{ 65151, 66151, 66151, 66151, 65146, 66151, 65146, 65146, 65146, 65146, 65146, 65146, 65146, 65146, 65146, 65146, 65146, 65146, 66145, 66145, 66145, 66145, 66145, 66145, 66145, 66145, 66145, 66150 },
};	//training data

float testData[inst][attr]
{
	{ 63529, 63529, 64528, 64528, 64528, 64528, 64526, 64526, 64528, 64528, 64528, 64528, 64528, 64528, 64528, 64528, 64526, 64526, 63514, 64526, 64526, 64526, 63514, 64528, 63514, 63514, 63514, 63514 },
	{ 61445, 61434, 60423, 61434, 60412, 61421, 60435, 61434, 60447, 60449, 61455, 61470, 61470, 61469, 61459, 61443, 60435, 61445, 61445, 61459, 61457, 61469, 61459, 61443, 61443, 61445, 61457, 61459 },
	{ 56040, 56040, 56040, 57040, 57040, 56040, 56040, 56040, 55040, 57042, 57042, 57042, 57042, 57042, 57042, 57042, 57042, 58041, 58041, 58041, 57042, 57042, 57042, 56042, 57044, 56044, 56044, 56044 },
	{ 73094, 72090, 72087, 73086, 72083, 72083, 72079, 72079, 72079, 72076, 72075, 72072, 72072, 72072, 72069, 71069, 71069, 71069, 71073, 71076, 71076, 71076, 72076, 72072, 72072, 72072, 72069, 72069 },
	{ 68230, 68230, 68230, 68231, 68231, 68231, 68231, 68238, 68231, 68231, 68231, 68230, 68230, 68231, 68231, 68230, 68230, 68230, 68223, 68223, 68223, 68223, 68223, 67224, 68230, 68230, 68230, 68230 },
	{ 71046, 70046, 70046, 70046, 70046, 70046, 70046, 70048, 70048, 70048, 70046, 70046, 70048, 70049, 70048, 70048, 70049, 70049, 70049, 70049, 70049, 70049, 70049, 70048, 70049, 70049, 70049, 70049 },
	{ 71046, 70046, 70046, 70046, 70046, 70046, 70046, 70048, 70048, 70048, 70046, 70046, 70048, 70049, 70048, 70048, 70049, 70049, 70049, 70049, 70049, 70049, 70049, 70048, 70049, 70049, 70049, 70049 },
	{ 68132, 69132, 69132, 69131, 68127, 69127, 68122, 69122, 69117, 69122, 68122, 68122, 68123, 68127, 68128, 68128, 68132, 68132, 68132, 68132, 68132, 68128, 68127, 68122, 68122, 68122, 68118, 68118 },
	{ 72542, 72541, 71528, 71514, 71514, 71514, 71514, 72513, 71514, 71514, 71514, 72527, 72527, 72527, 72527, 71514, 72513, 71501, 71501, 71501, 71501, 71514, 71514, 71514, 71514, 71514, 71514, 71514 },
	{ 72586, 72586, 72586, 72586, 72586, 72586, 72586, 72586, 72586, 72586, 72586, 72572, 72571, 72571, 72572, 72571, 72557, 72557, 72557, 72557, 72557, 72557, 72557, 71543, 72557, 72557, 72557, 71543 },
	{ 62999, 62999, 62999, 62999, 62999, 62999, 62999, 63999, 62999, 62999, 62999, 66999, 62999, 62999, 62999, 62999, 62999, 62999, 61999, 61999, 62999, 62999, 61999, 62999, 62999, 62999, 62999, 61999 },
	{ 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 46015, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016, 48016 },
	{ 82372, 82361, 82351, 82351, 82331, 82351, 82341, 82361, 82362, 82372, 82361, 82351, 82372, 82361, 82341, 82351, 82383, 82394, 82383, 82372, 82361, 82341, 82331, 82331, 82351, 82361, 82351, 82372 },
	{ 78999, 78999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999, 79999 },
	{ 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85056, 85054, 85054, 85054, 85054, 85054, 85054 },
	{ 71999, 71999, 71999, 71999, 71999, 72999, 71999, 71999, 71999, 71999, 71999, 72999, 71999, 72999, 71999, 71999, 71999, 71999, 71999, 70999, 71999, 71999, 72999, 72999, 72999, 72999, 71999, 71999 },
	{ 66680, 66663, 67678, 67643, 66626, 67624, 67624, 67608, 67622, 67624, 67624, 66626, 66626, 67641, 67639, 67624, 67624, 67622, 67606, 71577, 71545, 71530, 71545, 71561, 70561, 71577, 71577, 70578 },
	{ 61053, 61056, 61056, 62059, 62059, 62059, 62059, 63059, 62059, 62059, 61060, 62059, 62059, 62059, 62059, 63059, 62056, 63056, 63055, 63052, 62050, 64052, 62053, 62053, 61053, 61054, 62056, 61054 },
	{ 66218, 66218, 66218, 66219, 66219, 66219, 66219, 66226, 66226, 66219, 66218, 66219, 66220, 66226, 66226, 66226, 66226, 66226, 66219, 66220, 66226, 66226, 66220, 66226, 66220, 66220, 66226, 66219 },
	{ 67149, 67149, 67149, 66145, 66145, 66145, 66145, 66145, 66145, 66145, 66144, 66145, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 66144, 67144 },
};		//testing data

float uMatrix[clustergroup][inst];		//U matrix
float newMatrix[clustergroup][inst];	//update new U matrix
float cod[clustergroup][attr];		//center point
float dist[clustergroup][inst];		//distance for each attribute
int predictOuput[inst];

int m = 2;			//weighting factor
float conv = 0.7;	//criterion for convergence

bool matrix = false;


//random select the initial U
void initialUMatrix()
{
	srand(time(NULL));

	int b = -1;			//used for avoid row have no 1 value
	int c[clustergroup];		//check which row don't have 1 value


	for (int i = 0; i < inst; i++)
	{

		int a = rand() % clustergroup;

		if (i >= clustergroup)		//if all row contain at least 1 value, remaining random place
		{
			uMatrix[a][i] = 1;
		}


		else
		{		
			if (b > 0)		//initial random place for 1 value
			{
				if (b == 0)		//if b has only one value, compare the first value, if yes, random again
				{
					if (c[0] == a)
					{
						i--;
						cout << "a" << i;
						goto end;
					}

					else
					{
						uMatrix[a][i] = 1;
						b++;
						c[b] = a;
					}
				}

				else
				{
					for (int j = 0; j <= b; j++)
					{
						if (c[j] == a)
						{
							i--;
							goto end;
						}
					}

					uMatrix[a][i] = 1;
					b++;
					c[b] = a;
				}
			}


			else
			{
				uMatrix[a][i] = 1;
				b++;
				c[b] = a;
			}
		}
	end:;
	}
}	 //random select the initial U


//display U matrix
void displayMatrix()		
{
	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{
			cout << uMatrix[i][j] << " ";
		}

		cout << endl << endl;
	}

	cout << endl;
}


//find the center of point
void center()
{
	float a[clustergroup];

	for (int i = 0; i < clustergroup; i++)
	{
		a[i] = 0;
	}
	
	//set the value of total distance
	for (int i = 0; i < clustergroup; i++)		//check row
	{

		for (int j = 0; j < inst; j++)			//check column
		{

			for (int k = 0; k < attr; k++)			//calculate cop
			{
				cod[i][k] += pow(uMatrix[i][j],m) * trainData[j][k];
			}

			a[i] += pow(uMatrix[i][j], m);
		}
	}

	//calculate the center point (average of total distance
	for (int i = 0; i < clustergroup; i++)
	{
		for (int k = 0; k < attr; k++)			//calculate cop
		{
			cod[i][k] = cod[i][k] / a[i];
		}
	}

}


// display center of point
void displayCenterPoint()
{
	cout << "Center of point is :" << endl;

	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < attr; j++)
		{
			cout << cod[i][j] << " ";
		}

		cout << endl << endl;
	}
	cout << endl;
}


//find the euclidean distance
void distance()
{
	float  total;

	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{
			dist[i][j] = 0;
		}
	}

	for (int a = 0; a < clustergroup; a++)
	{
		for (int b = 0; b < inst; b++)
		{
			total = 0;

			for (int c = 0; c < attr; c++)
			{
				total += pow((trainData[b][c] - cod[a][c]),2);
			}

			total = sqrt(total);

			dist[a][b] = total;
		}

	}
}


//display the euclidean distance
void displayDistance()
{
	cout << "Euclidean distance is :" << endl;

	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{
			cout << dist[i][j] << " ";
		}

		cout << endl << endl;
	}
	cout << endl;
}


//update new matrix 
void updateMatrix()
{
	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{
			newMatrix[i][j] = 0;
		}
	}

	for (int i = 0; i < inst; i++)
	{
		for (int j = 0; j < clustergroup; j++)
		{
			for (int k = 0; k < clustergroup; k++)
			{
				if (dist[j][i] == 0)
				{
					if (dist[k][i] == 0)
					{
						newMatrix[j][i] += 1;
					}

					else
						newMatrix[j][i] += 0;
				}

				else if (dist[k][i] == 0)
				{
					newMatrix[j][i] = 0;
					goto end;
				}

				else
				{
					newMatrix[j][i] += pow((dist[j][i] / dist[k][i]), 2);
				}
			}
		end:;
		}
	}

	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{

			if (newMatrix[i][j] == 0)
			{ }

			else
			{
				newMatrix[i][j] = 1 / newMatrix[i][j];
			}
		}
	}
}


//display new matrix 
void displayNewMatrix()
{
	cout << "New Matrix is :" << endl;

	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{
			cout << newMatrix[i][j] << " ";
		}

		cout << endl << endl;
	}
	cout << endl;
}


//determine whether achieved convergence
bool convergence()
{
	bool repeat = false;

	for (int i = 0; i < clustergroup; i++)
	{
		for (int j = 0; j < inst; j++)
		{
			if (newMatrix[i][j] - uMatrix[i][j] > conv || uMatrix[i][j] - newMatrix[i][j] > conv)
			{
				repeat =  true;
			}
		}
	}

	if (repeat)
	{
		for (int i = 0; i < clustergroup; i++)
		{
			for (int j = 0; j < inst; j++)
			{
				uMatrix[i][j] = newMatrix[i][j];
			}
		}
	}

	return repeat;
}


void main()
{
	bool a = true;
	int ite = 0;	//show the iteration number

	initialUMatrix();
	displayMatrix();

	center();
	displayCenterPoint();

	distance();
	displayDistance();

	updateMatrix();
	displayNewMatrix();

	while (a)
	{
		ite++;
		cout << endl << "Iteration : " << ite << endl;
		center();
		distance();
		updateMatrix();
		a = convergence();

	}

	cout << "The optimun fuzzy partition is :" << endl;
	displayNewMatrix();
	center();
	distance();

	float checking[attr];			// check distance
	float near[attr];		//check which more nearest
	int loc = 0;		//state location

	for (int h = 0; h < inst; h++)
	{
		int lo = 0;

		for (int i = 0; i < clustergroup; i++)
		{
			int ch = 0;			//check how many match

			for (int j = 0; j < attr; j++)
			{
				if (i == 0)
				{
					near[j] = fabsf(testData[h][j] - cod[i][j]);			//set default near point
					loc = i;

				}
				
				else
				checking[j] = testData[h][j] - cod[i][j];
			}

			if (i>0)
			{
				for (int k = 0; k < attr; k++)
				{
					if (near[k] > checking[k])			// check which attribute is nearer
					{
						ch++;
					}
				}

				if (ch > attr / 2)		//check how many attribute it more nearest than previously
				{
					for (int k = 0; k < attr; k++)
					{
						near[k] = checking[k];
					}
					loc = i;
				}
			}

		}
		predictOuput[h] = loc;
	}


	for (int i = 0; i < inst; i++)
	{
		cout << predictOuput[i] << "  ";
	}


}