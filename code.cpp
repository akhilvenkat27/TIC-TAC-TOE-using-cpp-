//author : G.akhil venkat
//created : 29-JAN-2022
#include <bits/stdc++.h>
using namespace std;
int main()
{
     char human_array[9];
     int human_opt,bot_opt,fi=0;
     string bot_array;
    cout<<"                  **welcome to TIC TAC TOE**"<<endl;
    cout<<"\nthe given below is the pattern to play the game"<<endl;
    cout<<"follow the given instructions below"<<endl;
    cout<<"1.Dont choose the same option again once used"<<endl;
    cout<<"2.dont choose the value already choosen by bot"<<endl;
    cout<<"thats it! lets rock "<<endl;
    int a[9]={0,1,2,3,4,5,6,7,8},i,j;
    int c=-1;
    for(i=0;i<9;i++)
    {
        c++;
        if(c%3==0&&c!=0)
        {
            cout<<endl;
            cout<<"---------"<<endl;
         cout<<a[i]<<" |";

        }
        else
        {
              cout<<a[i]<<" |";
        }
    }
    int lower=0,upper=8;
    srand(time(0));
    int count=0;
    while(count<9)
    {
        cout<<"\nenter your choice"<<endl;


        cin>>human_opt;
        human_array[human_opt]='X';
        a[human_opt]=-1;
         cout<<"you selected :"<<human_opt<<endl;
        //checking for win by human
            if(human_array[0]=='X'&&human_array[1]=='X'&&human_array[2]=='X')
            {
                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[0]=='X'&&human_array[4]=='X'&&human_array[8]=='X')
            {
                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[0]=='X'&&human_array[3]=='X'&&human_array[6]=='X')
            {
                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[3]=='X'&&human_array[4]=='X'&&human_array[5]=='X')
            {
                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[6]=='X'&&human_array[7]=='X'&&human_array[8]=='X')
            {
                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[1]=='X'&&human_array[4]=='X'&&human_array[7]=='X')
            {
                 cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[2]=='X'&&human_array[5]=='X'&&human_array[8]=='X')
            {

                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
             if(human_array[2]=='X'&&human_array[4]=='X'&&human_array[6]=='X')
            {
                cout<<"\ngame won by human"<<endl;fi++;
                break;
            }
        bot_opt=(rand()%(upper-lower+1))+lower;
        //checking for bot option repetition
        while(1)
        {
        if(a[bot_opt]==-1||bot_opt==human_opt)
        {
        bot_opt=(rand()%(upper-lower+1))+lower;
        }
        else
        {
        a[bot_opt]=-1;
        break;
        }
        }
        cout<<"bot selected :"<<bot_opt<<endl;
        human_array[bot_opt]='O';
        //displaying current position
        int k=-1;
        for(i=0;i<9;i++)
        {
            k++;
            if(k%3==0&&k!=0)
            {
                cout<<endl;
            cout<<"---------"<<endl;
            if(human_array[i]=='X'||human_array[i]=='O')
            {
              cout<<human_array[i]<<" |";
            }
            else
            {
                cout<<" "<<" |";
            }
            }
            else
            {
             if(human_array[i]=='X'||human_array[i]=='O')
            {
              cout<<human_array[i]<<" |";
            }
            else
            {
                cout<<" "<<" |";
            }
            }
        }
            //checking for win by bot
            if(human_array[0]=='O'&&human_array[1]=='O'&&human_array[2]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[0]=='O'&&human_array[4]=='O'&&human_array[8]=='O')
            {

                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[0]=='O'&&human_array[3]=='O'&&human_array[6]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[3]=='O'&&human_array[4]=='O'&&human_array[5]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[6]=='O'&&human_array[7]=='O'&&human_array[8]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[1]=='O'&&human_array[4]=='O'&&human_array[7]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[2]=='O'&&human_array[5]=='O'&&human_array[8]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
             if(human_array[2]=='O'&&human_array[4]=='O'&&human_array[6]=='O')
            {
                cout<<"\ngame won by bot"<<endl;fi++;
                break;
            }
count++;
    }
if(fi==0)
    cout<<"\ngood play,its an draw"<<endl;
    return 0;
}
