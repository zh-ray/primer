#include <iostream>
#include <vector>

using namespace std;

void shell_sort(vector<int> &arr, int gap)
{
    int len = arr.size();
    while (gap)
    {
        for (size_t i = gap; i < len; i++)
        {
            size_t j = i;
            while (j >= gap && arr[j] < arr[j - gap])
            {
                int temp = arr[j - gap];
                arr[j - gap] = arr[j];
                arr[j] = temp;
                j -= gap;
            }
        }
        gap /= 2;
    }
}

void insert_sort(vector<int> &arr)
{
    int len = arr.size();
    int i, j;
    int temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
}

void selection_sort(vector<int> &arr)
{
    int len = arr.size();
    int min_index, temp;
    for (size_t i = 0; i < len; i++)
    {
        min_index = i;
        for (size_t j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void bubble_sort(vector<int> &arr)
{
    int len = arr.size();
    for (size_t i = 0; i < len - 1; i++)
    {
        for (size_t j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubble_sort_update(vector<int> &arr)
{
    int len = arr.size();
    int current = 0, last = len - 1; // 记录当前所在位置以及最后发生交换的位置
    while (last > 0)
    {
        for (size_t i = 0; i < last; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                current = i;
            }
        }
        last = current;
    }
}

class HeapSort
{
public:
    void heap_sort(vector<int> &arr)
    {
        int len = arr.size();
        // 初始化堆从最后一个父结点
        for (int i = len / 2 - 1; i >= 0; --i)
        {
            heap_ify(arr, i, len);
        }
        // 从堆中取出最大的元素再调整堆
        for (int i = len - 1; i > 0; --i)
        {
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            // 调整堆
            heap_ify(arr, 0, i);
            cout << endl;
        }
    }

private:
    void heap_ify(vector<int> &arr, int low, int high)
    {
        int father = low;
        int left = 2 * father + 1;  // 左孩子
        int right = 2 * father + 2; // 右孩子
        if (left < high && arr[left] > arr[father])
        {
            father = left;
        }
        if (right < high && arr[right] > arr[father])
        {
            father = right;
        }
        if (father != low)
        {
            int temp = arr[low];
            arr[low] = arr[father];
            arr[father] = temp;
            heap_ify(arr, father, high);
        }
    }
};

class QuickSort
{
public:
    void quick_sort(vector<int> &arr, int low, int high)
    {
        if (low < high)
        {
            int pivotpos = partition(arr, low, high);
            quick_sort(arr, low, pivotpos - 1);
            quick_sort(arr, pivotpos + 1, high);
        }
    }

private:
    int partition(vector<int> &arr, int low, int high)
    {
        // 基准
        int pivot = arr[low];
        while (low < high)
        {
            // 当队尾的元素大于等于基准数据时，向左遍历
            while (low < high && arr[high] >= pivot)
            {
                --high;
            }
            // 此时跳出上述循环，条件为low == high 或者 arr[high] < pivot
            arr[low] = arr[high];
            // 当队首的元素小于等于基准数据时，向右遍历
            while (low < high && arr[low] <= pivot)
            {
                ++low;
            }
            // 此时跳出上述循环，条件为low == high 或者 arr[low] > pivot
            arr[high] = arr[low];
        }
        arr[low] = pivot;
        return low;
    }
};

class MergeSort
{
public:
    void merge_sort(vector<int> &arr)
    {
        int len = arr.size();
        vector<int> reg(len);
        merge(arr, reg, 0, len - 1);
    }

private:
    void merge(vector<int> &arr, vector<int> &reg, int low, int high)
    {
        if (low >= high)
        {
            return;
        }
        int len = high - low, mid = (len >> 1) + low;

        // 分组
        int low1 = low, high1 = mid;
        int low2 = mid + 1, high2 = high;
        // 合并
        merge(arr, reg, low1, high1);
        merge(arr, reg, low2, high2);

        int k = low;
        while (low1 <= high1 && low2 <= high2)
        {
            reg[k++] = arr[low1] < arr[low2] ? arr[low1++] : arr[low2++];
        }

        while (low1 <= high1)
        {
            reg[k++] = arr[low1++];
        }
        while (low2 <= high2)
        {
            reg[k++] = arr[low2++];
        }
        for (size_t i = low; i <= high; i++)
        {
            arr[i] = reg[i];
        }
    }
};

int main()
{
    vector<int> a{1, 5, 6, 3, 7, 2, 4, 9, 8, 0};
    // shell_sort(a, 5);
    // insert_sort(a);
    // selection_sort(a);
    // HeapSort heapsort;
    // heapsort.heap_sort(a);
    // bubble_sort(a);
    // bubble_sort_update(a);
    // QuickSort quicksort;
    // quicksort.quick_sort(a, 0, a.size() - 1);
    MergeSort mergesort;
    mergesort.merge_sort(a);
    for (size_t i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}