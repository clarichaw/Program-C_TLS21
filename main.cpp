#include <iostream>

using namespace std;

main(){
float tinggi, berat, bmi;

cout<<"MENGHITUNG DAN MENGETAHUI APAKAH BERAT BADAN SESEORANG IDEAL\n";
cout<<"Masukkan berat badan anda : ";
cin>>berat;
cout<<"Masukkan tinggi badan anda (dalam satuan meter) : ";
cin>>tinggi;
bmi = berat / ( tinggi * tinggi );
//bmi adalah standar index massa tubuh dalam menentukan apakah berat badan normal atau tidak
cout<<"BMI anda adalah  "<<bmi<<endl;
cout<<endl;

if (bmi<=18.5){
    cout<<"Anda kekurangan berat badan"<<endl;
}
else if (bmi>18.5 && bmi<=25){
    cout<<"Berat badan anda IDEAL"<<endl;
}
else if (bmi>25 && bmi<=30){
    cout<<"Anda kelebihan berat badan"<<endl;
}
else{
    cout<<"Anda menderita obesitas"<<endl;
}

return 0;
}
