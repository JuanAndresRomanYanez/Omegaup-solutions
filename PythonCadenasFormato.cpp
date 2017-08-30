#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a,aux,auxi,auxo,auli;
    getline(cin,a);
    aux=auxi=auli=auxo=a;
    bool ban=true;
    for(int i=0;i<(int)aux.size();++i){
        if(isalpha(aux[i])){
                if(ban==true)ban=false,auli[i]=toupper(auli[i]);
                else auli[i]=tolower(auli[i]);
                aux[i]=tolower(aux[i]);
                auxi[i]=toupper(auxi[i]);
                if(isupper(auxo[i])) auxo[i]=tolower(auxo[i]);
                else auxo[i]=toupper(auxo[i]);
        }
        else ban=true;
    }
    cout<<aux<<"\n"<<auxi<<"\n"<<auxi[0]<<aux.substr(1,aux.size()-1)<<"\n"<<auli<<"\n"<<auxo<<"\n";
    return 0;
}
