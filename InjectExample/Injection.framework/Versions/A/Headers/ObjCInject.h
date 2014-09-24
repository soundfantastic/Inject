//
//  ObjCInject.h
//  Injection
//
//  Created by Dragan Petrovic on 23/09/2014.
//  Copyright (c) 2014 Dragan Petrovic. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "Common.h"

@interface ObjCInject : NSObject
+ (void) code:(NSString*)code notify:(Notification)notification;
+ (NSString*)main;
@end
