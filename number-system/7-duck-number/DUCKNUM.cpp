
bool check_duck(string N) {
    int i = 0;
    while (i < N.size() && N[i] == '0') i++;
    for (; i < N.size(); ++i) {
        if (N[i] == '0') return true;
    }
    return false;
}