#include <iostream>

using namespace std;
 
int main()
{ 
    double nota1,nota2,nota3,notaf;
    
    cout<<"\n\tEncuentra la Nota Final\n"<<endl;
    
    cout<<"\n\tIngrese Nota 1 (30%)\n"<<endl;
    cout<<"\t-->\t";
    cin>>nota1;
    
    if(nota1>5)
    {
    cout<<"\n\tNota Incorrecta\n"<<endl;
    }
    
    if(nota1<=5)
    {
        cout<<"\n\tIngrese Nota 2 (30%)\n"<<endl;
        cout<<"\t-->\t";
        cin>>nota2;
        
        if(nota2>5)
        {
        cout<<"\n\tNota Incorrecta\n"<<endl;
        }
        if(nota2<=5)
        {
            cout<<"\n\tIngrese Nota 3 (40%)\n"<<endl;
            cout<<"\t-->\t";
            cin>>nota3;
            if(nota3>5)
            {
            cout<<"\n\tNota Incorrecta\n"<<endl;
            }
            if(nota3<=5)
            {
                notaf=(nota1*0.3)+(nota2*0.3)+(nota3*0.4);
                
                cout<<"\n\tNota Final\t"<<notaf<<endl;
                
                if(notaf>=3)
                {
                cout<<"\n\tAprobaste\n"<<endl;
                }
                else
                cout<<"\n\tReprobaste\n"<<endl;   
                        
            }
        }
    }
    
    system("pause");
    return 0;
    
    
    
}
