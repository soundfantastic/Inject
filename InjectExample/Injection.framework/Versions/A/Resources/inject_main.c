//
//  Injection framework - Dragan Petrovic @ Polytonic
//  inject_main.c
//  Simple Test code
//  Hit [Code Inject] button to inject code
//  Prints are Logged in XCode window
//  Bugs/Suggestions @ polytonicdev@gmail.com

#include <math.h>

void c_print() { printf("C print\n"); }
void cpp_print() { cout << "C++ print" << endl; }
void objc_print() { NSLog(@"Objective-C print"); }

//C++11
template <class T>
class CPPTest {
public:
    CPPTest(T object) {
        cout << "CPP says: [" << typeid(object).name() << "] is name of input object" << endl;
        auto lambda = []{
            for(int i = 0; i <= 10; ++i) {
                NSLog(@"%f", sin(i*M_PI*2/10));
            }
        };
        lambda();
    }
};

//Objective-C
@interface Test : NSObject
@end
@implementation Test
+ (void) test {
    CPPTest<Test*> cppTest(self);
}
@end

int inject_main(int argc, const char * argv[]) {
    c_print();
    cpp_print();
    objc_print();
    
    id delegate = [NSApplication sharedApplication].delegate;
    CPPTest<id> cppTest(delegate);
    
    [Test test];
    return 0;
}