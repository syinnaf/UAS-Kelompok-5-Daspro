#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

#define MERCH_COUNT 20

unsigned int pilihanMakanan[5] = {1, 2, 3, 4, 5};
    char* namaMakanan[5] = {
        "Japanese Curry",
        "Fried Chicken",
        "Fried Rice",
        "Kimbab",
        "Dimsum"
    };

    unsigned int pilihanKari[3] = {1, 2, 3};
    char* namaKari[3] = {
        "Original",
        "Mild",
        "Spicy"
    };
    //harga 
    float hargaKari[3] = {30000, 30000, 35555};

    unsigned int pilihanAyam[5] = {1, 2, 3, 4, 5};
    char* namaAyam[5] = {
        "Ground Zero",
        "Honey Galarxy",
        "Gangjeong",
        "Neptune",
        "Moon Original"
    };
    //harga
    float hargaAyam[5] = {25000, 30000, 15000, 20000, 25000};

    unsigned int pilihanNasgor[6] = {1, 2, 3, 4, 5, 6};
    char* namaNasgor[6] = {
        "Smoked Chicken Fried Rice",
        "Italy Fried Rice",
        "Green Chili Anchovies Fried Rice",
        "Green Chili Beef Fried Rice",
        "Special Fried Rice",
        "Goat beef Fried Rice"
    };
    //harga
    float hargaNasgor[6] = {25000, 40000, 23000, 23000, 20000, 45000};

    unsigned int pilihanKimbab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char* namaKimbab[9] = {
        "Tuna Kimbab",
        "Original Kimbab",
        "Kimchi Kimbab",
        "Veggie Kimbab",
        "Fried Kimbab",
        "Bulgogi Kimbab",
        "Ebi Kimbab",
        "Cheese Kimbab",
        "Dokgalbi Kimbab"
    };
    float hargaKimbab[9] = {30000, 25000, 28000, 23000, 32000, 40000, 38000, 27000, 42000};
    
    unsigned int pilihanDimsum[6] = {1, 2, 3, 4, 5, 6};
    char* namaDimsum[6] = {
        "Quail Eggs Dimsum",
        "Seaweed Dimsum",
        "Mozarella Cheese Dimsum",
        "Mentai Dimsum",
        "Seafood Dimsum",
        "Chicken Dimsum"
    };
    float hargaDimsum[6] = {15000, 12000, 18000, 17000, 20000, 13000};

unsigned int pilihanMinuman[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char* namaMinuman[8] = {
        "Caramel Machiato",
        "Americano",
        "Soda Gembira",
        "Matcha Latte",
        "Jasmine Tea",
        "Sparkling Lemonade",
        "Chamomile Honey Tea",
        "Mineral Water"
    };
float hargaMinuman[8] = {25000, 20000, 15000, 22000, 12000, 18000, 20000, 5000};

unsigned int pilihanPencuciMulut[2] = {1, 2};
    char* namaPencuciMulut[2] = {
        "Fruit Salad",
        "Desserts"
    };
    
    unsigned int pilihanSalad[5] = {1, 2, 3, 4, 5};
    char* namaSalad[5] = {
        "Restaurant Recommendation",
        "Tropical Paradise Salad",
        "Berry Bliss Fruit Salad",
        "Summer Garden Fruit Salad",
        "Yogurt Dream Fruit Salad"
    };
    
    float hargaSalad[5] = {55000, 40000, 45000, 42000, 38000};
    
    unsigned int pilihanDessert[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char* namaDessert[8] = {
        "Classic Cheesecake",
        "Red Velvet Cake Slice",
        "Strawberry Shortcake Parfait",
        "Macaron",
        "Tiramisu Cake",
        "Chocolate Pudding",
        "Molten Lava Cake",
        "Lemon Meriungue Tart"
    };
    float hargaDessert[8] = {35000, 40000, 45000, 10000, 38000, 20000, 50000, 30000};

const char *namaMerch[MERCH_COUNT] = {
    "Levi Ackerman",
    "Gojo Satoru",
    "Geto Suguru",
    "Chuuya Nakahara",
    "Osamu Dazai",
    "Morisawa Chiaki",
    "Akehoshi Subaru",
    "Monkey D. Luffy",
    "Roronoa Zoro",
    "Eren Jaeger",
    "Zero Two",
    "Rem",
    "Megumin",
    "Rias Gremory",
    "Mikasa Ackerman",
    "Nezuko Kamado",
    "Miku Nakano",
    "Maki Zenin",
    "Kurumi Tokisaki",
    "Yor Forger"        
};

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char namaBarang[50];
    float hargaBarang;
} Pesanan;

Pesanan daftarPesanan[100];
int jumlahPesanan = 0;

int isBeforeOrEqual(Date d1, Date d2) {
    if (d1.year < d2.year) return 1;
    if (d1.year > d2.year) return 0;
    if (d1.month < d2.month) return 1;
    if (d1.month > d2.month) return 0;
    if (d1.day <= d2.day) return 1;
    return 0;
}


void selamat_datang() {
    printf("\n===================================================================\n");
    printf("Selamat datang ke Cafe kami!\n");
    printf("===================================================================\n\n");
    printf("Info terkini:\n");
    printf("- Event : Dapatkan Merch Anime dengan Minimum Belanja Rp 100.000.\n");
    printf("- Diskon 7.5%% untuk Pembayaran melalui Bank ABC.\n");
    printf("- Promo Berlaku dari 1 Desember 2024 hingga 31 Desember 2024!\n\n");
    printf("===================================================================\n\n");
}

void PesananSementara() {
    printf("\n===== PESANAN SEMENTARA =====\n");
    if (jumlahPesanan == 0) {
        printf("Belum ada pesanan.\n");
    } else {
        printf("Daftar Pesanan:\n");
        for (int i = 0; i < jumlahPesanan; i++) {
            printf("%d. %s - Rp %.2f\n", i + 1, daftarPesanan[i].namaBarang, daftarPesanan[i].hargaBarang);
        }
    }
    printf("============================\n");
}

char metodePembayaranStr[20];

void berikan_merchandise(float totalHarga) {
    if (totalHarga <= 100000) {
        printf("Maaf, Anda tidak memenuhi syarat untuk mendapatkan merchandise.\n");
        return;  // Keluar dari fungsi jika tidak memenuhi syarat
    }

    srand((unsigned int)time(NULL));

    printf("Selamat! Anda mendapatkan merchandise gratis.\n");

    char lastDisplayed[50] = "";  // Buffer untuk nama terakhir

        // Menampilkan 10 merchandise acak
        for (int i = 0; i < 10; i++) {
        int indexAcak;
        do {
            indexAcak = rand() % 20;
        } while (strcmp(lastDisplayed, namaMerch[indexAcak]) == 0);  // Pastikan tidak sama dengan yang terakhir

        strcpy(lastDisplayed, namaMerch[indexAcak]);

        // Cetak nama merchandise acak sementara di baris yang sama
        printf("\r%-30s", namaMerch[indexAcak]);
        fflush(stdout);
        Sleep(200);  // Jeda waktu untuk efek visual
    }

    printf("\r%-30s", " ");  // Hapus tampilan terakhir (rolling) dengan spasi
    fflush(stdout);

    // Hadiah final
    int indexMerch;
    do {
        indexMerch = rand() % 20;
    } while (strcmp(lastDisplayed, namaMerch[indexMerch]) == 0);
    printf("\n   !!! %s !!!   \n\n", namaMerch[indexMerch]); 

    // Tambahkan jeda sebelum menampilkan struk
    Sleep(1000);  // Jeda 1 detik sebelum menampilkan struk
    
} 

int main() {
    int pilihanKariInput, pilihanAyamInput, pilihanNasgorInput, pilihanKimbabInput, pilihanDimsumInput;
    int pilihanMakananInput, pilihanMenuInput, pilihanMinumanInput, pilihanPencuciMulutInput, pilihanSaladInput, pilihanDessertInput;
    int metodePembayaran;
    float totalHarga = 0;
    float totalBayar;
    char lanjutPesan = ('Y','N');
    time_t now;
    struct tm promoStart = {0};
    struct tm promoEnd = {0};
    char input;

    selamat_datang();
    
    do {
        // Validasi menu cmn 1-4
        do {
            printf("Apa yang anda ingin pesan?\n");
            printf("1. Makanan\n2. Minuman\n3. Pencuci Mulut\n4. Keluar\n");
            printf("Pilihan Menu (1-4): ");
            if (scanf("%d", &pilihanMenuInput) != 1) {
                printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 4.\n\n");
                while (getchar() != '\n'); // Bersihkan buffer
                continue;
            }
            if (pilihanMenuInput < 1 || pilihanMenuInput > 4) {
                printf("Mohon hanya masukkan angka antara 1 hingga 4.\n\n");
                
            }
        } while (pilihanMenuInput < 1 || pilihanMenuInput > 4);
          
        if (pilihanMenuInput == 1) {
            printf("\nHalo, berikut adalah menu makanan yang kami miliki\n");
            for (int i = 0; i < 5; i++) {
                printf("%d. %s\n", pilihanMakanan[i], namaMakanan[i]);
            }

            printf("Pilih menu makanan (1-5): ");

            //validasi input
            while (scanf("%d", &pilihanMakananInput) != 1 || pilihanMakananInput < 1 || pilihanMakananInput > 5) {
                printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 5: ");
                while (getchar() != '\n'); //bersihin buffer yah
            }

            switch (pilihanMakananInput) {
                case 1: // Japanese Curry
                    if (jumlahPesanan >= 100) {
                        printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                        break;
                    }

                    printf("\nAnda memilih %s. Pilih rasa:\n", namaMakanan[0]);
                    for (int i = 0; i < 3; i++) {
                        printf("%d. %s - Rp %.2f\n", pilihanKari[i], namaKari[i], hargaKari[i]);
                    } 
                    
                    while (1) {
                        printf("Pilih rasa kari (1-3): ");
                        if (scanf("%d", &pilihanKariInput) == 1) {
                            // Gunakan switch untuk memproses pilihan kari
                            switch (pilihanKariInput) {
                                case 1:
                                case 2:
                                case 3:
                                    printf("Anda memilih %s %s dengan harga Rp %.2f\n",
                                    namaMakanan[0], namaKari[pilihanKariInput - 1], hargaKari[pilihanKariInput - 1]);
                                    totalHarga += hargaKari[pilihanKariInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s",
                                    namaMakanan[0], namaKari[pilihanKariInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaKari[pilihanKariInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari loop
                                    default:
                                        printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 3.\n");
                                        continue; // Kembali meminta input
                            }
                            break; // Keluar dari loop jika input valid
                        } else {
                            printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 3.\n");
                            while (getchar() != '\n'); // Bersihkan buffer
                        }
                    }
                    break; // Keluar dari case 1

                case 2: // Fried Chicken
                    if (jumlahPesanan >= 100) {
                        printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                        break;
                    }

                    printf("\nAnda memilih %s. Pilih variasi ayam:\n", namaMakanan[1]);
                    for (int i = 0; i < 5; i++) {
                        printf("%d. %s - Rp %.2f\n", i + 1, namaAyam[i], hargaAyam[i]);
                    }

                    while (1) {
                        printf("Pilih variasi ayam (1-5): ");
                        if (scanf("%d", &pilihanAyamInput) == 1) {
                            // Gunakan switch untuk memproses pilihan ayam
                            switch (pilihanAyamInput) {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                    printf("Anda memilih %s %s dengan harga Rp %.2f\n",
                                    namaMakanan[1], namaAyam[pilihanAyamInput - 1], hargaAyam[pilihanAyamInput - 1]);
                                    totalHarga += hargaAyam[pilihanAyamInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s",
                                    namaMakanan[1], namaAyam[pilihanAyamInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaAyam[pilihanAyamInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari switch
                                default:
                                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 5.\n");
                                    continue; // Kembali meminta input
                            }
                            break; // Keluar dari loop jika input valid
                        } else {
                            printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 5.\n");
                            while (getchar() != '\n'); // Bersihkan buffer
                        }
                    }
                    break; // Keluar dari case 2

                case 3: // Fried Rice
                    if (jumlahPesanan >= 100) {
                        printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                        break;
                    }

                    printf("\nAnda memilih %s. Pilih rasa nasi goreng:\n", namaMakanan[2]);
                    for (int i = 0; i < 6; i++) {
                        printf("%d. %s - Rp %.2f\n", i + 1, namaNasgor[i], hargaNasgor[i]);
                    }

                    while (1) {
                        printf("Pilih rasa nasi goreng (1-6): ");
                        if (scanf("%d", &pilihanNasgorInput) == 1) {
                            // Gunakan switch untuk memproses pilihan rasa nasi goreng
                            switch (pilihanNasgorInput) {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                case 6:
                                    printf("Anda memilih %s %s dengan harga Rp %.2f\n",
                                    namaMakanan[2], namaNasgor[pilihanNasgorInput - 1], hargaNasgor[pilihanNasgorInput - 1]);
                                    totalHarga += hargaNasgor[pilihanNasgorInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s",
                                    namaMakanan[2], namaNasgor[pilihanNasgorInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaNasgor[pilihanNasgorInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari switch
                                default:
                                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 6.\n");
                                    continue; // Kembali meminta input
                            }
                            break; // Keluar dari loop jika input valid
                        } else {
                            printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 6.\n");
                            while (getchar() != '\n'); // Bersihkan buffer
                        }
                    }
                    break; // Keluar dari case 3

                case 4: // Kimbab
                    if (jumlahPesanan >= 100) {
                        printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                        break;
                    }

                    printf("\nAnda memilih %s. Pilih variasi kimbab:\n", namaMakanan[3]);
                    for (int i = 0; i < 9; i++) {
                        printf("%d. %s - Rp %.2f\n", i + 1, namaKimbab[i], hargaKimbab[i]);
                    }

                    while (1) {
                        printf("Pilih variasi kimbab (1-9): ");
                        if (scanf("%d", &pilihanKimbabInput) == 1) {
                            // Gunakan switch untuk memproses pilihan variasi kimbab
                            switch (pilihanKimbabInput) {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                case 6:
                                case 7:
                                case 8:
                                case 9:
                                    printf("Anda memilih %s %s dengan harga Rp %.2f\n",
                                    namaMakanan[3], namaKimbab[pilihanKimbabInput - 1], hargaKimbab[pilihanKimbabInput - 1]);
                                    totalHarga += hargaKimbab[pilihanKimbabInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s",
                                    namaMakanan[3], namaKimbab[pilihanKimbabInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaKimbab[pilihanKimbabInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari switch
                                default:
                                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 9.\n");
                                    continue; // Kembali meminta input
                            }
                            break; // Keluar dari loop jika input valid
                        } else {
                            printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 9.\n");
                            while (getchar() != '\n'); // Bersihkan buffer
                        }
                    }
                    break; // Keluar dari case 4

                case 5: // Dimsum
                    if (jumlahPesanan >= 100) {
                        printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                        break;
                    }

                    printf("\nAnda memilih %s. Pilih variasi dimsum:\n", namaMakanan[4]);
                    for (int i = 0; i < 6; i++) {
                        printf("%d. %s - Rp %.2f\n", i + 1, namaDimsum[i], hargaDimsum[i]);
                    }

                    while (1) {
                        printf("Pilih variasi dimsum (1-6): ");
                        if (scanf("%d", &pilihanDimsumInput) == 1) {
                            // Gunakan switch untuk memproses pilihan variasi dimsum
                            switch (pilihanDimsumInput) {
                                case 1:
                                case 2:
                                case 3:
                                case 4:
                                case 5:
                                case 6:
                                    printf("Anda memilih %s %s dengan harga Rp %.2f\n",
                                    namaMakanan[4], namaDimsum[pilihanDimsumInput - 1], hargaDimsum[pilihanDimsumInput - 1]);
                                    totalHarga += hargaDimsum[pilihanDimsumInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s",
                                    namaMakanan[4], namaDimsum[pilihanDimsumInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaDimsum[pilihanDimsumInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari switch
                                default:
                                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 6.\n");
                                    continue; // Kembali meminta input
                            }
                            break; // Keluar dari loop jika input valid
                        } else {
                            printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 6.\n");
                            while (getchar() != '\n'); // Bersihkan buffer
                        }
                    }
                    break; // Keluar dari case 5

                default:
                    printf("Pilihan tidak valid. Silakan coba lagi.\n");
                    break;
            }

        } else if (pilihanMenuInput == 2) {
            do {
                printf("\nHalo, berikut adalah menu minuman yang kami miliki\n");
                for (int i = 0; i < 8; i++) {
                    printf("%d. %s - Rp %.2f\n", pilihanMinuman[i], namaMinuman[i], hargaMinuman[i]);
                }

                printf("Pilih menu minuman (1-8): ");
            
                if (scanf("%d", &pilihanMinumanInput) != 1) {
                    // Jika input bukan angka, tampilkan pesan kesalahan
                    printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 8.\n");

                    // Bersihkan buffer
                    while (getchar() != '\n');

                    // Lanjutkan ke awal loop
                    continue;
                }

                if (pilihanMinumanInput < 1 || pilihanMinumanInput > 8) {
                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 8.\n");
                    continue;
                }
                
                switch (pilihanMinumanInput) {
                    case 1: // Caramel Machiato
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s dengan harga Rp %.2f\n", namaMinuman[0], hargaMinuman[0]);
                        totalHarga += hargaMinuman[0]; // Tambahkan ke total harga
                    
                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();                                                                                                                                                                  
                    
                        break;

                    case 2: // Americano
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s dengan harga Rp %.2f\n", namaMinuman[1], hargaMinuman[1]);
                        totalHarga += hargaMinuman[1]; // Tambahkan ke total harga

                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();                                                                                                                                                                ;
                    
                        break;

                    case 3: // Soda Gembira
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s dengan harga Rp %.2f\n", namaMinuman[2], hargaMinuman[2]);
                        totalHarga += hargaMinuman[2]; // Tambahkan ke total harga

                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();

                        break;

                    case 4: // Matcha Latte
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }   

                        printf("Anda memilih %s dengan harga Rp %.2f\n", namaMinuman[3], hargaMinuman[3]);
                        totalHarga += hargaMinuman[3]; // Tambahkan ke total harga
                    
                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();
                    
                        break;

                    case 5: // Jasmine Tea
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("Anda memilih %s dengan harga Rp %.2f\n", namaMinuman[4], hargaMinuman[4]);
                        totalHarga += hargaMinuman[4]; // Tambahkan ke total harga
                    
                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();
                    
                        break;

                    case 6: // Sparkling Lemonade
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s dengan harga Rp %.2f\n", namaMinuman[5], hargaMinuman[5]);
                        totalHarga += hargaMinuman[5]; // Tambahkan ke total harga
                        
                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();
                        
                        break;

                    case 7: // Chamomile Honey Tea
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }
                        
                        printf("\nAnda memilih %s dengan harga Rp %.2f\n", namaMinuman[6], hargaMinuman[6]);
                        totalHarga += hargaMinuman[6]; // Tambahkan ke total harga
                        
                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, namaMinuman[pilihanMinumanInput-1]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[pilihanMinumanInput-1];
                        jumlahPesanan++;

                        PesananSementara();
                        
                        break;

                    case 8: // Mineral Water
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s dengan harga Rp %.2f\n", namaMinuman[7], hargaMinuman[7]);
                        totalHarga += hargaMinuman[7]; // Tambahkan ke total harga

                        sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s", namaMinuman[7]);
                        daftarPesanan[jumlahPesanan].hargaBarang = hargaMinuman[7];
                        jumlahPesanan++;

                        PesananSementara();
                        break;

                    default:
                        printf("Pilihan tidak valid. Silakan coba lagi.\n");
                        break;
                }

            break;

            } while(1);

        } else if (pilihanMenuInput == 3) {
            do {
                printf("\nHalo, berikut adalah menu pencuci mulut yang kami miliki\n");
                for (int i = 0; i < 2; i++) {
                    printf("%d. %s\n", i + 1, namaPencuciMulut[i]);
                }

                printf("Pilih menu pencuci mulut (1-2): ");
        
                if (scanf("%d", &pilihanPencuciMulutInput) != 1) {
                    // Jika input bukan angka, tampilkan pesan kesalahan
                    printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 2.\n");

                    while (getchar() != '\n'); // Bersihkan buffer

                    continue; // Lanjutkan ke awal loop
                }

                if (pilihanPencuciMulutInput < 1 || pilihanPencuciMulutInput > 2) {
                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 2.\n");
                    continue;
                }

                // Tidak perlu scanf lagi di bawah, langsung ke switch
                switch (pilihanPencuciMulutInput) {
                    case 1: // Fruit Salad
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s. Pilih variasi salad buah:\n", namaPencuciMulut[0]);
                            for (int i = 0; i < 5; i++) {
                                printf("%d. %s - Rp %.2f\n", i + 1, namaSalad[i], hargaSalad[i]); // Menyesuaikan index agar mulai dari 1
                            }

                        while (1) { // Loop untuk memastikan input valid
                            printf("Pilih variasi salad buah (1-5): ");
                            if (scanf("%d", &pilihanSaladInput) == 1) {
                                if (pilihanSaladInput >= 1 && pilihanSaladInput <= 5) {
                                    printf("Anda memilih %s dengan harga Rp %.2f\n", namaSalad[pilihanSaladInput - 1], hargaSalad[pilihanSaladInput - 1]);
                                    totalHarga += hargaSalad[pilihanSaladInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s", namaPencuciMulut[0], namaSalad[pilihanSaladInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaSalad[pilihanSaladInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari loop jika input valid
                                } else {
                                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 5.\n");
                                    continue; // Kembali meminta input
                                }
                            } else {
                                printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 5.\n");
                                while (getchar() != '\n'); // Bersihkan buffer jika input tidak valid
                            }
                        }
                        break; // Keluar dari case 1 (Fruit Salad)
    
                    case 2: // Desserts
                        if (jumlahPesanan >= 100) {
                            printf("Maaf, tidak bisa memesan lebih dari 100 item.\n");
                            break;
                        }

                        printf("\nAnda memilih %s. Pilih variasi dessert:\n", namaPencuciMulut[1]);
                        for (int i = 0; i < 8; i++) {
                            printf("%d. %s - Rp %.2f\n", i + 1, namaDessert[i], hargaDessert[i]);
                        }

                        while (1) { // Loop untuk memastikan input valid
                            printf("Pilih variasi dessert (1-8): ");
                            if (scanf("%d", &pilihanDessertInput) == 1) {
                                if (pilihanDessertInput >= 1 && pilihanDessertInput <= 8) {
                                    printf("Anda memilih %s dengan harga Rp %.2f\n", namaDessert[pilihanDessertInput - 1], hargaDessert[pilihanDessertInput - 1]);
                                    totalHarga += hargaDessert[pilihanDessertInput - 1];

                                    sprintf(daftarPesanan[jumlahPesanan].namaBarang, "%s %s", namaPencuciMulut[1], namaDessert[pilihanDessertInput - 1]);
                                    daftarPesanan[jumlahPesanan].hargaBarang = hargaDessert[pilihanDessertInput - 1];
                                    jumlahPesanan++;

                                    PesananSementara();
                                    break; // Keluar dari loop jika input valid
                                } else {
                                    printf("Pilihan tidak valid. Mohon masukkan angka antara 1 hingga 8.\n");
                                    continue; // Kembali meminta input
                                }
                            } else {
                                printf("Input tidak valid. Mohon masukkan angka antara 1 hingga 8.\n");
                                while (getchar() != '\n'); // Bersihkan buffer
                            }
                        }
                        break; // Keluar dari case 2 (Desserts)
                        
                } // Akhir dari switch untuk menu pencuci mulut

                break;

            } while (1); // Loop untuk memilih pencuci mulut

        } else if (pilihanMenuInput == 4) {
            printf("\nTerima Kasih telah berkunjung ke Cafe kami! ^^ \n");
            
            return 0; // Menutup program
        }

        printf("\nTotal Harga Sementara: Rp %.2f", totalHarga);

        //MEMULAICH KONFIRMASICH
        printf("\nApakah Anda ingin memesan lagi? (Y/N): ");
        scanf(" %c", &lanjutPesan);

        // Validasi agar hanya menerima huruf Y atau N
        while (!((lanjutPesan == 'Y' || lanjutPesan == 'y' || 
                    lanjutPesan == 'N' || lanjutPesan == 'n') && 
                    isalpha(lanjutPesan))) {
                        
            //konfirmasi ulang untuk masuk
            printf("Masukkan hanya Y atau N: ");
            scanf(" %c", &lanjutPesan);
        }

    } while (lanjutPesan == 'Y' || lanjutPesan == 'y');
    
    //Total Harga
    printf("Total Harga : Rp %.2f\n", totalHarga);

    while (1) {
        printf("\nMetode Pembayaran apa yang anda gunakan?\n");
        printf("1. Cash\n2. Bank ABC\n3. Qris\n");
        printf("Pilih Metode Pembayaran (1 - 3): ");

        // Membaca input metodePembayaran
        int result = scanf("%d", &metodePembayaran);

        // Validasi apakah input adalah angka
        if (result != 1) {
            printf("Input tidak valid. Masukkan angka antara 1 - 3.\n");

            // Membersihkan buffer input yang tidak valid
            while (getchar() != '\n'); // Menghapus karakter yang tidak valid di buffer

            // Minta input ulang
            continue;
        }

        // Validasi rentang angka
        if (metodePembayaran < 1 || metodePembayaran > 3) {
            printf("Pilihan tidak valid. Masukkan angka antara 1 - 3.\n");
            // Minta input ulang
            continue;
        }

        // Proses berdasarkan metode pembayaran yang valid
        if (metodePembayaran == 1) {
            strcpy(metodePembayaranStr, "Cash");
            totalBayar = (ceil(totalHarga / 100) * 100);
            printf("Anda telah berhasil melakukan pembayaran melalui Cash!\n");
        } else if (metodePembayaran == 2) {
            strcpy(metodePembayaranStr, "Bank ABC");
            printf("Anda telah berhasil melakukan pembayaran melalui Bank ABC dan mendapatkan diskon sebesar 7,5!\n");
            float diskon = totalHarga * 0.075;
            totalBayar = totalHarga - diskon;
        } else if (metodePembayaran == 3) {
            strcpy(metodePembayaranStr, "Qris");
            printf("Silakan scan QR code\n");
            printf("Anda telah berhasil melakukan pembayaran melalui Qris!\n");
            totalBayar = totalHarga;
        }

        // Jika input valid, keluar dari loop
        break;
    }

    // Menampilkan metode pembayaran dan total bayar
    printf("Metode pembayaran yang dipilih: %s\n", metodePembayaranStr);
    printf("Total yang harus dibayar: %.2f\n", totalBayar);

    // konfirmasi pesan dapat merchandise
    berikan_merchandise(totalHarga);

    //Struk Belanja
    printf("\n===== STRUK PEMBAYARAN =====\n");
    printf("Metode Pembayaran : %s\n", metodePembayaranStr);
    printf("Daftar Barang:\n");
    for (int i = 0; i < jumlahPesanan; i++) {
        printf("%d. %s - Rp %.2f\n", i + 1, daftarPesanan[i].namaBarang, daftarPesanan[i].hargaBarang);
    }
    printf("Total Harga  : Rp %.2f\n", totalHarga);
    printf("Total Bayar  : Rp %.2f\n", totalBayar);
    printf("============================\n\n");
    printf("Terima Kasih telah berkunjung ke Cafe kami! ^^ \n");

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    char filename[100];
    sprintf(filename, "struk_pembayaran_%04d%02d%02d_%02d%02d%02d.txt", 
            tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, 
            tm.tm_hour, tm.tm_min, tm.tm_sec);

    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Gagal membuka file untuk menulis.\n");
        return 1;
    }

    fprintf(fptr, "==================== STRUK PEMBAYARAN ====================\n");
    fprintf(fptr, "Metode Pembayaran : %s\n", metodePembayaranStr);
    fprintf(fptr, "Daftar Barang:\n");
    for (int i = 0; i < jumlahPesanan; i++) {
        fprintf(fptr, "%d. %s - Rp %.2f\n", i + 1, daftarPesanan[i].namaBarang, daftarPesanan[i].hargaBarang);
    }
    fprintf(fptr, "Total Harga  : Rp %.2f\n", totalHarga);
    fprintf(fptr, "Total Bayar  : Rp %.2f\n", totalBayar);
    fprintf(fptr, "===========================================================\n\n");
    fprintf(fptr, "Terima Kasih telah berkunjung ke Cafe kami! ^^ \n");

    fclose(fptr);

    printf("Struk pembayaran berhasil disimpan ke file '%s'\n", filename);

    return 0;
}