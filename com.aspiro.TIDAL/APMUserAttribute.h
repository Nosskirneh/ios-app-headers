//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMPBUserAttribute, APMValue, NSString;

@interface APMUserAttribute : NSObject
{
    NSString *_origin;
    NSString *_name;
    APMValue *_value;
    double _lastSetTimestamp;
}

@property(readonly, nonatomic) double lastSetTimestamp; // @synthesize lastSetTimestamp=_lastSetTimestamp;
@property(readonly, nonatomic) APMValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
@property(readonly, nonatomic) APMPBUserAttribute *protoUserAttribute;
@property(readonly, nonatomic) _Bool isPublic;
- (id)initWithOrigin:(id)arg1 name:(id)arg2 value:(id)arg3 lastSetTimestamp:(double)arg4;

@end

