#include <bits/stdc++.h>

using namespace std;

vector<pair <float,string  > > list_comp;

int main(){
    freopen("ucf_ccnn.txt","r",stdin);
	freopen("ucf_ccnn_res.txt","w",stdout);
	//freopen("trancos_sort.txt","w",stdout);
    string s[200];
    string name[5000];

    for(int i = 1; i <= 50; ++i)
        {
            string k;
            cin >> k;
            //cout << k;
            name[i] = k;
        }
    string pre[5000];
    string tru[5000];
    int c = 1;
    int ma = 0;
    int pos = -1;
    while (cin >> s[0]){
        for(int i = 1; i <= 13 ;++i)
            cin >> s[i];
//        for(int i = 1; i <= 13; ++i)
//            cout << i <<" " << s[i] << "\n";
        s[12].erase(s[12].begin());
        cout <<"{\"image\": \"" << name[c] << "\", \"ntrue\": "<<s[6] <<", \"npred\": "<< s[9] << ", \"time\": "<< s[12]<<" }," << endl;
        float nt = strtof((s[6]).c_str(),0);
        float np = strtof((s[9]).c_str(),0);
        //cout << nt << " " << np << endl;
        string res = "ntrue: " + s[6] + " npred: " + s[9];// + "name: " + name[c];
        list_comp.push_back( make_pair(abs(nt - np), res ) );
        c++;
    }
    sort(list_comp.begin(), list_comp.end());

    for(int i = 0; i < list_comp.size(); ++i)
        //cout << list_comp[i].second << " abs:" << list_comp[i].first << endl;
    //cout << ma <<" " << pos <<" "<< name[pos] <<endl;

	return 0;
}

//{ x: 1, y: 650 },
