class Solution {
    unordered_map<int,vector<int>>mpp;
    unordered_set<int> visiting;

    bool dfs(int crs){
       if(visiting.count(crs)){
        return false;
       }

       if(mpp[crs].empty()){
        return true;
       }

       visiting.insert(crs);
       for(int pre : mpp[crs]){
        if(!dfs(pre)){
            return false;
        }
       }

       visiting.erase(crs);
       mpp[crs].clear();
       return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(numCourses < 1 || prerequisites.size() < 1) return true;
       
        for(int i = 0; i < numCourses; i++){
            mpp[i] = {};
        }

        for(const auto& prereq : prerequisites){
            mpp[prereq[0]].push_back(prereq[1]);
        }

        for(int k = 0; k < numCourses; k++){
            if(!dfs(k)){
                return false;
            }
        }
        return true;
    }
};
