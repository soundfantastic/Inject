//
//  Injection.h
//  Injection
//
//  Created by Dragan Petrovic on 19/09/2014.
//  Copyright (c) 2014 Dragan Petrovic. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include "CompilerOptions.h"
#include "Common.h"

//! Project version number for Injection.
FOUNDATION_EXPORT double InjectionVersionNumber;

//! Project version string for Injection.
FOUNDATION_EXPORT const unsigned char InjectionVersionString[];

#ifndef __InjectionLib__Injection__
#define __InjectionLib__Injection__

#include <iostream>

@class NSString;

// C++
class CPPInject {
    
public:
    void inject_compile(NSString* sourceCode, CompilerOptions::Compiler compiler=CompilerOptions::_CLANGPP);
    void inject_perform(int argc, const char * argv[]);
    void inject_delete();
    
public:
    Notification notification;
    
public:
    static NSString* default_main();
    
};

#endif /* defined(__InjectionLib__Injection__) */
