#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

int main(int argc, char* argv[])
{
    using boost::multiprecision::cpp_int;

    if (argc != 5)
    {
        cout << "Enter 3 numbers and op " << endl;
        return 1;
    }
    string a(argv[1]);
    string b(argv[2]);
    string c(argv[3]);

    cpp_int ac(a);
    cpp_int bc(b);
    cpp_int cc(c);

/*note for some reason i cannot read the * character from command line*/
    switch (*argv[4])
    {
        case '+':
            cout << ac + bc + cc << endl;
            cout << std::hex << std::showbase << ac + bc + cc << endl;
            break;
        case '-':
            cout << ac - bc -cc<< endl;
            cout << std::hex << std::showbase << ac - bc -cc << endl;
            break;
        case 'X':
            cout << ac * bc * cc<< endl;
            cout << std::hex << std::showbase << ac * bc * cc<< endl;
            break;
         case 'x':
            cout << ac * bc *cc << endl;
            cout << std::hex << std::showbase << ac * bc * cc<< endl;
            break;

        default:
            cout << "unrecognised op character " << endl;
            break;

    }

    return 0;
}

