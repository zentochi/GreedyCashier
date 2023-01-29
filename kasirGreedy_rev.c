// Implementasi program kasir mehitung banyaknya kembalian menggunakan algoritma Greedy
// Kompleksitas waktu pada main function = O(1) [Operasi dasar seperti penjumlahan,pengurangan, dll]
// kmpleksitas waktu pada beberapa function dengan looping = O(n) [Operasi looping]
// Total Kompleksitas waktu = O(1.n) = O(n) [Linear]
#include <stdio.h> //import standard input/output di default c library

int get_nuang(void);
int hitung_seratusrb(int nuang);
int hitung_limapuluhrb(int nuang);
int hitung_duapuluhrb(int nuang);
int hitung_sepuluhrb(int nuang);
int hitung_limarb(int nuang);
int hitung_saturb(int nuang);

//fungsi main
int main(void)
{
    // Tanya berapa ribu kembalian yang harus dibayar
    int nuang = get_nuang();                                    

    // Hitung berapa banyak seratusrb yang harus diberikan ke pelanggan
    int nseratusrb = hitung_seratusrb(nuang);
    nuang = nuang - nseratusrb * 100000;               // basic operation memiliki O(1) [konstan]

    // Hitung berapa banyak limapuluhrb yang harus diberikan ke pelanggan
    int nlimapuluhrb = hitung_limapuluhrb(nuang);
    nuang = nuang - nlimapuluhrb * 50000;

    // Hitung berapa banyak duapuluhrb yang harus diberikan ke pelanggan
    int nduapuluhrb = hitung_duapuluhrb(nuang);
    nuang = nuang - nduapuluhrb * 20000;

    // Hitung berapa banyak sepuluhrb yang harus diberikan ke pelanggan
    int nsepuluhrb = hitung_sepuluhrb(nuang);
    nuang = nuang - nsepuluhrb * 10000;

    // Hitung berapa banyak limarb yang harus diberikan ke pelanggan
    int nlimarb = hitung_limarb(nuang);
    nuang = nuang - nlimarb * 5000;

    // Hitung berapa banyak saturb yang harus diberikan ke pelanggan
    int nsaturb = hitung_saturb(nuang);
    nuang = nuang - nsaturb * 1000;

    // Jumlahkan banyaknya kembalian
    int total = nseratusrb + nlimapuluhrb + nduapuluhrb + nsepuluhrb + nlimarb + nsaturb;

    // Tampilkan detail nominal beserta banyaknya nuang
    printf("Banyaknya total kembalian : %d\n", total);
    printf("Dengan detail sbb,\n100rb : %d | 50rb : %d | 20rb : %d | 10rb : %d | 5rb : %d | 1rb : %d\n",
    nseratusrb,nlimapuluhrb,nduapuluhrb,nsepuluhrb,nlimarb,nsaturb);
}

// Fungsi dengan berbagai argumen dan berbagai return value
int get_nuang(void)                                          
{
    int nuang;                                  
    do                                                      // O(n)
    {
        printf("*Asumsikan tidak menggunakan koin receh\n");
        printf("Uang yang harus dikembalikan (ribu): ");
        scanf("%d",&nuang);      
    }
    while (nuang < 0);                          
    return nuang;                               
}

int hitung_seratusrb(int nuang)                              // O(n)
{
    int count = 0;                           
    while (nuang >= 100000)                        
    {
        nuang = nuang - 100000;                     
        count++;                                  // atau ditulis count = count=1 atau count += 1
    }                                           
    return count;                           
}

int hitung_limapuluhrb(int nuang)                           // O (n)
{
    int count = 0;                             
    while (nuang >= 50000)                         
    {
        nuang = nuang - 50000;
        count++;
    }
    return count;
}

int hitung_duapuluhrb(int nuang)                            // O (n)
{
    int count = 0;                           
    while (nuang >= 20000)                         
        {
        nuang = nuang - 20000;
        count++;
    }
    return count;
}

int hitung_sepuluhrb(int nuang)                             // O (n)
{
    int count = 0;                            
    while (nuang >= 10000)                          
    {
        nuang = nuang - 10000;
        count++;
    }
    return count;
}

int hitung_limarb(int nuang)                                // O (n)
{
    int count = 0;                            
    while (nuang >= 5000)                         
    {
        nuang = nuang - 5000;
        count++;
    }
    return count;
}

int hitung_saturb(int nuang)                                // O (n)
{
    int count = 0;                            
    while (nuang >= 1000)                         
    {
        nuang = nuang - 1000;
        count++;
    }
    return count;
}