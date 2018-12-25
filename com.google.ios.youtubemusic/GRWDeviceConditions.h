//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GRWTimeConstraintConditionSet, NSArray;

@interface GRWDeviceConditions : NSObject <NSSecureCoding>
{
    float _minimumBatteryPercentage;
    long long _networkCondition;
    GRWTimeConstraintConditionSet *_timeConditionSet;
    NSArray *_installedAppConditions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) float minimumBatteryPercentage; // @synthesize minimumBatteryPercentage=_minimumBatteryPercentage;
@property(readonly, nonatomic) NSArray *installedAppConditions; // @synthesize installedAppConditions=_installedAppConditions;
@property(readonly, nonatomic) GRWTimeConstraintConditionSet *timeConditionSet; // @synthesize timeConditionSet=_timeConditionSet;
@property(readonly, nonatomic) long long networkCondition; // @synthesize networkCondition=_networkCondition;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDeviceConditions:(id)arg1;
- (id)description;
- (id)stringForNetworkCondition:(long long)arg1;
- (id)initWithNetworkCondition:(long long)arg1 timeConditionSet:(id)arg2 installedAppConditions:(id)arg3 minimumBatteryPercentage:(float)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

