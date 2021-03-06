//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLoadSequenceTransport-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTPerformanceMetricsViewLoadSequenceLogCenterTransport : NSObject <SPTViewLoadSequenceTransport>
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)handleViewLoadSequence:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

