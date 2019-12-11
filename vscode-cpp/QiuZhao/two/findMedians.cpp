#include <iostream>
#include <vector>
using std::vector;

/* double findMedian(vector<int> nums1, vector<int> nums2)
{
    int N1 = nums1.size(), N2 = nums2.size();
    int valueMedian = (N1 + N2 + 1) / 2;
    int i = 0, j = 0;
    for (size_t k = 1; k < valueMedian; k++)
    {
        if (i < N1 && j < N2)
        {
            nums1[i] < nums2[j] ? i++ : j++;
        }
        else if (i >= N1)
        {
            j++;
        }
        else if (j >= N2)
        {
            i++;
        }
    }
    if ((N1 + N2) % 2 == 1)
    {
        if (i < N1 && j < N2)
        {
            return nums1[i] < nums2[j] ? nums1[i] : nums2[j];
        }
        else if (i >= N1)
        {
            return nums2[j];
        }
        else if (j >= N2)
        {
            return nums1[i];
        }
        else
        {
            return -1;
        }
    }
    else
    {
        if (i < N1 && j < N2)
        {
            if (nums1[i] < nums2[j])
            {
                return (nums1[i] + (i + 1 < N1 && nums1[i + 1] < nums2[j] ? nums1[i + 1] : nums2[j])) / 2.0;
            }
            else
            {
                return (nums2[j] + (j + 1 < N2 && nums2[j + 1] < nums1[i] ? nums2[j + 1] : nums1[i])) / 2.0;
            }
        }
        else if (i >= N1)
        {
            return (nums2[j] + nums2[j + 1]) / 2.0;
        }
        else if (j >= N2)
        {
            return (nums1[i] + nums1[i + 1]) / 2.0;
        }
        else
        {
            return -1;
        }
    }
} */

double findMedian(vector<int> &nums1, vector<int> &nums2)
{
    int n1_size = nums1.size();
    int n2_size = nums2.size();
    if(n1_size > n2_size)
    {
        return findMedian(nums2, nums1);
    }
    int L1, L2, R1, R2, c1, c2, low = 0, high = 2 * n1_size;
    while(low < high){
        c1 = (low + high) / 2;
        c2 = n1_size + n2_size - c1;
    }

}

int main()
{
    vector<int> nums1{1, 2, 3, 5};
    vector<int> nums2{4, 6, 7, 8};
    std::cout << findMedian(nums1, nums2);
    return 0;
}