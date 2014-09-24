//
//  AppDelegate.h
//  InjectExample
//
//  Created by Dragan Petrovic on 24/09/2014.
//  Copyright (c) 2014 Dragan Petrovic. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSTextViewDelegate>
@property (unsafe_unretained) IBOutlet NSTextView *codeEditor;
@property (unsafe_unretained) IBOutlet NSTextView *injectNotification;
- (IBAction)injectCompile:(id)sender;
@end

