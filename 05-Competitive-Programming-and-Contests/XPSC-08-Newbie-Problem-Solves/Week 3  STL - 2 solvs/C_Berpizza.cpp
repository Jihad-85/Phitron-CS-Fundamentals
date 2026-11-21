#include <bits/stdc++.h>
using namespace std;

struct Customer {
    int money;
    int id;
};

struct Compare {
    bool operator()(const Customer &a, const Customer &b) {
        if(a.money == b.money) return a.id > b.id;  
        return a.money < b.money;  
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    queue<int> q_ids;
    priority_queue<Customer, vector<Customer>, Compare> pq;
    vector<bool> served(q+5,false);

    int idCounter = 0;

    while(q--){

        int type;
        cin >> type;


        if(type == 1){
            int m;
            cin >> m;
            idCounter++;
            q_ids.push(idCounter);
            pq.push({m,idCounter});
        }

        else if(type == 2){
            while(!q_ids.empty() && served[q_ids.front()]) q_ids.pop();
            int cid = q_ids.front(); q_ids.pop();
            served[cid] = true;
            cout << cid << " ";
        }

        else if(type == 3){
            while(!pq.empty() && served[pq.top().id]) pq.pop();
            int cid = pq.top().id; pq.pop();
            served[cid] = true;
            cout << cid << " ";
        }
    }
    return 0;
}
