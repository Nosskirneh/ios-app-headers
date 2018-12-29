//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMAudioAdSessionConfig : NSObject
{
    long long _sessionWindowStartTimeMillis;
    long long _sessionWindowEndTimeMillis;
    long long _firstAdOffsetTimeMillis;
    long long _timeBetweenAudioAdsMillis;
}

@property(readonly, nonatomic) long long timeBetweenAudioAdsMillis; // @synthesize timeBetweenAudioAdsMillis=_timeBetweenAudioAdsMillis;
@property(readonly, nonatomic) long long firstAdOffsetTimeMillis; // @synthesize firstAdOffsetTimeMillis=_firstAdOffsetTimeMillis;
@property(readonly, nonatomic) long long sessionWindowEndTimeMillis; // @synthesize sessionWindowEndTimeMillis=_sessionWindowEndTimeMillis;
@property(readonly, nonatomic) long long sessionWindowStartTimeMillis; // @synthesize sessionWindowStartTimeMillis=_sessionWindowStartTimeMillis;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSessionTimeInSessionWindow:(long long)arg1;
- (_Bool)isValidConfiguration;
- (id)initWithSessionWindowStartTime:(long long)arg1 sessionWindowEndTime:(long long)arg2 firstAdOffsetTime:(long long)arg3 timeBetweenAudioAds:(long long)arg4;

@end
