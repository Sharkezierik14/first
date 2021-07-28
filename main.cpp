#include <iostream>


using namespace std;

void isMatch(int[],int &,int &,int &);

int main()
{
    int t[10]={15,2,5,7,9,13,15,21,4,6};
    int db=10;
    // text
    int mini = t[0];
    int maxi = t[0];
    for (int i=0;i<10;i++)
        {
            if (t[i] < mini)
            {
                mini=t[i];
            }
            else if (t[i] > maxi )
            {
                maxi=t[i];
            }
        }
   // cout<<mini<<endl;
   // cout<<maxi<<endl;
    isMatch(t,db,mini,maxi);

}

void isMatch(int t[],int & db, int & mini, int & maxi)
{

    int j=0;
   for (int i = mini; i < maxi; i++)
   {
       for (j=0; j<10;j++)
       {
           if (i==t[j])
           {
               break;
           }
       }
       if (j > 9 )
           {
               cout<<i<<endl;
           }
   }

}
