int euler5 () {
    int i = 0;
    bool found = false;
    do {
        i += 20;
        found = true;
        for (int divisor = 19; divisor >= 11; --divisor) {
            if (i % divisor != 0) {
                found = false;
                break;
            }
        }
    } while (!found);
    return i;
}
