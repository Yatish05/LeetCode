class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
    std::vector<int> answer(n, 0);
    
    // Left-to-right pass
    int balls = 0;
    int operations = 0;
    for (int i = 0; i < n; ++i) {
        answer[i] += operations;
        balls += (boxes[i] == '1'); 
        operations += balls;       
    }
    
    // Right-to-left pass
    balls = 0;
    operations = 0;
    for (int i = n - 1; i >= 0; --i) {
        answer[i] += operations;
        balls += (boxes[i] == '1'); // Count the balls
        operations += balls;        // Add balls to operations for the next index
    }
    
    return answer;
    }
};