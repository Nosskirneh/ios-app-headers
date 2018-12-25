//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMLatencyLoggerControllerProtocol-Protocol.h"

@class GIMMe, NSString, YTMSearchLatencyTickLogger;

@interface YTMSearchLatencyTickLoggerController : NSObject <YTMLatencyLoggerControllerProtocol>
{
    YTMSearchLatencyTickLogger *_searchLogger;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)logLatencyActionInfo:(id)arg1;
- (_Bool)isActionFinished;
- (void)logLatencyTick:(int)arg1;
- (void)stopLatencyAction;
- (void)startLatencyAction;
@property(readonly, nonatomic) YTMSearchLatencyTickLogger *searchLogger; // @synthesize searchLogger=_searchLogger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

