#include <iostream>

using namespace std;

int main()
{
    int i=1,a,p=0,n=0,c=0;
    cout<<"\n\tEste Algoritmo le dira que numero es +,- o = 0\n"<<endl;
   
    for(i>=1;i<=10;i++){
    cout<<"\n\tIngrese un numero\t\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    if(a>0){
    p++;
    }
    if(a<0){
    n++;
    }
    if(a==0){
    c++;
    }
    }
    cout<<"\n\tPositivos\t"<<p<<endl;
    cout<<"\n\tNegativos\t"<<n<<endl;
    cout<<"\n\tIgual a Cero\t"<<c<<endl;
    
    
    
    
    
    
    
    system("pause");
    return 0;
    }
