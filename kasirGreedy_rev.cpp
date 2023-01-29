#include <iostream>
using namespace std;

int get_nUang(void)                                          
{
    int nUang;                                  
    do                                                      // O(n)
    {
        cout<<"*Asumsikan tidak menggunakan koin receh\n"<<endl;
        cout<<"Uang yang harus dikembalikan (ribu): "<<endl;
        cin >> nUang;      
    }
    while (nUang < 0);                          
    return nUang;                               
}

int hitung_seratusrb(int nUang)                              // O(n)
{
    int count = 0;                           
    while (nUang >= 100000)                        
    {
        nUang = nUang - 100000;                     
        count++;                                  // atau ditulis count = count=1 atau count += 1
    }                                           
    return count;                           
}

int hitung_limapuluhrb(int nUang)                           // O (n)
{
    int count = 0;                             
    while (nUang >= 50000)                         
    {
        nUang = nUang - 50000;
        count++;
    }
    return count;
}

int hitung_duapuluhrb(int nUang)                            // O (n)
{
    int count = 0;                           
    while (nUang >= 20000)                         
        {
        nUang = nUang - 20000;
        count++;
    }
    return count;
}

int hitung_sepuluhrb(int nUang)                             // O (n)
{
    int count = 0;                            
    while (nUang >= 10000)                          
    {
        nUang = nUang - 10000;
        count++;
    }
    return count;
}

int hitung_limarb(int nUang)                                // O (n)
{
    int count = 0;                            
    while (nUang >= 5000)                         
    {
        nUang = nUang - 5000;
        count++;
    }
    return count;
}

int hitung_duarb(int nUang)                                // O (n)
{
    int count = 0;                            
    while (nUang >= 2000)                         
    {
        nUang = nUang - 2000;
        count++;
    }
    return count;
}


int hitung_seribu(int nUang)                                // O (n)
{
    int count = 0;                            
    while (nUang >= 1000)                         
    {
        nUang = nUang - 1000;
        count++;
    }
    return count;
}

int main(void)
{
    int nUang = get_nUang();                                    
    int nSeratusRibu = hitung_seratusrb(nUang);
    nUang = nUang - nSeratusRibu * 100000; 
    int nLimaPuluhRibu = hitung_limapuluhrb(nUang);
    nUang = nUang - nLimaPuluhRibu * 50000;
    int nDuaPuluhRibu = hitung_duapuluhrb(nUang);
    nUang = nUang - nDuaPuluhRibu * 20000;
    int nSepuluhRibu = hitung_sepuluhrb(nUang);
    nUang = nUang - nSepuluhRibu * 10000;
    int nLimaRibu = hitung_limarb(nUang);
    nUang = nUang - nLimaRibu * 5000;
    int nDuaRibu = hitung_duarb(nUang);
    nUang = nUang - nDuaRibu * 2000;
    int nSeribu = hitung_seribu(nUang);
    nUang = nUang - nSeribu * 1000;
    int total = nSeratusRibu + nLimaPuluhRibu + nDuaPuluhRibu + nSepuluhRibu + nLimaRibu + nSeribu;
    cout << "Banyaknya total kembalian : "<< total <<endl;
    cout << "Dengan detail sbb,\n100rb : "<<nSeratusRibu<<"| 50rb : "<<nLimaPuluhRibu<<"| 20rb : "<<nDuaPuluhRibu<<" | 10rb : "<<nSepuluhRibu<<"| 5rb : "<<nLimaRibu<<"| 2rb : "<<nDuaRibu<<"| 1rb : "<<nSeribu<<endl;
}

