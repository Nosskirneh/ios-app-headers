//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDrivingModeController.h"
#import "SPTDrivingStateObserver.h"

@class NSString;

@interface SPTDrivingModeControllerImplementation : NSObject <SPTDrivingModeController, SPTDrivingStateObserver>
{
    _Bool drivingModeEnabled;
    id <SPTDrivingModeControllerDelegate> delegate;
}

@property(nonatomic) __weak id <SPTDrivingModeControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool drivingModeEnabled; // @synthesize drivingModeEnabled;
- (void).cxx_destruct;
- (void)drivingStateDetector:(id)arg1 drivingStateDidChange:(id)arg2;
@property(readonly, nonatomic) NSString *drivingModeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
