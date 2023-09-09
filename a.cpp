#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<char> g(9 ) ;
 int i;
 string gya;
 string pan;
  
 int structure ()
 {
   cout<<"           "<<g[0]<<" |    "<<g[1]<<"    |"<<"  " << g[2]<<endl;
    cout<<"          ------------------------   "<<endl;
    cout<<"           "<<g[3]<<" |    "<<g[4]<<"    |"<<"  " << g[5]<<endl;
    cout<<"          ------------------------   "<<endl;
    cout<<"           "<<g[6]<<" |    "<<g[7]<<"    |"<<"  " << g[8]<<endl;
    }
int player1()
 {
    string player1;
    cout<<"Enter the name of first player "<<endl;
    getline(cin,player1);
  
    cout<<endl<<"Welcome "<<player1<<" your symbol is (X)"<<endl<<endl;
 }
 int player2()
 {
    string player2;
    cout<<"Enter the name of Second  player "<<endl;
    getline(cin,player2);
     
    cout<<endl<<"Welcome "<<player2<<" your symbol is (O)"<<endl<<endl;
 } 
int input( )
 {   int p=1;
     int count=0;
              while( p>0)
               {              harh:
               gyanesh1:
                      cout<<"Player 1 enter the poisition  "<<endl;
                        cin>>i;
                        if(g[i]=='O')
                      {
                    cout<<"position is allready fill";
                    cout<<"try another position"<<endl;
                    goto gyanesh1;
                       }
                   
                       g[i]='X';
                       count++;
                       
                          structure();                  
        if((g[0]=='X'&&g[1]=='X'&&g[2]=='X')||(g[0]=='X'&&g[3]=='X'&&g[6]=='X')||(g[0]=='X'&&g[4]=='X'&&g[8]=='X') ||(g[6]=='X'&&g[7]=='X'&&g[8]=='X')|| (g[2]=='X'&&g[5]=='X'&&g[8]=='X') || (g[1]=='X'&&g[4]=='X'&&g[7]=='X')||(g[3]=='X'&&g[4]=='X'&&g[5]=='X')||(g[2]=='X'&&g[4]=='X'&&g[6]=='X'))
        {                
                   
                       structure();
                        cout<< "Player 1"<<"is winner";
                        break;
            }
      
     

          else
          {      ha:
                 gyanesh:
                  cout<<"Player 2"<<"enter the poisition  and symbol"<<endl;
                cin>>i;
                if(g[i]=='X')
                {
                    cout<<"position is allready fill";
                    cout<<"try another position"<<endl;
                    goto gyanesh;
                }
                               g[i]='O';
                                count++;
                if((g[0]=='O'&&g[1]=='O'&&g[2]=='O')||(g[0]=='O'&&g[3]=='O'&&g[6]=='O')||(g[0]=='O'&&g[4]=='O'&&g[8]=='O') ||(g[6]=='O'&&g[7]=='O'&&g[8]=='O')|| (g[2]=='O'&&g[5]=='O'&&g[8]=='O')|| (g[1]=='O'&&g[4]=='O'&&g[7]=='O')||(g[3]=='O'&&g[4]=='O'&&g[5]=='O')||(g[2]=='O'&&g[4]=='O'&&g[6]=='O'))
                 { 
                     
                     structure();
                  cout<<"          "<<"Player 2"<<" is winner";
                  break;
                  }
                    
                  structure();
                               if(count>7)
                                   {
                                cout<<"            "<<"match drow"<<endl;
                                        break;
                                     }
             } 
       }
 }
int main()
 {
   player1();
   player2();
   input();
}