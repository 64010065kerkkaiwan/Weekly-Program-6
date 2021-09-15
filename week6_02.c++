 #include <iostream>
using namespace std;

double SqrtNumber(double num)
    {
        double lower_bound=0; 
        double upper_bound=num;
        double temp=0;                   

        int n = 50;

        while(n != 0)
        {
            temp=(lower_bound+upper_bound)/2;
            if(temp*temp==num) 
            {
                return temp;
            }
            else if(temp*temp > num)
            {
                upper_bound = temp;
            }
            else
            {
                lower_bound = temp;
            }
        n--;
        }
    return temp;
    }

     int main()
{
     double num;
     cout<<"Enter the number\n";
     cin>>num;

     
    if (num >= 0)
    {
        cout<<"Square roots are: "<<SqrtNumber(num) <<" and -"<<SqrtNumber(num);
    }
    else if(num < 0)
     {
        cout<<"Error";
     }
     return 0;
} 
