//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlurryPulseCBDataSenderDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FlurryPulseCallbackReportManager : NSObject <FlurryPulseCBDataSenderDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_triggers;
    unsigned long long _totalAttemptCount;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long totalAttemptCount; // @synthesize totalAttemptCount=_totalAttemptCount;
@property(retain) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)callbackStatusDataForReports:(id)arg1;
- (void)sendCallBackInfoToServer;
- (void)checkAndSendReportsToServer;
- (id)dataForSending:(id)arg1;
- (id)reportsFilePath;
- (id)savedTriggers;
- (_Bool)addToSavedTriggers:(id)arg1;
- (void)setSavedTriggers:(id)arg1;
- (void)updateTotalAttemptsCount:(id)arg1;
- (void)performArchiveAttempt:(id)arg1;
- (void)archiveAttempt:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
