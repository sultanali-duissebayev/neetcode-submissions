class TimeMap {
private:
std::unordered_map<string, std::vector<std::pair<int, string>>> time_map;

public:

    TimeMap() {
        
        
    }
    
    void set(string key, string value, int timestamp) {
        time_map[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (time_map.find(key) == time_map.end()) {
        return ""; 
        }
        int left = 0;
        int right = time_map[key].size() - 1;
        int mid;
        int result = -1;
        while(left <= right){
            mid = (left + right)/2;
            if(time_map[key][mid].first > timestamp){
                right = mid - 1;
            }
            else if(time_map[key][mid].first < timestamp){
                left = mid + 1;
                result =  mid;
            }
            else{
                return time_map[key][mid].second;
            }
        }
        if(result == -1){
            return "";
        }
        return time_map[key][result].second;
            
    }
};
