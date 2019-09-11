//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageOutdatedInternalBuild2 : SPTLogMessage
{
    NSString *_severityValue;
    long long _daysOldValue;
    long long _daysRemainingValue;
    NSString *_bundleIdValue;
}

+ (id)messageWithSeverity:(id)arg1 daysOld:(long long)arg2 daysRemaining:(long long)arg3 bundleId:(id)arg4;
@property(copy, nonatomic) NSString *bundleIdValue; // @synthesize bundleIdValue=_bundleIdValue;
@property(nonatomic) long long daysRemainingValue; // @synthesize daysRemainingValue=_daysRemainingValue;
@property(nonatomic) long long daysOldValue; // @synthesize daysOldValue=_daysOldValue;
@property(copy, nonatomic) NSString *severityValue; // @synthesize severityValue=_severityValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

