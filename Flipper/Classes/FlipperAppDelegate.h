//
//  FlipperAppDelegate.h
//  Flipper
//
//  Created by Toby Boudreaux on 12/29/08.
//  Copyright 2008-2009 Toby Joe Boudreaux. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipperViewController;

@interface FlipperAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    FlipperViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet FlipperViewController *viewController;

@end

