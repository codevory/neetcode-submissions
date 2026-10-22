class Solution {
    bool dfs(int crs,unordered_map<int,vector<int>>& mpp,unordered_set<int>& visiting){

      if(visiting.count(crs)){
        return false;
      }
      
      if(mpp[crs].empty()){
        return true;
      }

      visiting.insert(crs);
      for(int pre : mpp[crs]){
        if(!dfs(pre,mpp,visiting)){
            return false;
        }
      }

      visiting.erase(crs);
      mpp[crs].clear();
      return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if (numCourses < 1 || prerequisites.size() < 1){
            return true;
        }

        unordered_map<int,vector<int>>mpp;
        unordered_set<int>visiting;

        for(int i = 0; i < numCourses; i++){
            mpp[i] = {};
        }

        for(const auto& prereq : prerequisites){
            mpp[prereq[0]].push_back(prereq[1]);
        }

        for(int crs = 0; crs < numCourses; crs++){
            if(!dfs(crs,mpp,visiting)){
                return false;
            }
        }

        return true;
    }
};
