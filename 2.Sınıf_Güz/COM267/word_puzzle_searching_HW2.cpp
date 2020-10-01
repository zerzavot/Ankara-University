#include<iostream>
using namespace std;

int main()
{

	char word[15];
	char copy[15][15]={'\0'};
//OOO YEAH
char array[15][15]={
        'G','S','L','N','F','R','N','P','R','E','N','D','P','O','R',
        'N','A','N','F','D','K','U','O','L','M','K','I','A','C','N',
        'I','F','V','A','C','S','F','P','T','A','A','S','R','O','H',
        'L','E','P','I','I','S','I','N','R','S','T','N','T','A','A',
        'I','S','R','L','I','R','L','N','M','I','Y','I','D','Y','D',
        'A','B','T','L','A','I','D','G','S','O','S','R','T','E','R',
        'W','U','E','N','G','T','N','A','F','I','S','I','D','G','R',
        'G','N','A','H','E','I','N','S','H','S','V','S','M','O','O',
        'C','H','T','O','N','V','I','E','C','A','P','S','S','T','B',
        'L','O','A','I','U','B','R','A','C','K','E','T','E','O','R',
        'W','I','A','D','E','T','N','U','O','M','R','R','L','T','O',
        'R','T','G','E','R','M','S','E','U','E','I','E','I','H','W',
        'E','F','S','H','A','D','R','I','E','F','E','P','T','E','N',
        'A','S','W','I','T','C','H','T','D','P','L','A','Q','U','E',
        'D','N','E','R','G','S','H','E','L','E','S','P','A','C','N'
    };
    
//////////////////////////////SILECEM BURAYI
/*
for (int i = 0; i < 15; i++)
  {
	  for (int j = 0; j < 15; j++)
	  {
		  cout<<array[i][j]<<" ";
	  }
	  cout<<endl;
  }
*/
  cout<<"Enter your word:"<<endl;
  cin>>word;
  int Length =0;
  while (word[Length]!='\0')
  {
	//  cout<<word[Length]<<endl;
	  Length++;
  }	
  for (int i = 0; i < 15; i++)
  {
	  for (int j = 0; j < 15; j++)
	  {
		  if(array[i][j]==word[0]){

			  // Search From Left To Right
			  bool match =false;
			 int k=j;
			  for (int n = 0; n < Length; n++)
			  {
				  if(word[n]==array[i][n+k]){
					  match=true;
				  }else{
					  match=false;
					  break;
				  }
			  }
			  if (match)
			  {
				  for (int m = j; m < j+Length; m++)
				  {
					  copy[i][m]=array[i][m];
				  }
			  }

			  // Top To Bottom
			  match =false;
			 k=i;
			  for (int n = 0; n < Length; n++)
			  {
				  if(word[n]==array[n+k][j]){
					  match=true;
				  }else{
					  match=false;
					  break;
				  }
			  }
			  if (match)
			  {
				  for (int m = i; m < i+Length; m++)
				  {
					  copy[m][j]=array[m][j];
				  }
			  }
			  match=false;
		     
		  }

	  }
  }
  for (int i = 0; i < 15; i++)
  {
	  for (int j = 0; j < 15; j++)
	  {
		  if(copy[i][j]){
		     cout<<copy[i][j];
		  }else
		  {
			 cout<<"*"; 
		  }
	  }
	  cout<<endl;
  }
  
return 0;
}
