//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTPerformanceMetricsTransport-Protocol.h"

@class NSString, SPTStartupTracer;

@interface SPTPerformanceMetricsTransportColdStart : NSObject <SPTPerformanceMetricsTransport>
{
    SPTStartupTracer *_startupTracer;
}

@property(retain, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
- (void).cxx_destruct;
- (void)willSendForMessageClass:(Class)arg1;
- (void)send:(id)arg1;
- (id)initWithStartupTracer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

