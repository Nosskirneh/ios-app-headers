//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKButton.h"

#import "FBSDKButtonImpressionTracking.h"
#import "FBSDKSharingButton.h"

@class FBSDKMessageDialog, NSString;

@interface FBSDKSendButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKSharingButton>
{
    FBSDKMessageDialog *_dialog;
}

- (void).cxx_destruct;
- (void)_share:(id)arg1;
- (_Bool)isImplicitlyDisabled;
- (void)configureButton;
- (id)impressionTrackingIdentifier;
- (id)impressionTrackingEventName;
- (id)analyticsParameters;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

