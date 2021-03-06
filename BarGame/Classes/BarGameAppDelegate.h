//
//  BarGameAppDelegate.h
//  BarGame
//
//  Created by Toby Boudreaux on 12/2/08.
//  Copyright 2008-2009 Toby Joe Boudreaux. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BarGameViewController;

@interface BarGameAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    BarGameViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet BarGameViewController *viewController;

@end

