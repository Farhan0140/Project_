#include <bits/stdc++.h>
using namespace std;

//_______________________________________________________________________________________________

double Unit = 7;
int Total_Taka = 0;
vector<int> r1, r2, r3, r4, f;

#define pb push_back

//_______________________________________________________________________________________________

void Print(int old_unit, int new_unit, int room){
    Total_Taka += (new_unit - old_unit) * Unit;
    if(room == 5){
        cout << "___ Flat ______" << endl;
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
    /* 3-5-24 */ r1.pb(1452);  r2.pb(1112);  r3.pb(325);   r4.pb(1029);   f.pb(1264);
    /* 4-6-24 */ r1.pb(1516);  r2.pb(1190);  r3.pb(339);   r4.pb(1064);   f.pb(1376);
    /* 2-7-24 */ r1.pb(1584);  r2.pb(1222);  r3.pb(376);   r4.pb(1104);   f.pb(1538);
    /* 1-8-24 */ r1.pb(1652);  r2.pb(1258);  r3.pb(418);   r4.pb(1138);   f.pb(1675);
    /* 7-9-24 */ r1.pb(1717);  r2.pb(1295);  r3.pb(466);   r4.pb(1182);   f.pb(1850);
    /* 3-10-24*/ r1.pb(1778);  r2.pb(1325);  r3.pb(508);   r4.pb(1222);   f.pb(1950);
    /* 1-11-24*/ r1.pb(1843);  r2.pb(1360);  r3.pb(557);   r4.pb(1259);   f.pb(2083);
    
    // /* --*/ r1.pb();  r2.pb();  r3.pb();   r4.pb();   f.pb();

    int len = r1.size();
    Print(r1[len-2], r1[len-1], 1);
    Print(r2[len-2], r2[len-1], 2);
    Print(r3[len-2], r3[len-1], 3);
    Print(r4[len-2], r4[len-1], 4);
    Print(f[len-2], f[len-1], 5);
    cout << "Total Taka --> " << Total_Taka << endl;
    return 0;
}


//_______________________________________________________________________________________________