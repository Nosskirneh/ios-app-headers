//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRChannelOnboardingLogEvent.h"

@class NSString;

@interface DZRChannelOnboardingSwipeLogEvent : DZRChannelOnboardingLogEvent
{
    NSString *_artistId;
    NSString *_timeStamp;
    long long _actionType;
}

+ (id)logEventWithStep:(long long)arg1 type:(long long)arg2;
+ (id)logEventWithArtistId:(id)arg1 step:(long long)arg2 type:(long long)arg3 payload:(id)arg4;
+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
- (void).cxx_destruct;
- (_Bool)isVirtualEvent;
- (id)logContent;

@end

