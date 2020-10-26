#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include<ctime>
using namespace std;

int main()
{
    ifstream fin;
    char str[20],a[20][20],pas[20];
    int m,i,j;
    srand(time(NULL));

    for( i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {
            a[i][j]='0';
        }
    }
    fin.open("simple.txt");

    for(i=0; !fin.eof(); i++)
    {
        fin>>str;
        m=strlen(str);
        for(j=0; j<m; j++)
        {
            a[i][j]=str[j];
        }
    }
    fin.close();

  // int z=i-1;
    //    for(int i=0; i<z; i++)
   // {
//     for(int j=0; j<20; j++)
    //    {
     //   if(a[i][j]=='0')
       //     break;
       // else
     //       cout<<a[i][j];
     //   }
     //   cout<<endl;
  //  }

int x=rand()%10;

j=0;
while(a[x][j]!='0')
{
    str[j]=a[x][j];
    j++;
}
int w=strlen(str);
//cout<<w<<endl;
int guss;
cout<<"welcome to hangman game"<<endl<<endl<<endl<<endl;

cout<<"you have to fill up the desh sign"<<endl;
cout<<"        ";
for(i=0; i<w; i++)
{
    if(i==0 || i==w-1)
    {
        cout<<str[i];
    }
    else
        cout<<"-";
}
cout<<endl<<"enter the desh character"<<endl;
char ch,mk[20];
for(i=0; i<w; i++)
{
    if(i==0 || i==w-1)
    {
        mk[i]=str[i];
    }
    else
        mk[i]='-';
}

for(i=1; i<w-1; i++)
{
    cin>>ch;
    if(ch==str[i])
    {
        cout<<"correct letter"<<endl;
        mk[i]=ch;
        for(j=0; j<w; j++)
        {
            cout<<mk[j];
        }
        cout<<endl;
    }
else
    {
        cout<<"wrong letter try again"<<endl;
        i--;
    }
}
cout<<"you can completely gueess the word"<<endl;



    return 0;
}

