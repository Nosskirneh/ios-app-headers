//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTAdjustUserTrackerProtocol;

@interface SPTLoginForcedOfflineWarningLogger : NSObject
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
}

@property(readonly, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (void)logUserDidTapDismissButton;
- (void)logUserDidTapConnectButton;
- (void)logUserDidSeeForcedOfflineWarningDialog;
- (id)initWithAdjustUserTracker:(id)arg1;

@end

