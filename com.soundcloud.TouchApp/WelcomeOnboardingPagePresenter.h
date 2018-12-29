//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SubscriptionOnboardingPagePresenter-Protocol.h"

@class NSString;

@interface WelcomeOnboardingPagePresenter : NSObject <SubscriptionOnboardingPagePresenter>
{
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)presentOnboardingBackground:(id)arg1 animated:(_Bool)arg2;
- (void)presentCell:(id)arg1;
- (void)presentShinyCell:(id)arg1;
- (void)presentCell:(id)arg1 isNewAndShinyOnboardingActive:(_Bool)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
