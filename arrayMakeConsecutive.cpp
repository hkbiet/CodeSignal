int makeArrayConsecutive2(std::vector<int> statues) {

    sort(statues.begin(), statues.end());
    for(auto x: statues)
        cout<<x<<"\t";
    int size = statues.size();
    int i = 0;
    int total = 0;
    int diff = 0;

    while(i < size-1){

        diff = statues[i+1] - statues[i];
        cout<<"diff = "<<diff<<endl;
        if(diff > 1){

            total = total + diff - 1;
            diff = 0;
        }
        diff = 0;

        i++;
    }

    return total;
    
    // tested vested
}

