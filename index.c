int testFor() {  
    int num = 0;
    for (int i = 0; i < 100000000 ; i++) {
        num += 10;
    }
    return num;
}