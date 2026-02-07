/*
matrix mulplication  : 


A  (2,3)         B (3,2) 
1 2 3           7, 8
4 5 6           9 ,10 
                11,12

matrix multiplication  :                    2 *2 matrix  

(1*7) + (2*9) + (3*11)   :  58                58 64  
(1*8) + (2*10) + (3 *12) :  64
*/
/*
#include<iostream>
using namespace std;

int  main()
{
    int a[2][3], b[3][2] , c[2][2]={0};
    cout<<"enter the elements of matrix A : "<<endl;

    for(int  i=0; i<2; i++)
    {
        for(int  j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of matrix B : "<<endl;
    for(int  i=0; i<3; i++)
    {
        for(int  j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"matrix multiplication : "<<endl;
 

    for(int i=0; i<2; i++) // i=0  0 < 2   
    {
        for(int j=0; j<2; j++) // j =1   1 <2 
        { 
            for(int  k=0; k<3; k++) // k =0  0 < 3 
            {
                c[i][j] +=a[i][k] * b[k][j]; //  c[0][1] = c[0][1] + a[0][0] * b[0][1] =8
            }
        }
    }
    
    cout<<"result  : "<<endl;
    for(int i =0; i<2; i++)
    {
        for(int  j=0; j<2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
*/ 

// movie  booking  system  :

/*
1. add movie    ==> movie id ,  name , seats , timings 
2. ticket booking  : 
     display  ==> movie id  name   seats  timings 
     price : 
        gold  ==> 400 
        sliver ==>600 
        platinum ==>800 
        qty  for ticket  ==> 5 
        total :  
3. search movie  ==> movie id  name   seats  timings
4. display  ==> all movies display 

example : 
id  name   seats  timings
1   KGF    90     10 am , 10 pm  
*/

#include<iostream>
using namespace std;
#define max 100

int  unique_id(int  id[] , int count ,int mid)
{
    for(int i =0 ; i<count; i++)
    {
        if(id[i] == mid)
        {
            return 0; 
        }
    }
    return 1; 
}
void addmovie(int  id[] ,string name[] , int  seats[] , string  timings[],int &count)
{
    int  mid; 
    cout<<"enter the movie id : ";
    cin>>mid; 
    
    if(!unique_id(id,count,mid))
    {
        cout<<"movie id already exists"<<endl;
        return; 
    }
    id[count] = mid; 
    cout<<"enter the movie name : ";
    cin>>name[count];
    cout<<"enter the movie seats : ";
    cin>>seats[count];
    cout<<"enter the movie timings : ";
    cin>>timings[count];
    count ++;
    cout<<"movie added successfully"<<endl;
}
void  booking_ticket(int id[], string name[], int seats[], string timings[], int count)
{
    int  mid,qty ,choice,price =0 ;
    cout<<"enter the movie id : ";
    cin>>mid;

    for(int  i=0; i<count; i++)
    {
        if(id[i] ==mid)
        {
            cout<<"movie name : "<<name[i]<<endl;
            cout<<"movie seats : "<<seats[i]<<endl;
            cout<<"movie timings : "<<timings[i]<<endl;
            cout<<"TICKET BOOKING PRICE"<<endl;
            cout<<"1.gold - 400 /rs"<<endl;
            cout<<"2.sliver -600 /rs"<<endl;
            cout<<"3.platinum - 800 /rs"<<endl;

            cout<<"enter your choice : ";
            cin>>choice;
            if (choice ==1)
            {
                price=400;
            }
            else if(choice ==2)
            {
                price=600;
            }
            else if(choice ==3)
            {
                price=800;
            }
            else 
            {
                cout<<"invalid choice"<<endl;
                return; 
            }
            cout<<"enter the  qty : "<<endl ; 
            cin>>qty;
            if(qty > seats[i])
            {
                cout<<"invalid qty"<<endl;
                return;
            }
            seats[i] -= qty;
            int  total = price * qty;
            cout<<"MOVIE TICKETS BOOKED"<<endl;
            cout<<"Movie name  : "<<name[i]<<endl;
            cout<<"Movie seats  : "<<seats[i]<<endl;
            cout<<"Movie timings  : "<<timings[i]<<endl;
            if (choice ==1)
            {
                cout<<"Gold :"<<qty<<"total :"<<total<<endl;
            }
            else if(choice ==2)
            {
                cout<<"Sliver :"<<qty<<"total :"<<total<<endl;
            }
            else if(choice ==3)
            {
                cout<<"Platinum :"<<qty<<"total :"<<total<<endl;
            }
        }
        else 
        {
            cout<<"movie not found"<<endl;
        }
    }
}
int main()
{
    int  movieid[max], mseats[max],count =0; 
    string moviename[max], movietimings[max];
    int  choice =0 ; 

    do{
        cout<<"MOVIE BOOKING SYSTEM"<<endl;
        cout<<"1.addmovie"<<endl;
        cout<<"2.booking_ticket"<<endl;
        cout<<"3.searchmovie"<<endl;
        cout<<"4.display"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                addmovie(movieid,moviename,mseats,movietimings,count);
                break;

            case 2: 
                booking_ticket(movieid,moviename,mseats,movietimings,count);
                break;
            default : 
                cout<<"invalid choice"<<endl;
                break;
        }
    }while(choice !=5); 
    return 0 ; 
}