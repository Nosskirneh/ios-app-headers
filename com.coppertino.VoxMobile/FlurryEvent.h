//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class FlurryTransaction, NSDate, NSDictionary, NSNumber, NSString;

@interface FlurryEvent : NSObject <NSCoding>
{
    NSString *_name;
    NSDate *_started;
    NSDate *_ended;
    _Bool _timed;
    _Bool _automaticallyEnded;
    NSDictionary *_parameters;
    NSNumber *_eventLogId;
    FlurryTransaction *_transaction;
}

@property(retain, nonatomic) FlurryTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSNumber *eventLogId; // @synthesize eventLogId=_eventLogId;
@property(nonatomic) _Bool automaticallyEnded; // @synthesize automaticallyEnded=_automaticallyEnded;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool timed; // @synthesize timed=_timed;
@property(retain, nonatomic) NSDate *ended; // @synthesize ended=_ended;
@property(retain, nonatomic) NSDate *started; // @synthesize started=_started;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dataRelativeToSessionStart:(id)arg1;
- (long long)duration;
- (long long)startOffsetFromSessionStart:(id)arg1;
- (_Bool)isRevenue;
- (_Bool)isUnterminated;
- (void)encodeWithCoder:(id)arg1;
- (void)updateParameters:(id)arg1;
- (void)updateID;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 eventLogID:(id)arg2 timed:(_Bool)arg3 parameters:(id)arg4 started:(id)arg5 ended:(id)arg6 automaticallyEnded:(_Bool)arg7 transaction:(id)arg8;
- (id)initWithName:(id)arg1 timed:(_Bool)arg2 parameters:(id)arg3 transaction:(id)arg4;
- (id)initWithName:(id)arg1 timed:(_Bool)arg2 parameters:(id)arg3;
- (id)initWithName:(id)arg1 timed:(_Bool)arg2;
- (id)initWithName:(id)arg1;

@end

