//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLViewControllerPresentable-Protocol.h"

@class NSString, SDLScreenshotViewController, UIViewController, UIWindow;

@interface SDLLockScreenPresenter : NSObject <SDLViewControllerPresentable>
{
    UIViewController *_lockViewController;
    SDLScreenshotViewController *_screenshotViewController;
    UIWindow *_lockWindow;
}

@property(retain, nonatomic) UIWindow *lockWindow; // @synthesize lockWindow=_lockWindow;
@property(retain, nonatomic) SDLScreenshotViewController *screenshotViewController; // @synthesize screenshotViewController=_screenshotViewController;
@property(retain, nonatomic) UIViewController *lockViewController; // @synthesize lockViewController=_lockViewController;
- (void).cxx_destruct;
- (_Bool)sdl_presented;
@property(readonly, nonatomic) _Bool presented;
- (void)dismiss;
- (void)present;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
