//
//  ConvertMedia.h
//  myPushApp
//
//  Created by LEIBI on 7/22/15.
//
//

/*#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVInvokeUrlCommand.h>
#import <Foundation/Foundation.h>*/
#import <Cordova/CDV.h>

@interface ConvertMedia : CDVPlugin //<UIAlertViewDelegate> {}

//-(void) wmaToAmr: (CDVInvokedUrlCommand*) command;
//-(void) amrToWma: (CDVInvokedUrlCommand*) command;

- (void) greet:(CDVInvokedUrlCommand*)command;


@end

//@interface MyAlertView : UIAlertView {}
//
//@property (nonatomic, copy) NSString* callbackId;
//
//@end


