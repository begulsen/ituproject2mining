#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <vector>


using namespace std;

int main(){
    
    
    
    vector <int> developer_name;
    int i=0;
    
    string developer;
    string developer_kontrol;
    int fileid;
    // DOSYADAN OKUMA ISLEMLERI
    ifstream text_dosya;
    text_dosya.open("deneme.txt");
    text_dosya>>developer;
    text_dosya>>fileid;
    developer_kontrol=developer;
   
    
    vector<vector<int> > v(20,vector<int>());
     v[0].push_back(fileid);
    while (text_dosya.good()) {
        
        text_dosya>>developer;
        text_dosya>>fileid;
        cout<<developer<<" ";
        cout<<fileid<<endl;
        
        if(developer_kontrol==developer){
            v[i].push_back(fileid);
            
        }
        
        else {
            i++;
            v[i].push_back(fileid);
            developer_kontrol=developer;
        }
        
        
    }
  
    i++;
    cout<<i;
    
    
    int k=17;
    int kaynak_size=0;
    int ikincil_size=0;
    int ortak_dosya[19];
    
    for (int isd=0; isd<19; isd++) {
        ortak_dosya[isd]=0;
    }
    
    
     kaynak_size=v[k].size();
    cout<<"Kaynak"<<kaynak_size;
    for (int t=18; t<i; t++) {
        ikincil_size=v[t].size();
        
        for (int z=0; z<kaynak_size; z++) {
            for (int x=0; x<ikincil_size; x++) {
            if (v[k][z]==v[t][x]) {
                
                cout<<"Dosya"<<v[k][z]<<" "<<endl;
                ortak_dosya[t]++;
                cout<<"ORTAK DOSYA SAHİBİ OLAN DOSYA"<<t;
                
                }
            }
        }
        
        
        
        
        
    }
    
    for (int asd=0; asd<20; asd++) {
        cout<<endl<<"Ortak dosya"<<ortak_dosya[asd];
    }
    
    
    


    
    
    
    
    return 0;
}

