//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, YTILatencyActionInfo;

@interface MDXCSIAction : NSObject
{
    YTILatencyActionInfo *_actionInfo;
    NSMutableArray *_latencyEvents;
}

+ (int)protoTypeFromChannelType:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *latencyEvents; // @synthesize latencyEvents=_latencyEvents;
@property(retain, nonatomic) YTILatencyActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
- (void).cxx_destruct;
- (void)report;
- (void)messageReceived:(id)arg1 onChannel:(long long)arg2;
- (void)messageSent:(id)arg1 onChannel:(long long)arg2;
- (id)init;

@end

