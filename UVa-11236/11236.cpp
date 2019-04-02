#include <iostream>

using namespace std;

int main(){

    int d, p, s;
    for (int a = 0; a+a+a+a <= 2000; a++)
        for (int b = a; a+b+b+b <= 2000; b++)
            for (int c = b; a+b+c+c <= 2000; c++) {
                p = (long long)a*b*c;
                if (p <= 1000000) continue;
                s = (a+b+c);
                if (s*1000000 % (p - 1000000)) continue;
                d = s*1000000 / (p - 1000000);
                if (a+b+c+d > 2000 || d < c) continue;
                printf("%d.%02d %d.%02d %d.%02d %d.%02d\n", a/100, a%100, b/100, b%100, c/100, c%100, d/100, d%100);
            }

    // int i, j, k=0, l;
    // double values[2000];

    // for(i=0;i<20;i++){
    //     for(j=0;j<100;j++){
    //         values[k+j] = i+((j+1)*0.01);
    //         //cout << values[j] << endl;
    //     }
    //     k += 100;
    // }  

    // for(i=0;i<2000;i++){
    //     for(j=i;j<2000;j++){
    //         for(k=j;k<2000;k++){
    //             for(l=k;l<2000;l++){
    //                 if((values[i] + values[j] + values[k] + values[l]) == 
    //                 (values[i]*values[j]*values[k]*values[l])){
    //                     cout << values[i] << " " << values[j] << " " 
    //                     << values[k] << " " << values[l] << endl;
    //                 }
    //             }
    //         }
    //     }
    // }                

    return 0;
}