#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int cevap;
    int kullanici;
    void kac(); {
        
    }
    void bekle(); {
        Sleep(5000);
        system("cls");
    }
    string isim;



    cout << "merhaba, oyunumuza hosgeldiniz" << endl;
    cout << "oncelikle isminizi ogrenebilirmiyim " << endl;
    cin >> isim;
    cout << "merhaba ajan : " << isim << endl;
    cout << "yeni gorevin buyuk mafya babası gaddar cabbar in en güvendigi adam olup onu indirmemizi saglamak " << endl;
    cout << "seninle bir sure iletisim kuramayacagiz bu sure zarfında cabbar in guvenini kazan " << endl;
    cout << " sana cip takacaz ama sadece nerede oldugunu gorebilecegiz " << endl; cout << "unutma tek basınasın " << endl;
    cout << " bu senin yeni telefonun , kimligin ve cuzdanın " << endl;
    cout << "kendine guven evlat ve sakin isi batirma..." << endl;


    cout << "oyuna giriliyor" << endl;
    Sleep(50000);
    system("cls");

    cout << "merhaba " << isim << "bugun gaddar cabbarin bir elemaninin yakiniyla  goruseceksin " << endl;
    cout << "onun guvenini kazanırsan seni gaddar cabbarin adamiyla tanistiracak" << endl;
    cout << "hadi yola cikalim " << endl;
    Sleep(5000);
    system("cls");
    cout << "merhaba " << isim << "ben mehmet tanistigimiza sevindim" << endl;
    cout << "neden mafya ya katilmak istiyorsun " << endl;
    cout << "1 isten yeni atildigini ve borclarin oldugunu soyle " << endl;
    cout << "2 boktan bir maasa calisip omrunu harcayacagina kendi isinin paatronu olmak istedigini soyle" << endl;
    cin >> kullanici;
    if (kullanici == 1)
    {
        cout << "demek oyle sen bir polissin nerede olsa anlarim " << endl;
        cout << "mehmet polis oldugunu anladi ve seni oldurdu.......  gule gule" << endl;

    }
    else if (kullanici == 2)
    {
        cout << "oncelikle kendini kanitlamalisin " << endl;
        cout << " seni bana borcu olan bir adama götürecem paramizi getirirsen seni yanima alacagim " << endl;

        cout << "borclu adamin mekanina gidiliyor.." << endl;
        bekle;

        cout << "mekana geldik....     adamimiz icerde git ve parami getir " << endl;
        cout << "borcu tahsil etmek icin 1 tusla \n kacmak icin 2 tusla\n " << endl;
        cin >> cevap;
        if (cevap == 2)
        {
            kac;
        }
        else if (cevap == 1)
        {


            cout << "mekana giris yapiliyor" << endl;
            bekle;

            cout << "buyrun kime bakmistiniz " << endl;

            cout << "1 mehmetin adami oldugunu tahsilat icin geldiğini söyle \n 2 kendine harac iste " << endl;
            cin >> cevap;

            if (cevap == 1)
            {
                cout << "benim kimseye borcum yok " << endl;
                cout << "zorla almak icin 1 cikmak icin 2 tuslayin" << endl;
                cin >> kullanici;

                if (kullanici == 2)
                {
                    cout << "cikarken mekandaki korumalar seni vurdu.. gule gule.." << endl;
                }
                else if (kullanici == 1)
                {
                    cout << "mekandaki korumalarin hepsini indirdin ve borcu aldin.. \n gercek delikanliymissin.." << endl;
                    cout << "para mehmet e goturuluyor.." << endl;
                    Sleep(100);
                    system("cls");
                    cout << "aferin " << isim << "gozume girdin" << endl;
                    cout << "bugunluk bukadar şamata yeter git biraz dinlen " << endl;
                    cout << " yarin kacta bulusalim" << endl;
                    cin >> cevap;
                    Sleep(cevap * 100);
                    system("cls");
                    cout << "gunaydin delikanli benim mekana gel" << endl;
                    cout << "mekana gitmek icin 1 kacmak icin 2 tusla " << endl;
                    cin >> kullanici;
                    if (kullanici == 2)
                    {
                        kac;
                    }
                    else if (kullanici == 1)
                    {
                        cout << "mehemtin mekanina gidiliyor" << endl;
                        bekle;

                        cout << "tekrardan hosgeldin " << isim << "bugun benim haracima konan picin mekanini patlatacaksin " << endl;
                        cout << "gorevi almak icin 1 reddedmek icin 2 tusla " << endl;
                        cin >> kullanici;
                        if (kullanici == 2)
                        {
                            kac;
                        }
                        else if (kullanici == 1)
                        {
                            cout << " o halde kahvalti yapip gidelim \n kizim masayi donat..." << endl;
                            cout << "kahvalti yapiliyor \n hadi gidelim" << endl;
                            cout << "mekana gidiliyor";
                            bekle;
                            // burasini devam ettir
                        }
                    }

                }

            }
            else if (cevap == 2)
            {
                // burayi güncelle
                cout << " mekandaki korumalar seni oldurdu gule gule " << endl;
            }
            else
            {
                cout << "yanlis giris yaptiniz \n gulee gule ... " << endl;
            }



        }
    }


}