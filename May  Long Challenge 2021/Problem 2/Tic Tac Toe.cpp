//Priyadarshan Ghosh
#include<bits/stdc++.h>
using namespace std;

int w[8][3] = {{0, 1, 2}, 
               {3, 4, 5}, 
               {6, 7, 8}, 
               {0, 3, 6},
               {1, 4, 7}, 
               {2, 5, 8}, 
               {0, 4, 8},
               {2, 4, 6}};

bool win(char c[9], char p)
{
    for(int i=0;i<8;i++)
    {
        if(c[w[i][0]]==p && c[w[i][1]]==p && c[w[i][2]]==p)
        {
            return true;
        }
    }
    return false;
}

bool isValid(char c[9])
{
    int X_C = 0, O_C = 0;

    for(int i=0;i<9;i++)
    {
        if(c[i]=='X')
        {
            X_C+=1;
        }
        if(c[i]=='O')
        {
            O_C+=1;
        }
    }

    if(X_C==O_C || (X_C==O_C+1))
    {
        if(win(c,'O'))
        {
            if(win(c,'X'))
            {
                return false;
            }

            return (X_C==O_C);
        }

        if(win(c,'X') && X_C!=O_C+1)
        {
            return false;
        }

        return true;
    }
    return false;

}

bool draw(char c[9])
{
    for(int i=0;i<9;i++)
    {
        if(c[i]=='_')
        {
            return false;
        }

    }

    return true;
}

int check(char c[9])
{
    if(isValid(c))
    {
       if(win(c,'X') || win(c,'O') || draw(c))
       {
           return 1;
       }
       return 2;
    }
    return 3;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c[9];
        for(int i=0;i<9;i++)
        {
             cin>>c[i];
        }

        cout<<check(c)<<endl;
    }
    return 0;
} 
