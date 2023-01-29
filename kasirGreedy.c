// Implementasi program kasir mehitung banyaknya kembalian menggunakan algoritma Greedy
#include <stdio.h> //import standard input/output di default c library

int get_uang(void);
int hitung_seratusrb(int uang);
int hitung_limapuluhrb(int uang);
int hitung_duapuluhrb(int uang);
int hitung_sepuluhrb(int uang);
int hitung_limarb(int uang);
int hitung_saturb(int uang);

// a main function
int main(void)
{
    // Tanya berapa ribu kembalian yang harus dibayar
    int uang = get_uang();                                    //uang ->fungsi get_uang

    // Hitung berapa banyak seratusrb yang harus diberikan ke pelanggan
    int seratusrb = hitung_seratusrb(uang);
    uang = uang - seratusrb * 100000;

    // Hitung berapa banyak limapuluhrb yang harus diberikan ke pelanggan
    int limapuluhrb = hitung_limapuluhrb(uang);
    uang = uang - limapuluhrb * 50000;

    // Hitung berapa banyak duapuluhrb yang harus diberikan ke pelanggan
    int duapuluhrb = hitung_duapuluhrb(uang);
    uang = uang - duapuluhrb * 20000;

    // Hitung berapa banyak sepuluhrb yang harus diberikan ke pelanggan
    int sepuluhrb = hitung_sepuluhrb(uang);
    uang = uang - sepuluhrb * 10000;

    // Hitung berapa banyak limarb yang harus diberikan ke pelanggan
    int limarb = hitung_limarb(uang);
    uang = uang - limarb * 5000;

    // Hitung berapa banyak saturb yang harus diberikan ke pelanggan
    int saturb = hitung_saturb(uang);
    uang = uang - saturb * 1000;

    // Jumlahkan banyaknya kembalian
    int total = seratusrb + limapuluhrb + duapuluhrb + sepuluhrb + limarb +saturb;

    // Tampilkan detail nominal beserta banyaknya uang
    printf("Banyaknya total kembalian : %d\n", total);
    printf("Yang mana masing-masing sbb,\n100rb : %d, 50rb : %d, 20rb : %d, 10rb : %d, 5rb : %d, 1rb : %d\n",seratusrb,limapuluhrb,duapuluhrb,sepuluhrb,limarb,saturb);

}

// Fungsi dengan berbagai parameter dan berbagai return value
int get_uang(void)
{
    int uang;                                  
    do
    {
        printf("*Asumsikan tidak menggunakan receh\n");
        printf("Uang yang harus dikembalikan (ribu): ");
        scanf("%d",&uang);      
    }
    while (uang < 0);                          
    return uang;                               
}

int hitung_seratusrb(int uang)
{
    int count = 0;                           
    while (uang >= 100000)                        
    {
        uang = uang - 100000;                     
        count = count + 1;                
    }                                           
    return count;                           
}

int hitung_limapuluhrb(int uang)
{
    int count = 0;                             
    while (uang >= 50000)                         
    {
        uang = uang - 50000;
        count = count + 1;
    }
    return count;
}

int hitung_duapuluhrb(int uang)
{
    int count = 0;                           
    while (uang >= 20000)                         
        {
        uang = uang - 20000;
        count = count + 1;
    }
    return count;
}

int hitung_sepuluhrb(int uang)
{
    int count = 0;                            
    while (uang >= 10000)                          
    {
        uang = uang - 10000;
        count = count + 1;
    }
    return count;
}

int hitung_limarb(int uang)
{
    int count = 0;                            
    while (uang >= 5000)                         
    {
        uang = uang - 5000;
        count = count + 1;
    }
    return count;
}

int hitung_saturb(int uang)
{
    int count = 0;                            
    while (uang >= 1000)                         
    {
        uang = uang - 1000;
        count = count + 1;
    }
    return count;
}