#include <bits/stdc++.h>
using namespace std;

//_______________________________________________________________________________________________

double Unit = 8;
int Total_Taka = 0;
vector<int> r1, r2, r3, r4, f, d_f;

#define pb push_back

//_______________________________________________________________________________________________

void Print(int old_unit, int new_unit, int room){
    Total_Taka += (new_unit - old_unit) * Unit;
    if(room == 5 || room == 6){
        cout << "___ Flat " << room - 4 << " ______" << endl;
        cout << "Old Unit --> " << old_unit << endl;
        cout << "New Unit --> " << new_unit << endl;
        cout << "Unit Use --> " << (new_unit - old_unit) << endl;
        cout << "Total Taka --> " << (new_unit - old_unit) * Unit << endl << endl;
    }else{
        cout << "___ ROOM No." << room << " ______" << endl;
        cout << "Old Unit --> " << old_unit << endl;
        cout << "New Unit --> " << new_unit << endl;
        cout << "Unit Use --> " << (new_unit - old_unit) << endl;
        cout << "Total Taka --> " << (new_unit - old_unit) * Unit << endl << endl;
    }
}

//_______________________________________________________________________________________________


int main(){
    /* 3-5-24 */    r1.pb(1452);  r2.pb(1112);  r3.pb(325);   r4.pb(1029);   f.pb(1264); d_f.pb(0);
    /* 4-6-24 */    r1.pb(1516);  r2.pb(1190);  r3.pb(339);   r4.pb(1064);   f.pb(1376); d_f.pb(0);
    /* 2-7-24 */    r1.pb(1584);  r2.pb(1222);  r3.pb(376);   r4.pb(1104);   f.pb(1538); d_f.pb(0);
    /* 1-8-24 */    r1.pb(1652);  r2.pb(1258);  r3.pb(418);   r4.pb(1138);   f.pb(1675); d_f.pb(0);
    /* 7-9-24 */    r1.pb(1717);  r2.pb(1295);  r3.pb(466);   r4.pb(1182);   f.pb(1850); d_f.pb(0);
    /* 3-10-24*/    r1.pb(1778);  r2.pb(1325);  r3.pb(508);   r4.pb(1222);   f.pb(1950); d_f.pb(0);
    /* 1-11-24*/    r1.pb(1843);  r2.pb(1360);  r3.pb(557);   r4.pb(1259);   f.pb(2083); d_f.pb(0);
    /* 6-12-24*/    r1.pb(1894);  r2.pb(1386);  r3.pb(590);   r4.pb(1275);   f.pb(2200); d_f.pb(0);
    /* 3-1-25 */    r1.pb(1917);  r2.pb(1390);  r3.pb(597);   r4.pb(1280);   f.pb(2242); d_f.pb(0);
    /* 1-2-25 */    r1.pb(1942);  r2.pb(1394);  r3.pb(620);   r4.pb(1285);   f.pb(2292); d_f.pb(0);
    /* 1-3-25 */    r1.pb(1971);  r2.pb(1407);  r3.pb(655);   r4.pb(1298);   f.pb(2392); d_f.pb(0);
    /* 9-4-25 */    r1.pb(2046);  r2.pb(1450);  r3.pb(703);   r4.pb(1334);   f.pb(2570); d_f.pb(0);
    /* 9-4-25 */    r1.pb(2046);  r2.pb(1450);  r3.pb(716);   r4.pb(1334);   f.pb(2570); d_f.pb(0);
    /* 1-5-25 */    r1.pb(2094);  r2.pb(1472);  r3.pb(716);   r4.pb(1358);   f.pb(2636); d_f.pb(50);
    /*31-5-25 */    r1.pb(2141);  r2.pb(1503);  r3.pb(758);   r4.pb(1400);   f.pb(2636); d_f.pb(232);
    /* 2-7-25 */    r1.pb(2149);  r2.pb(1540);  r3.pb(775);   r4.pb(1440);   f.pb(2801); d_f.pb(480);
    /* 1-8-25 */    r1.pb(2210);  r2.pb(1570);  r3.pb(816);   r4.pb(1478);   f.pb(2920); d_f.pb(688);
    /* 1-9-25 */    r1.pb(2280);  r2.pb(1618);  r3.pb(865);   r4.pb(1502);   f.pb(3070); d_f.pb(920);
    
    // /* --*/    r1.pb();  r2.pb();  r3.pb();   r4.pb();   f.pb(); d_f.pb();



    int len = r1.size();
    Print(r1[len-2], r1[len-1], 1);
    Print(r2[len-2], r2[len-1], 2);
    Print(r3[len-2], r3[len-1], 3);
    Print(r4[len-2], r4[len-1], 4);
    Print(f[len-2], f[len-1], 5);
    Print(d_f[len-2], d_f[len-1], 6);
    cout << "Total Taka --> " << Total_Taka << endl;
    return 0;
}


//_______________________________________________________________________________________________