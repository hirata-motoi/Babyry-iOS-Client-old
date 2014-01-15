//
//  AppDelegate.h
//  babyry-client
//
//  Created by Kosuke Takami on 2014/01/14.
//  Copyright (c) 2014年 Kosuke Takami. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "MainViewController.h"
@class MainViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (retain, nonatomic) MainViewController *mainViewController;

@end
