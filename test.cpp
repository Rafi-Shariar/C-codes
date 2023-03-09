#include<bits/stdc++.h>
using namespace std;

int main(){

double a,b,c;
cin>>a>>b>>c;

double arr[3];
arr[0]=a;
arr[1]=b;
arr[2]=c;

double temp;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if (arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    
}

a=arr[0]; b=arr[1]; c=arr[2];

if (a>=(b+c))
{
    cout<<"NAO FORMA TRIANGULO"<<endl;
}
if ((a*a)=(b*b + c*c))
{
    cout<<"TRIANGULO RETANGULO"<<endl;
}
if ((a*a)>(b*b)+(c*c))
{
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
}
if ((a*a)<(b*b)+(c*c))
{
    cout<<"TRIANGULO ACUTANGULO"<<endl;
}
if (a==b && b==c)
{
    cout<<"TRIANGULO EQUILATERO"<<endl;
}
if ((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
{
    cout<<"TRIANGULO ISOSCELES"<<endl;
}








    

    
    return 0;
}