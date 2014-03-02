//
//  TOMacros.h
//  FastReader
//
//  Created by Jason Li on 3/2/14.
//  Copyright (c) 2014 TapOrange. All rights reserved.
//

#ifndef FastReader_TOMacros_h
#define FastReader_TOMacros_h

//Instances
#define ApplicationDelegate                 ((MyAppDelegate *)[[UIApplication sharedApplication] delegate])
#define UserDefaults                        [NSUserDefaults standardUserDefaults]
#define SharedApplication                   [UIApplication sharedApplication]
#define Bundle                              [NSBundle mainBundle]
#define MainScreen                          [UIScreen mainScreen]
#define DefaultNotificationCenter           [NSNotificationCenter defaultCenter]
#define NavBar                              self.navigationController.navigationBar
#define TabBar                              self.tabBarController.tabBar

//Colors
#define RGB(r, g, b)                        [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define RGBA(r, g, b, a)                    [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define HEX(val) [UIColor colorWithRed:((float)((val&0xFF0000)>>16))/255.0 green:((float)((val&0xFF00)>>8))/255.0 blue:((float)(val&0xFF))/255.0 alpha:1]

//Device Information
#define UID [[[UIDevice currentDevice] identifierForVendor] UUIDString]
#define isIPad   (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define isIPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define isiPhone5 CGSizeEqualToSize([[UIScreen mainScreen] preferredMode].size,CGSizeMake(640, 1136))

//String Formatting
#define fmt(base,...) [NSString stringWithFormat:base,##__VA_ARGS__]

//Validation
#define isValidString(str) (str && ![str isEqual:[NSNull null]] && str.length > 0)

//Log
#define LOG_EXPR(_X_) do{\
__typeof__(_X_) _Y_ = (_X_);\
const char * _TYPE_CODE_ = @encode(__typeof__(_X_));\
NSString *_STR_ = VTPG_DDToStringFromTypeAndValue(_TYPE_CODE_, &_Y_);\
if(_STR_)\
NSLog(@"%s = %@", #_X_, _STR_);\
else\
NSLog(@"Unknown _TYPE_CODE_: %s for expression %s in function %s, file %s, line %d", _TYPE_CODE_, #_X_, __func__, __FILE__, __LINE__);\
}while(0)

#define LOG_RECT(f)							NSLog(@"x:%f y:%f width:%f height:%f", f.origin.x, f.origin.y, f.size.width, f.size.height)

#endif
