//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface ABKGeofencesServerConfig : NSObject <NSCoding>
{
    _Bool _enabled;
    _Bool _shouldRequestAuthorization;
    long long _minTimeSinceLastRequest;
    long long _minTimeSinceLastReport;
    long long _maxNumToRegister;
}

@property _Bool shouldRequestAuthorization; // @synthesize shouldRequestAuthorization=_shouldRequestAuthorization;
@property long long maxNumToRegister; // @synthesize maxNumToRegister=_maxNumToRegister;
@property long long minTimeSinceLastReport; // @synthesize minTimeSinceLastReport=_minTimeSinceLastReport;
@property long long minTimeSinceLastRequest; // @synthesize minTimeSinceLastRequest=_minTimeSinceLastRequest;
@property _Bool enabled; // @synthesize enabled=_enabled;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (_Bool)isEqualToGeofencesServerConfig:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

