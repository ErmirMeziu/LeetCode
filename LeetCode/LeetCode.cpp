#include <iomanip>
#include <iostream>
#include<vector>
#include <math.h>
#include <numeric>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> result(cols, vector<int>(rows, 0));
    for (int i = 0; i < rows;i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
};

string defangIPaddr(string address) {
    int n = address.size();
    string defangedVersion = "";
    for (int i = 0; i < n; i++)
    {
        char c = address[i];
        if (c == '.')
        {
            defangedVersion += "[.]";
        }
        else
        {
            defangedVersion += c;
        }
    }
    return defangedVersion;
};

int subtractProductAndSum(int n) {
    int product_of_digits = 1;
    int sum_of_digits = 0;
    while (n > 0)
    {
        int digit = n % 10;
        product_of_digits *= digit;
        sum_of_digits += digit;
        n /= 10;
    }
    cout << "The product of digits: " << product_of_digits << endl;
    cout << "The sum of digits: " << sum_of_digits << endl;
    int res = product_of_digits - sum_of_digits;
    return res;
};

int countNegatives(vector<vector<int>>& grid) {
    int k = 0;
    int row = grid.size();
    int cols = (row > 0) ? (grid[0].size()) : 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] < 0)
            {
                k++;
            }
        }
    }
    return k;
};

vector<int> shuffle(vector<int>& nums, int n) {
    int k = nums.size();
    vector<int>v(k);
    for (int i = 0; i < n; i++) {
        v[i * 2] = nums[i];
        v[i * 2 + 1] = nums[i + n];
    }

    return v;
};

vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int>runningsum(n);
    runningsum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        runningsum[i] = runningsum[i - 1] + nums[i];
    }
    return runningsum;
};

int numIdenticalPairs(vector<int>& nums) {
    int k = 0;
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] == nums[j] && i < j) {
                k++;
            }
        }
    }

    return k;
};

int diagonalSum(vector<vector<int>>& mat) {
    int sum = 0;
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
                sum += mat[i][j];
        }
    }
    return sum;
};

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
{
    string str1 = accumulate(word1.begin(), word1.end(), string(""));
    string str2 = accumulate(word2.begin(), word2.end(), string(""));
    return str1 == str2;
};

int maximumWealth(vector<vector<int>>& accounts) {
    int rows = accounts.size();
    int cols = (rows > 0) ? accounts[0].size() : 0;
    int maxWealth = 0;
    for (int i = 0; i < rows; i++) {
        int wealth = 0;
        for (int j = 0; j < cols; j++)
        {
            wealth += accounts[i][j];
        }
        maxWealth = max(maxWealth, wealth);
    }

    return maxWealth;
};

string interpret(string command) {
    int n = command.size();
    string result = "";
    int i = 0;
    while (i < n)
    {
        if (command[i] == 'G')
        {
            result += 'G';
            i++;
        }
        else if (command[i] == '(' && command[i + 1] == ')')
        {
            result += 'o';
            i += 2;
        }
        else if (command.substr(i, 4) == "(al)")
        {
            result += "al";
            i += 4;
        }


    }
    return result;
};

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector <int> ans(2 * n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];

    }
    return ans;
};

int finalValueAfterOperations(vector<string>& operations) {
    int X = 0;
    int n = operations.size();
    for (int i = 0; i < n; i++) {
        const string op = operations[i];
        if (op == "X++" || op == "++X")
            X++;
        else
            X--;
    }
    return X;
};

int sum(int num1, int num2) {
    int res = num1 + num2;
    return res;
}

int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : 2 * n;
};

vector<double> convertTemperature(double celsius) {
    double kelvin, fahrenheit;
    vector<double> ans = { 0.0,0.0 };
    kelvin = celsius + 273.15;
    fahrenheit = celsius * 1.80 + 32.00;
    ans[0] = kelvin;
    ans[1] = fahrenheit;
    return ans;
};

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    vector<int> result;
    int maxNumberOfOnes = 0;
    int maxNumberOfOnesIndex = 0;
    int rows = mat.size();
    int cols = mat[0].size();
    for (int i = 0; i < rows; i++)
    {
        int rowCount = 0;
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == 1)
            {
                rowCount++;
            }
        }

        if (rowCount > maxNumberOfOnes)
        {
            maxNumberOfOnes = rowCount;
            maxNumberOfOnesIndex = i;
        }
    }

    result.push_back(maxNumberOfOnesIndex);
    result.push_back(maxNumberOfOnes);
    return result;
};

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int n = hours.size();
    int k = 0;
    for (int i = 0; i < n;i++)
    {
        if (hours[i] >= target)
            k++;
    }
    return k;
};

int differenceOfSums(int n, int m) {
    int num1 = 0;
    int num2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % m != 0)
        {
            num1 += i;
        }
        else
        {
            num2 += i;
        }
    }
    return (num1 - num2);
}

vector<int> findWordsContaining(vector<string>& words, char x) {
    int n = words.size();
    vector <int> rezultati;
    for (int i = 0; i < n;i++)
    {
        bool xfound = false;
        for (int j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == x)
            {
                xfound = true;
                break;
            }
        }
        if (xfound)
        {
            rezultati.push_back(i);
        }
    }

    return rezultati;
}

int main()
{

    int numOfFunction;
    cout << "A simple program including 20 functions." << endl;
restart:
    cout << "\nList of functions and their corresponding number:" << endl;
    cout << " 1. Transpose Matrix" << endl;
    cout << " 2. Defanging an IP Address" << endl;
    cout << " 3. Subtract the Product and Sum of Digits of an Integer." << endl;
    cout << " 4. Count Negative Numbers in a Sorted Matrix. " << endl;
    cout << " 5. Shuffle the Array." << endl;
    cout << " 6. Running Sum of 1d Array." << endl;
    cout << " 7. Number of Good Pairs." << endl;
    cout << " 8. Matrix Diagonal Sum." << endl;
    cout << " 9. Check If Two String Arrays are Equivalent." << endl;
    cout << "10. Richest Customer Wealth." << endl;
    cout << "11. Goal Parser Interpretation." << endl;
    cout << "12. Concatenation of Array." << endl;
    cout << "13. Final Value of Variable After Performing Operations." << endl;
    cout << "14. Add Two Integers." << endl;
    cout << "15. Smallest Even Multiple." << endl;
    cout << "16. Transpose Matrix." << endl;
    cout << "17. Row With Maximum Ones." << endl;
    cout << "18. Number of Employees Who Met the Target." << endl;
    cout << "19. Divisible and Non-divisible Sums Difference." << endl;
    cout << "20. Find Words Containing Character.\n\n"
        << endl;

    cout << "To continue using the program type one of the corresponding numbers of a function : " << endl;
    cin >> numOfFunction;

    switch (numOfFunction)
    {

    case (1):
    {
        cout << "Given a 2D integer array matrix, return the transpose of matrix." << endl;
        cout << "The transpose of a matrix is the matrix flipped over its main diagonal,"
            << "switching the matrix's row and column indices." << endl;
        int rows, cols;
        cout << "Write the number of rows:";
        cin >> rows;
        cout << "Write the number of cols:";
        cin >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols, 0));
        vector<vector<int>> transposedMatrix(cols, vector<int>(rows, 0));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Element[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
        cout << "\nThe given matrix:\n";

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << setw(6) << matrix[i][j];
            }
            cout << endl;
        }
        cout << endl;

        transposedMatrix = transpose(matrix);

        cout << "The transposed matrix:\n";

        for (int i = 0; i < transposedMatrix.size(); i++)
        {
            for (int j = 0; j < transposedMatrix[0].size(); j++)
            {
                cout << setw(6) << transposedMatrix[i][j];
            }
            cout << endl;
        }
        goto restart;

    }

    case (2):
    {
        cout << "Given a valid (IPv4) IP address, return a defanged version of that IP address." << endl;
        cout << "A defanged IP address replaces every period . with [.]" << endl;
        string address;
        cout << "Write the address:";
        cin >> address;
        cout << "\nThe given IP address: " << address << endl;
        cout << "\nThe defanged IP address: " << defangIPaddr(address) << endl;
        goto restart;
    }

    case (3):
    {
        cout << "Given an integer number n," <<
            "return the difference between the product of its digits and the sum of its digits." << endl;
        int n;
        cout << "Enter a number:";
        cin >> n;
        cout << endl;
        cout << "The number that u gave was: " << n << endl;
        cout << "\nThe difference between the product of "
            << "its digits and the sum of its digits is : " << subtractProductAndSum(n) << endl;
        goto restart;

    }
    case (4):
    {
        cout << "Given a m x n matrix grid which is sorted in non-increasing "
            << "order both row-wise and column-wise, return the number of negative numbers in grid." << endl;
        int rows, cols;
        cout << "Write the number of rows:";
        cin >> rows;
        cout << "Write the number of cols:";
        cin >> cols;
        vector<vector<int>> grid(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Element[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> grid[i][j];
            }
        }

        cout << "The number of negative numbers in a matric is : " << countNegatives(grid) << endl;
        goto restart;
    }
    case (5):
    {
        cout << "Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn]." << endl;
        cout << "Return the array in the form [x1,y1,x2,y2,...,xn,yn]." << endl;
        int elements;
        cout << "Write the number of elements in a array: ";
        cin >> elements;
        int n = elements / 2;
        vector <int> array(elements);
        vector<int > sortedmatrix(elements, n);
        for (int i = 0; i < elements; i++)
        {
            cout << "Element [" << i + 1 << "]: ";
            cin >> array[i];
        }
        cout << "\nThe given vector:\n";
        for (int i = 0; i < elements; i++)
        {
            cout << array[i] << setw(6);
        }
        sortedmatrix = shuffle(array, n);

        cout << "\nThe sorted vector:\n";
        for (int i = 0; i < elements; i++)
        {
            cout << sortedmatrix[i] << setw(6);
        }
        goto restart;

    }
    case (6):
    {
        cout << "Given an array nums." << endl;
        cout << "Return the running sum of nums." << endl;
        int elements;
        cout << "Write the number of elements in a array: ";
        cin >> elements;
        vector <int> array(elements);
        for (int i = 0; i < elements; i++)
        {
            cout << "Element [" << i + 1 << "]: ";
            cin >> array[i];
        }
        cout << "\nThe given vector:\n";
        for (int i = 0; i < elements; i++)
        {
            cout << array[i] << setw(6);
        }
        vector<int > newvector(elements);
        newvector = runningSum(array);
        cout << "\nNew vector:\n";
        for (int i = 0; i < elements; i++)
        {
            cout << newvector[i] << setw(6);
        }
        goto restart;
    }
    case (7):
    {
        cout << "Given an array of integers nums, return the number of good pairs." << endl;
        cout << "A pair (i, j) is called good if nums[i] == nums[j] and i < j." << endl;
        int elements;
        cout << "Write the number of elements in a array: ";
        cin >> elements;
        vector <int> array(elements);
        for (int i = 0; i < elements; i++)
        {
            cout << "Element [" << i + 1 << "]: ";
            cin >> array[i];
        }
        cout << "\nThe given vector:\n";
        for (int i = 0; i < elements; i++)
        {
            cout << array[i] << setw(6);
        }
        int numberofGoodPairs = numIdenticalPairs(array);
        cout << "\n There are " << numberofGoodPairs << " good pairs in the given vector " << endl;
        goto restart;
    }
    case (8):
    {
        cout << "Given a square matrix mat, return the sum of the matrix diagonals." << endl;
        cout << "Only include the sum of all the elements on the primary diagonal \n"
            << "and all the elements on the secondary diagonal that are not part of the primary diagonal." << endl;

        int rows, cols;
        cout << "Write the number of rows:";
        cin >> rows;
        cout << "Write the number of cols:";
        cin >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Element[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
        cout << "\nThe given matrix:\n";

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << setw(6) << matrix[i][j];
            }
            cout << endl;
        }
        cout << endl;
        cout << "Diagonal sum of the given matrix is " << diagonalSum(matrix) << endl;
        goto restart;
    }
    case (9):
    {
        cout << "\nGiven two string arrays word1 and word2,\n"
            << "return true if the two arrays represent the same string, and false otherwise." << endl;
        cout << "\nA string is represented by an array if the array elements concatenated in order forms the string." << endl;
        int elements;
        cout << "\nWrite the number of elements in a array: ";
        cin >> elements;
        vector <string> word1(elements);
        vector <string> word2(elements);
        cout << "Below write the elements for first string array!" << endl;
        for (int i = 0; i < elements; i++)
        {
            cout << "Element[" << i + 1 << "]: ";
            cin >> word1[i];
        }
        cout << "Below write the elements for second string array!" << endl;
        for (int i = 0; i < elements; i++)
        {
            cout << "Element[" << i + 1 << "]: ";
            cin >> word2[i];
        }
        if (arrayStringsAreEqual(word1, word2))
        {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
        goto restart;
    }
    case (10):
    {
        cout << "\nYou are given an m x n integer grid accounts where accounts[i][j] \n"
            << "is the amount of money the i​​​​​​​​​​​-th​​​​ customer has in the j​​​​​​​​​​-th​​​​ bank. " << endl;
        cout << "Return the wealth that the richest customer has." << endl;
        cout << "\nA customer's wealth is the amount of money they have in all their bank accounts.\n"
            << "The richest customer is the customer that has the maximum wealth." << endl;

        int rows, cols;
        cout << "Write the number of rows:";
        cin >> rows;
        cout << "Write the number of cols:";
        cin >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Element[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
        cout << "\nThe given matrix:\n";

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << setw(6) << matrix[i][j];
            }
            cout << endl;
        }
        cout << endl;
        cout << maximumWealth(matrix) << endl;
        goto restart;
    }
    case (11):
    {
        cout << "\nYou own a Goal Parser that can interpret a string command."
            << "The command consists of an alphabet of G, () and/or (al) in some order.";
        cout << "The Goal Parser will interpret G as the string G, () as the string o, and (al) as the string al."
            << "The interpreted strings are then concatenated in the original order." << endl;
        cout << "\nGiven the string command, return the Goal Parser's interpretation of command.\n";
        string command;
        cout << "\ncommand = ";
        cin >> command;
        cout << "Result : " << interpret(command) << endl;
        goto restart;
    }
    case (12):
    {
        cout << "\nGiven an integer array nums of length n, you want to create an array ans"
            << "of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n(0 - indexed).\n";
        cout << "\nSpecifically, ans is the concatenation of two nums arrays.\n";
        cout << "\nReturn the array ans.\n";
        int size;
        cout << "\nEnter the size of the array: ";
        cin >> size;
        int size1 = 2 * size;
        vector <int> nums(size);
        vector <int> nums1(size1);
        for (int i = 0; i < size; i++)
        {
            cout << "Element [" << i + 1 << "]:";
            cin >> nums[i];
        }
        cout << "\n The given array;\n";
        for (int i = 0; i < size; i++)
        {
            cout << setw(6) << nums[i];
        }
        nums1 = getConcatenation(nums);
        cout << "\nthe array created;\n";
        for (int i = 0; i < size1; i++)
        {
            cout << setw(6) << nums1[i];
        }
        cout << endl;
        goto restart;
    }
    case (13):
    {
        cout << "\nThere is a programming language with only four operations and one variable X:\n";
        cout << "\n++X and X++ increments the value of the variable X by 1.\n";
        cout << "--X and X-- decrements the value of the variable X by 1.\n";
        cout << "\nInitially, the value of X is 0.\n";
        cout << "\nGiven an array of strings operations containing a list of operations,"
            << "return the final value of X after performing all the operations.\n";
        int size;
        cout << "\nEnter the size of the array = ";
        cin >> size;
        vector <string> operations(size);
        cout << "\nBellow please enter the elemets of string array (++X,X++,X--,--X)\n";
        for (int i = 0; i < size; i++)
        {
            cout << "Element [" << i + 1 << "]: ";
            cin >> operations[i];
        }
        cout << "Result: " << finalValueAfterOperations(operations) << endl;
        goto restart;
    }
    case (14):
    {
        cout << "\nGiven two integers num1 and num2, return the sum of the two integers.\n";
        int num1, num2;
        cout << "Enter the first value: ";
        cin >> num1;
        cout << "Enter the second value: ";
        cin >> num2;
        cout << "Result:" << num1 << "+" << num2 << "=" << sum(num1, num2) << endl;
        goto restart;
    }
    case (15):
    {
        cout << "\nGiven a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.\n";
        int n;
        cout << "Enter a value: ";
        cin >> n;
        cout << "\nResult: " << smallestEvenMultiple(n) << endl;
        goto restart;
    }
    case (16):
    {
        cout << "\nYou are given a non-negative floating point number rounded to two decimal places celsius,"
            << "that denotes the temperature in Celsius." << endl;
        cout << "\nYou should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].\n";
        cout << "\nReturn the array ans.\n";
        double celsius;
        vector<double> ans(2);
        cout << "Celsius = ";
        cin >> celsius;
        ans = convertTemperature(celsius);
        cout << "[";
        for (int i = 0; i < 2; i++)
        {
            if (i < 1)
            {
                cout << ans[i] << ",";
            }
            else
            {
                cout << ans[i];
            }
        }
        cout << "]";
        goto restart;
    }
    case (17):
    {
        cout << "\n Given a m x n binary matrix mat, "
            << "find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.\n";
        cout << "\nIn case there are multiple rows that have the maximum count of ones,"
            << "the row with the smallest row number should be selected.\n";
        cout << "\nReturn an array containing the index of the row, and the number of ones in it.\n";
        int rows, cols;
        cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of cols: ";
        cin >> cols;
        vector<vector<int>> matrix(rows, vector<int>(cols, 0));
        for (int i = 0; i < rows; i++)
        {

            for (int j = 0; j < cols; j++)
            {
                cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
        cout << "The given matrix;" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << setw(6) << matrix[i][j];
            }
            cout << endl;
        }
        vector<int> result;
        result = rowAndMaximumOnes(matrix);
        cout << "\nResult!\n";
        cout << "\n[";
        for (int i = 0; i < 2; i++)
        {
            if (i < 1)
            {
                cout << result[i] << ",";
            }
            else
            {
                cout << result[i];
            }
        }
        cout << "]";
        goto restart;
    }
    case (18):
    {
        cout << "\nThere are n employees in a company, numbered from 0 to n - 1."
            << "Each employee i has worked for hours[i] hours in the company.\n";
        cout << "\nThe company requires each employee to work for at least target hours.\n";
        cout << "\nYou are given a 0-indexed array of non-negative integers hours of length n and a non-negative integer target.\n";
        cout << "\nReturn the integer denoting the number of employees who worked at least target hours.\n";

        int size, target;
        cout << "Enter the size of array = ";
        cin >> size;
        cout << "Enter a target hours = ";
        cin >> target;
        vector <int> hours(size);
        for (int i = 0; i < size; i++)
        {
            cout << "Element [" << i + 1 << "]:";
            cin >> hours[i];
        }
        cout << "\nThe given array:\n";
        for (int i = 0; i < size; i++)
        {
            cout << setw(6) << hours[i];
        }
        cout << endl;
        cout << "The Number Of Employees Who Met Target is : " << numberOfEmployeesWhoMetTarget(hours, target) << endl;
        goto restart;
    }
    case (19):
    {
        cout << "\nYou are given positive integers n and m.\n";
        cout << "\nDefine two integers, num1 and num2, as follows:\n";
        cout << "\nnum1: The sum of all integers in the range [1, n] that are not divisible by m.";
        cout << "num2: The sum of all integers in the range [1, n] that are divisible by m.\n";
        cout << "\nReturn the integer num1 - num2.\n";
        int num1, num2;
        cout << "\nEnter the first value = ";
        cin >> num1;
        cout << "Enter the second value = ";
        cin >> num2;
        cout << "\nResult : " << differenceOfSums(num1, num2) << endl;
        goto restart;
    }
    case (20):
    {


        cout << "\n\n 7. Find Words Containing Character." << endl;

        cout << "Given an array of string and a character,\nthe program returns the words that contain the requested character and their position on the original array." << endl
            << endl;

        int length;
        cout << "Write the desired amount of words you want to check: ";
        cin >> length;
        char theLetterToFind;
        cout << "\nWrite the letter you are checking for: ";
        cin >> theLetterToFind;

        vector<string> words(length);
        cout << "\nWrite the desired words: \n";
        for (int i = 0; i < words.size(); i++)
        {
            cout << "Word " << i + 1 << ": ";
            cin >> words.at(i);
        }

        for (int i = 0; i < words.size(); i++)
        {
            if (i == 0)
            {
                cout << "\nThe entered words: \n";
                cout << i + 1 << ".\"" << words[i] << "\".\n";
            }
            else
            {
                cout << i + 1 << ".\"" << words[i] << "\".\n";
            }
        }
        cout << endl;

        vector<int> rez = findWordsContaining(words, theLetterToFind);
        int test = 0;
        if (rez.size() != 0)
        {
            cout << "The letter that u are looking for is in positions: ";
            for (int i = 0; i < rez.size(); i++)
            {
                if (test == 0)
                {
                    cout << rez[i] + 1;
                    test++;
                }
                else if (i == rez.size() - 1 && rez.size() - test == 1)
                {
                    cout << "," << rez[i] + 1 << ".";
                    test++;
                }
                else
                {
                    cout << "," << rez[i] + 1;
                    test++;
                }
            }
        }
        goto restart;
    }
    
    
  }


}