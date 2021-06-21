#import <Cordova/CDV.h>

@interface HelloCPlugin : CDVPlugin

- (void) pluginInitialize;
- (void) hello:(CDVInvokedUrlCommand*)command;
- (void) getArch:(CDVInvokedUrlCommand*)command;
- (void) calculate:(CDVInvokedUrlCommand*)command;
- (void) causeCrash:(CDVInvokedUrlCommand*)command;

@end
