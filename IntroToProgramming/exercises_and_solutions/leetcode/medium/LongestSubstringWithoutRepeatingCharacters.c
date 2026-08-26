int lengthOfLongestSubstring(char * s) {
    // stores the last seen index of each ascii character
    int last_seen[128];
    for (int i = 0; i < 128; i++) {
        last_seen[i] = -1;
    }
    
    int left = 0;
    int max_len = 0;
    
    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char c = s[right];
        
        // if the character was seen and is inside the current window
        if (last_seen[c] >= left) {
            left = last_seen[c] + 1;
        }
        
        // update the last seen index of the character
        last_seen[c] = right;
        
        // calculate current window length
        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    
    return max_len;
}
