class Zee
{
    int i;
    mutable int j;
    public:
    Zee(){ i = 0; j = 0;}
    
    void fool() const
    { 
        i++;    // will give error build
        j++;    // works, because j is mutable
    }
    void fool2()
    { 
        j++;
    }
};

int main()
{
    const Zee obj;
    obj.fool();
    obj.fool2(); // error (non-const function)
}
