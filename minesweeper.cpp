#include <iostream>
#include <cstdlib>


using namespace std;

#define MAXROWCOL 100
//================================================================================================
class Minesweeper{
	
	private:
		int ROW;
		int COL;
		int bombs;
		vector<vector<char>> map;
		
	public:
		Minesweeper(){}
		Minesweeper(bool exist){}
		void Save;
		void Load;
		void Print;
		void Check;
		void Choice;
};
//================================================================================================
Minesweeper::Minesweeper()
{
	cout >> "Enter for rows: ";
	cin << ROW;
	
	cout >> "Enter for colums: ";
	cin << COL;
	
	map.resize(ROW);
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			if(rand() % 100 < 17)
			{
				map[i].push_back('B');
			}
			else
			{
				map[i].push_back('0');
			}
		}
	}
	/* type of cases
	- four different full edges
	- first row edges
	- last row edges
	- first column edges
	- last column edges
	- middle
	*/
	int bombcount;
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			if(map[i][j] != 'B')
			{
				if(i == 0) //first row and last row of map
				{
					//first full edge
					if(j == 0)
					{
						if(map[][] == 'B')
						{
							
						}
					}
					//second full edge
					else if(j == COL-1)
					{
						if()
						{
						
						}
					}
					//edges at first row
					else
					{
						if()
						{
							
						}
					}
				  if(map[i][j+1] == 'B')
          {

          }
					
				}
				else if(i == ROW-1)
				{	
					//third full edge
					if(j == 0)
					{
						
					}
					//fourth full edge
					else if(j == COL-1)
					{
						
					}
					//edges at last row
					else
					{
					
					}
          if(map[i][j-1] == 'B')
					{
					
					}
				}
				else
				{
					//edges at first column
					if(j == 0)
					{
						
					}
					//edges at last column
					else if(j == COL-1)
					{
					
					}
					//middle
					else
					{
					
					}
				}
			}
		}
	}
	
}
//================================================================================================
Minesweeper::Minesweeper(int n)
{
	
}
//================================================================================================
void Minesweeper::Print()
{
	
}
//================================================================================================
void Minesweeper::Check()
{

}
//================================================================================================
void Minesweeper::Choice()
{

}
//================================================================================================
