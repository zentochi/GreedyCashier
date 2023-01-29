// Implementasi program kasir mehitung banyaknya kembalian menggunakan algoritma Greedy
// Kompleksitas waktu pada main function = O(1) [Operasi dasar seperti penjumlahan,pengurangan, dll]
// kmpleksitas waktu pada beberapa function dengan looping = O(n) [Operasi looping]
// Total Kompleksitas waktu = O(1.n) = O(n) [Linear]
#include <stdio.h> //import standard input/output di default c library

int get_nUang(void);
int hitung_seratusrb(int nUang);
int hitung_limapuluhrb(int nUang);
int hitung_duapuluhrb(int nUang);
int hitung_sepuluhrb(int nUang);
int hitung_limarb(int nUang);
int hitung_duarb(int nUang);
int hitung_seribu(int nUang);

//fungsi main
int main(void)
{
    // Tanya berapa ribu kembalian yang harus dibayar
    int nUang = get_nUang();                                    

    // Hitung berapa banyak seratusrb yang harus diberikan ke pelanggan
    int nSeratusRibu = hitung_seratusrb(nUang);
    nUang = nUang - nSeratusRibu * 100000;               // basic operation memiliki O(1) [konstan]

    // Hitung berapa banyak limapuluhrb yang harus diberikan ke pelanggan
    int nLimaPuluhRibu = hitung_limapuluhrb(nUang);
    nUang = nUang - nLimaPuluhRibu * 50000;

    // Hitung berapa banyak duapuluhrb yang harus diberikan ke pelanggan
    int nDuaPuluhRibu = hitung_duapuluhrb(nUang);
    nUang = nUang - nDuaPuluhRibu * 20000;

    // Hitung berapa banyak sepuluhrb yang harus diberikan ke pelanggan
    int nSepuluhRibu = hitung_sepuluhrb(nUang);
    nUang = nUang - nSepuluhRibu * 10000;

    // Hitung berapa banyak limarb yang harus diberikan ke pelanggan
    int nLimaRibu = hitung_limarb(nUang);
    nUang = nUang - nLimaRibu * 5000;

    // Hitung berapa banyak duaribu yang harus diberikan ke pelanggan
    int nDuaRibu = hitung_duarb(nUang);
    nUang = nUang - nDuaRibu * 2000;

  // Hitung berapa banyak saturb yang harus diberikan ke pelanggan
    int nSeribu = hitung_seribu(nUang);
    nUang = nUang - nSeribu * 1000;

    // Jumlahkan banyaknya kembalian
    int total = nSeratusRibu + nLimaPuluhRibu + nDuaPuluhRibu + nSepuluhRibu + nLimaRibu + nSeribu;

    // Tampilkan detail nominal beserta banyaknya nUang
    printf("Banyaknya total kembalian : %d\n", total);
    printf("Dengan detail sbb,\n100rb : %d | 50rb : %d | 20rb : %d | 10rb : %d | 5rb : %d | 2rb : %d | 1rb : %d\n",
    nSeratusRibu,nLimaPuluhRibu,nDuaPuluhRibu,nSepuluhRibu,nLimaRibu,nDuaRibu,nSeribu);
}

// Fungsi dengan berbagai argumen dan berbagai return value
int get_nUang(void)                                          
{
    int nUang;                                  
    do                                                      // O(n)
    {
        printf("*Asumsikan tidak menggunakan koin receh\n");
        printf("Uang yang harus dikembalikan (ribu): ");
        scanf("%d",&nUang);      
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
