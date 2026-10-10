/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    Node* dfs(Node* curr,map<Node*,Node*>& mp){
        if(curr == nullptr) return nullptr;
        if(mp.count(curr)){
            return mp[curr];
        }

        Node* clone = new Node(curr -> val);
        mp[curr] = clone;

        for(Node* n: curr -> neighbors){
            clone -> neighbors.push_back(dfs(n,mp));
        }

        return clone;
    }
public:
    Node* cloneGraph(Node* node) {
        map<Node*,Node*>mp;
        if(node == nullptr) return nullptr;
        if(node -> neighbors.size() == 0){
            Node* clone = new Node(node -> val);
            return clone;
        }else{
            return dfs(node, mp);
        }

        return nullptr;
    }
};
