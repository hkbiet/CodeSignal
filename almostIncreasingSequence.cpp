bool almostIncreasingSequence(std::vector<int> sequence) {
/*
if(is_sorted(sequence.begin(), sequence.end())){
        return true;tested here 
        }
  */  
    int max = INT_MIN;
    int secondMax  = INT_MIN;
    int count = 0;
    int i = 0;

        
    while(i < sequence.size()){
        if(sequence[i] > max){
            cout<<"normal seq seq["<<i<<"] > max("<<max<<")"<<endl;
            secondMax = max;
            max = sequence[i];
            cout<<" --normal.. after swaps secondmax = "<<secondMax<<" max ="<<sequence[i]<<endl;
            
        }else if(sequence[i] > secondMax){
            cout<<"seq["<<i<<"] >"<<secondMax<<endl;
            max = sequence[i];
            count++;
            cout<<"count after increase = "<<count<<endl;
        }else {count++; cout<<"ELSE count++ = "<<count<<endl;}


        i++;
    }
   
   return count <= 1;
               // tested

}

