double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    // ensure nums1 is the smaller array
    if (nums1Size > nums2Size) {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }
    
    int m = nums1Size;
    int n = nums2Size;
    
    int low = 0, high = m;
    int total_left = (m + n + 1) / 2; // +1 ensures left side gets the extra element if total length is odd
    
    while (low <= high) {
        int i = (low + high) / 2; // elements taken from nums1
        int j = total_left - i; // elements aken from nums2 to complete left side
        
        // edge boundaries: INT_MIN/INT_MAX if a side is empty
        int nums1_left_biggest  = (i == 0) ? INT_MIN : nums1[i - 1];
        int nums1_right_smallest = (i == m) ? INT_MAX : nums1[i];
        
        int nums2_left_biggest  = (j == 0) ? INT_MIN : nums2[j - 1];
        int nums2_right_smallest = (j == n) ? INT_MAX : nums2[j];
        
        // check if all left side elements are smaller than right side elements
        if (nums1_left_biggest <= nums2_right_smallest && nums2_left_biggest <= nums1_right_smallest) {
            
            // odd total length: median is the max of the left side
            if ((m + n) % 2 == 1) {
                return (double)(nums1_left_biggest > nums2_left_biggest ? nums1_left_biggest : nums2_left_biggest);
            }
            
            // even total length: median is the average of left max and right min
            int max_of_left = (nums1_left_biggest > nums2_left_biggest) ? nums1_left_biggest : nums2_left_biggest;
            int min_of_right = (nums1_right_smallest < nums2_right_smallest) ? nums1_right_smallest : nums2_right_smallest;
            return (double)(max_of_left + min_of_right) / 2.0;
        } 
        // took too many elements from nums1, shift search left
        else if (nums1_left_biggest > nums2_right_smallest) {
            high = i - 1;
        } 
        // took too few elements from nums1, shift search right
        else {
            low = i + 1;
        }
    }
    
    return 0.0;
}
