
//Выбрать все возможные варианты опр Tech, при которых j = 20
// У class по умолчанию секции private

class Tech
{
    int j;
public:
    Tech (int y)
    {
        j = y;
    }
};

int main()
{
    //Tech ob.j = 20; -
    //Tech ob (20); +
    //Tech ob = 20; +
    //Tech ob.y = 20; -
    //Tech ob = Tech (20); +
    

    return 0;
}