                                        /******7. Rat In a Maze*******/
using namespace std;
#include<bits/stdc++.h>





// is safe function to check if the given coordinates are reachable or not
int isSafe(vector<vector<int>>& maze, vector<vector<int>>& visited, int currRow, int currColumn, int Row, int Column)
{
    return (currRow >=0 && currRow < Row && currColumn >=0 && currColumn < Column && maze[currRow][currColumn]==1 && visited[currRow][currColumn]==0);
}



// helper function to check if the rat can cross the maze or not
int helper(vector<vector<int>>& maze, vector<vector<int>>& visited, int currRow, int currColumn, int Row, int Column)
{
    if( currRow == Row -1 && currColumn == Column-1 && maze[Row-1][Column-1]==1)      /// Base case
    {
        visited[Row-1][Column-1] =1;
        return true;
    }


    // checking if the next block is safe
    if(isSafe(maze, visited, currRow, currColumn, Row, Column))
    {
        visited[currRow][currColumn]=1;                                             // Checking for all four directions
        if(helper(maze,visited, currRow+1,currColumn, Row, Column))
            return true;
        if(helper(maze,visited,currRow, currColumn+1, Row, Column))
            return true;
        if(helper(maze, visited,currRow-1,currColumn, Row, Column))
            return true;
        if(helper(maze, visited,currRow,currColumn-1, Row, Column))
            return true;

        visited[currRow][currColumn]=0;                                      // backtracking step
        return false;
    }
    return false;
}



// function to check if the rat can cross the maze
int ratInAMaze(vector<vector<int>>& maze)
{
    int Row = maze.size();
    int Column = maze[0].size();

    vector<vector<int>> visited(Row, vector<int>(Column,0));

    int currRow =0, currColumn=0;

    if(helper(maze, visited, currRow, currColumn, Row, Column))
        return true;
    else
        return false;
}


// Driver Code
int main()
{
    vector<vector<int>> maze ={{1, 1, 1, 1},
                                {0, 1, 1, 1},
                                {0, 0, 0, 1},
                                {0, 1, 1, 1}};

    cout<<ratInAMaze(maze);
}


                                                        /*****  @Ankit Shukla ****/

