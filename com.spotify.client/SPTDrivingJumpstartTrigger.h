//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDrivingStateObserver.h"

@class NSString, UIApplication;

@interface SPTDrivingJumpstartTrigger : NSObject <SPTDrivingStateObserver>
{
    id <SPTDrivingJumpstartHandler> _jumpstartHandler;
    UIApplication *_application;
}

@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <SPTDrivingJumpstartHandler> jumpstartHandler; // @synthesize jumpstartHandler=_jumpstartHandler;
- (void).cxx_destruct;
- (void)drivingStateDetector:(id)arg1 drivingStateDidChange:(id)arg2;
- (id)initWithJumpstartHandler:(id)arg1 application:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
