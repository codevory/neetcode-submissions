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
    Node* dfs(Node* node,unordered_map<Node*,Node*>&mp){
        if(node == nullptr) return nullptr;
        if(mp.find(node) != mp.end()){
            return mp[node];
        }
        if(node -> neighbors.size() == 0){
            Node* clone = new Node(node -> val);
            return clone;
        }
        
        Node* clone = new Node(node -> val);
        mp[node] = clone;

        for(Node* n : node -> neighbors){
            clone -> neighbors.push_back(dfs(n,mp));
        }

        return clone;
    }
public:
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;
        else if(node -> neighbors.size() == 0){
            Node* clone = new Node(node -> val);
            return clone;
        } else {
           unordered_map<Node*,Node*>mp;
           return dfs(node,mp);
        }
       return nullptr;
    }
};
