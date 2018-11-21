//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageTriggerConfigurationsControllerObserver-Protocol.h"

@class NSArray, NSString, SPTInAppMessageTrigger;
@protocol SPTInAppMessageBannerMessagePriorityDeciderDelegate;

@interface SPTInAppMessageBannerMessagePriorityDecider : NSObject <SPTInAppMessageTriggerConfigurationsControllerObserver>
{
    id <SPTInAppMessageBannerMessagePriorityDeciderDelegate> _delegate;
    NSArray *_triggerList;
    SPTInAppMessageTrigger *_matchingBannerTrigger;
}

@property(retain, nonatomic) SPTInAppMessageTrigger *matchingBannerTrigger; // @synthesize matchingBannerTrigger=_matchingBannerTrigger;
@property(copy, nonatomic) NSArray *triggerList; // @synthesize triggerList=_triggerList;
@property(nonatomic) __weak id <SPTInAppMessageBannerMessagePriorityDeciderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)unlockDictionary:(id)arg1;
- (void)triggerConfigurationsController:(id)arg1 didFetchMessage:(id)arg2 forTriggers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

