//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginFormViewLoggerProtocol-Protocol.h"

@class NSString, SPTLoginErrorLogger;
@protocol SPTAdjustUserTrackerProtocol;

@interface SPTSignupStepThreeViewLogger : NSObject <SPTLoginFormViewLoggerProtocol>
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
    SPTLoginErrorLogger *_errorLogger;
}

@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (long long)adjustIdentifierForFieldWithStringIdentifier:(id)arg1;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(id)arg2;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidInteractWithField:(id)arg1;
- (void)logUserDidSeeView;
- (id)initWithAdjustTracker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

