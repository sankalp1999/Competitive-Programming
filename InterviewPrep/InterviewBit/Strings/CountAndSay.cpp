/* Simulation question

1 -> 1
Read previous sequence and count number of letters
Then new sequence is the resultant of the combination of "count + letter"

e.g 2 -- >"11"
for 3 --> 2 ones --> "21"
for 4 --> one 2 one 1 --> "1211"
for 5 --> one 1 one 2 two one --> "112111"

*/


string Solution::countAndSay(int A) {

    if(A == 1)return "1";
    else if(A == 2)return "11";
    
    string newer = "11";
    string temp;
    for(int i = 3; i <= A; i++)
    {
        temp.clear();
        temp += newer;
        int k = 0;
        int count = 0;
        char c = temp[0];
        newer.clear();
        while(k < temp.size())
        {
            if(temp[k] == c)
            {
                count++;
                k++;
            }
            else
            {
                newer += to_string(count) + temp[k-1]; // temp[k-1] can be char variable c also.
                c = temp[k];
                count = 0;
            }
            
        }
        // Need to update if suppose I reach end of string.
        if(k == temp.size())
        {
            newer += to_string(count) + temp[k-1];
        }
    }
    
    return newer;
    
}
