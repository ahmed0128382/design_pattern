class counter
{
private:

    static counter *instance;
    counter(){}
public:
    counter(const counter& obj) = delete;
    int count=0;


    static counter* GetInstance()
    {
        if(nullptr == instance) instance = new counter();
        return instance;
    }
    void addOne()
    {
    count++;
    }

    
    
};

