#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
…		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};

int Server::load = 0;
int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
    

		 try 
        {
            cout << Server::compute(A, B) << endl;
        } 
        catch (std::bad_alloc& error) 
        {
            cout << "Not enough memory" << endl;
        }
        catch (std::exception& error) 
        {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) 
        {
            cout << "Other Exception" << endl;
        }

    }
	cout << Server::getLoad() << endl;
	return 0;
}
