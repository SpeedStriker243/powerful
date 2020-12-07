#include <iostream>
#include <stdexcept>
using namespace std;

int main(int argc, char* argv[])
{
    int powerfuli; 
    bool powerful;
    bool toopowerful;
    if (argc == 2)
    {
        powerfuli = atoi(argv[1]);
    }
    else if (argc > 2)
    {
        cout << "There can be only one!" << endl;
        return 0;
    }
    else
    {
        cout << "... there's nothing in here (please type '0' or '1' after typing 'powerful')";
        return 0;
    }
    if (powerfuli > 0)
    {
        powerful = true;
        toopowerful = false;
    }
    if (powerfuli < 1)
    {
        powerful = false;
        toopowerful = false;
    }
    if (powerfuli > 1)
    {
        powerful = false;
        toopowerful = true;
    }
    if (powerfuli < 0)
    {
        powerful = false;
        toopowerful = false;
        cout << "error: program confused" << endl;
        return -1;
    }
    if (powerful)
    {
        cout << "I AM THE F*CKING STRONG!" << endl;
    }
    else if (toopowerful)
    {
        cout << "I AM TOO F*CKING STRONG!!" << endl;
    }
    else
    {
        cout << "I AM NOT THE F*CKING STRONG!" << endl;
    }
    return 0;
}
