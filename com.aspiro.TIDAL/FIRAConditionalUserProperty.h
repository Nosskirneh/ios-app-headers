//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FIRAEvent, FIRAValue, NSString;

@interface FIRAConditionalUserProperty : NSObject <NSCopying>
{
    _Bool _active;
    NSString *_name;
    NSString *_origin;
    FIRAValue *_value;
    NSString *_triggerEventName;
    double _triggerTimeout;
    double _timeToLive;
    FIRAEvent *_triggeredEvent;
    FIRAEvent *_timedOutEvent;
    FIRAEvent *_expiredEvent;
    double _creationTimestamp;
    double _triggeredTimestamp;
}

@property(nonatomic) double triggeredTimestamp; // @synthesize triggeredTimestamp=_triggeredTimestamp;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic) FIRAEvent *expiredEvent; // @synthesize expiredEvent=_expiredEvent;
@property(copy, nonatomic) FIRAEvent *timedOutEvent; // @synthesize timedOutEvent=_timedOutEvent;
@property(copy, nonatomic) FIRAEvent *triggeredEvent; // @synthesize triggeredEvent=_triggeredEvent;
@property(nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(nonatomic) double triggerTimeout; // @synthesize triggerTimeout=_triggerTimeout;
@property(copy, nonatomic) NSString *triggerEventName; // @synthesize triggerEventName=_triggerEventName;
@property(copy, nonatomic) FIRAValue *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

