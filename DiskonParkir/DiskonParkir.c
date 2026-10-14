#include <stdio.h>

int main(){

    int jenis_kendaraan = 0;
    int durasi_parkir = 0;
    int biaya = 0;
    int total_pembayaran = 0;
    int tarif = 0;
    int diskon = 0;
    int biaya_parkir = 0;

    printf("==================================== \n");
    printf("1. Motor\n");
    printf("2. Mobil\n");
    printf("====================================\n");
    printf("Masukkan jenis kendaraan: ");
    scanf("%d", &jenis_kendaraan);
    printf("Masukkan Durasi Parkir: ");
    scanf("%d", &durasi_parkir);

    if( jenis_kendaraan == 1 ){
        tarif = 3000;

    }else if(jenis_kendaraan == 2){
        tarif = 5000;

    }else{
        printf("kendaraan tidak valid ");
        return 0;
    }

    
    biaya_parkir = tarif * durasi_parkir;

    if (durasi_parkir >= 1){
        if(durasi_parkir >= 5 ){
            diskon = biaya_parkir * 20 / 100;
            total_pembayaran = biaya_parkir - diskon;
    
        }else{
            total_pembayaran = biaya_parkir;
        }

    }else{
        printf("Durasi Parkir Tidak Valid");
        return 0;
    }

    
    printf("==================================== \n");
    printf("1. Motor\n");
    printf("2. Mobil\n");
    printf("Jenis Kendaraan: %d\n", jenis_kendaraan);
    printf("durasi parkir: %d\n", durasi_parkir);
    printf("Tarif: %d\n", tarif);
    printf("Diskon: %d\n", diskon);
    printf("Total Pembayaran: %d\n", total_pembayaran);


    return 0;
}