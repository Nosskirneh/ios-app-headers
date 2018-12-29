//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSDate, NSMutableData, NSMutableDictionary, NSString, NSURLResponse;

@interface SwrveCommonConnectionDelegate : NSObject <NSURLConnectionDataDelegate>
{
    NSDate *startTime;
    NSMutableDictionary *metrics;
    NSMutableData *data;
    NSURLResponse *response;
    CDUnknownBlockType handler;
}

@property(copy) CDUnknownBlockType handler; // @synthesize handler;
@property(retain) NSURLResponse *response; // @synthesize response;
@property(retain) NSMutableData *data; // @synthesize data;
@property(retain) NSMutableDictionary *metrics; // @synthesize metrics;
@property(retain) NSDate *startTime; // @synthesize startTime;
- (void).cxx_destruct;
- (void)addHttpPerformanceMetrics:(id)arg1;
- (id)getTimeIntervalFromStartAsString:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)init:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
