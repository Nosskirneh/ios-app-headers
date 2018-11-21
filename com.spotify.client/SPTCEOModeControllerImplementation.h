//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContentEngagementOptionsModeController-Protocol.h"

@class NSString;
@protocol SPTContentEngagementOptionsTestManager;

@interface SPTCEOModeControllerImplementation : NSObject <SPTContentEngagementOptionsModeController>
{
    id <SPTContentEngagementOptionsTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTContentEngagementOptionsTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCEOModeEnabled;
@property(readonly, nonatomic) NSString *ceoFeedbackModeIdentifier;
@property(readonly, nonatomic) NSString *ceoDefaultModeIdentifier;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

