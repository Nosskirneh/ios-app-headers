//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FIRAPBEvent, NSDictionary, NSMutableDictionary, NSString;

@interface FIRAEvent : NSObject <NSCopying>
{
    NSMutableDictionary *_parameters;
    NSString *_origin;
    NSString *_name;
    double _timestamp;
    double _previousTimestamp;
}

+ (_Bool)isValidParameterKey:(id)arg1 isPublicEvent:(_Bool)arg2 errorParameters:(id)arg3;
+ (id)normalizedParametersForParameters:(id)arg1 isPublicEvent:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) double previousTimestamp; // @synthesize previousTimestamp=_previousTimestamp;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) FIRAPBEvent *protoEvent;
- (_Bool)addScreenParameters:(id)arg1;
@property(nonatomic, getter=isDebug) _Bool debug;
@property(nonatomic, getter=isRealtime) _Bool realtime;
@property(nonatomic, getter=isConversion) _Bool conversion;
- (id)copyWithParameters:(id)arg1;
- (id)copyWithPreviousTimestamp:(double)arg1;
- (id)initWithOrigin:(id)arg1 isPublic:(_Bool)arg2 name:(id)arg3 timestamp:(double)arg4 previousTimestamp:(double)arg5 parameters:(id)arg6;
- (id)initWithEventProto:(id)arg1;

@end

