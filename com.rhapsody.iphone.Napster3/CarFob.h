//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LockScreenViewController, RHAppDelegateRouter;

@interface CarFob : NSObject
{
    LockScreenViewController *_lockScreenViewController;
}

@property(retain) LockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void).cxx_destruct;
- (void)didConnectToCar;
- (void)unlockScreen;
- (void)lockScreen:(id)arg1;
- (void)lockScreenForFordSync;
- (void)lockScreenForBMW;
- (_Bool)isScreenLocked;
- (void)dealloc;
@property(readonly, nonatomic) RHAppDelegateRouter *appDelegate;

@end

