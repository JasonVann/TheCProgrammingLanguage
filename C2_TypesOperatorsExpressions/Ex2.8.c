int len()
{
    int i;
    unsigned v = (unsigned)~0;
    for (i = 1; (v = v >> 1) > 0; i++)
        ;
    return i;
}

unsigned rightrot(unsigned x, int n)
{
    l = len();
    unsigned rbits;

    if ((n = n % l) > 0){
        rbits = ~(~0 << n) & x;
        rbits = rbits << (l - n);
        x = x >> n;
        x = x | rbits;
    }

    return x;
}

        
            
