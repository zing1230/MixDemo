//
//  AppDelegate.h
//  MixDemo2
//
//  Created by Sidney on 14-6-9.
//  Copyright (c) 2014年 iSoftstone infomation Technology (Group) Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>




/*
 参考https://developer.apple.com/library/prerelease/ios/documentation/Swift/Conceptual/BuildingCocoaApps/MixandMatch.html#//apple_ref/doc/uid/TP40014216-CH10-XID_75
 注意
 1.确保将框架 target 的  Build Settings > Packaging > Defines Module  设置为  Yes
 2.#import "ProductModuleName-Swift.h" 中的ProductModuleName也需要设置.修改在 build setting  中的  Product Module Name , 然后系统会自动给Swift文件生成一个头文件.
*/


#import "ProductModuleName-Swift.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navController;
@property (strong, nonatomic) RootViewController *rootViewCtrller;


@end

