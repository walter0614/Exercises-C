#include <iostream>

using namespace std;

int main()

{
    int a,i,b=0,total;
    
    for(i=1;i<=20;i++){
    
    cout<<"\n\tIngrese A\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    
    b=b+a;
    }
    total=b/20;
    cout<<"\n\tB=\t"<<total<<endl;
                       

                      
    
    
    system("pause");
    return 0;    
}
