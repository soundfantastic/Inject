//
//  AppDelegate.m
//  InjectExample
//
//  Created by Dragan Petrovic on 24/09/2014.
//  Copyright (c) 2014 Dragan Petrovic. All rights reserved.
//

#import "AppDelegate.h"
#import <Injection/ObjCInject.h>

@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application
    _codeEditor.font = [NSFont fontWithName:@"Menlo" size:11];
    _codeEditor.automaticQuoteSubstitutionEnabled = NO;
    [_codeEditor setRichText:YES];
    [_codeEditor setUsesRuler:YES];
    [_codeEditor insertText:[ObjCInject main]];
}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}

- (IBAction)injectCompile:(id)sender {
    NSString* sourceCode = _codeEditor.string;
    [_injectNotification setString:@""];
    Notification notification = ^(id object) {
        [_injectNotification insertText:object];
    };
    [ObjCInject code:sourceCode notify:notification];
}

@end
