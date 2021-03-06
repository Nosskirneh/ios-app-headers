//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCClearcutV2AnalyticsService-Protocol.h"
#import "SRLService-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol CCTClearcutLoggerProvider, OS_dispatch_queue;

@interface GSCClearcutV2AnalyticsServiceImpl : NSObject <SRLService, GSCClearcutV2AnalyticsService>
{
    NSString *_userGAIAId;
    id <CCTClearcutLoggerProvider> _clearcutLoggerProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_loggersByLogSource;
}

- (void).cxx_destruct;
- (id)loggerForLogSource:(long long)arg1;
- (void)logWithLogSource:(long long)arg1 logEventUpdateBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccountID:(id)arg1 clearcutLoggerProvider:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

