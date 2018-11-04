//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTransmitting-Protocol.h"

@class BTTracker, NSArray, NSDate, NSMutableArray, NSString;
@protocol BTLogger;

@interface BTScreenTracker : NSObject <BTransmitting>
{
    NSString *_screenId;
    NSString *_userId;
    NSString *_visitId;
    int _sequenceNumber;
    BTTracker *_tracker;
    id <BTLogger> _logger;
    NSDate *_startTime;
    int _duration;
    NSMutableArray *_cloudKeys;
    NSMutableArray *_fragmentQueue;
    NSString *_contentId;
    long long _status;
}

@property(readonly) long long status; // @synthesize status=_status;
@property(retain) NSArray *cloudKeys; // @synthesize cloudKeys=_cloudKeys;
@property(retain) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
- (void)flushFragments;
- (int)duration;
- (void)enqueueFragmentOfType:(id)arg1 withParameters:(id)arg2;
- (void)sendFragmentOfType:(id)arg1 withParameters:(id)arg2;
- (void)connectWithScope:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)annotateWithScope:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)end;
- (void)ping;
- (void)start;
- (_Bool)addCloudKey:(id)arg1;
- (id)initWithContentId:(id)arg1 tracker:(id)arg2;

@end

