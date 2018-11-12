//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GlobalLogEvent.h"

@class NSDictionary, NSNumber, NSString;

@interface DZRSampledCollectionLogEvent : GlobalLogEvent
{
    NSString *_channelName;
    NSNumber *_isAllowed;
    NSString *_successKeyString;
    NSNumber *_hasSucceeded;
    NSString *_timeStamp;
    NSDictionary *_content;
}

+ (id)persistedPropertiesNames;
+ (id)filePrefix;
+ (int)logPhase;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) NSNumber *hasSucceeded; // @synthesize hasSucceeded=_hasSucceeded;
@property(copy, nonatomic) NSString *successKeyString; // @synthesize successKeyString=_successKeyString;
@property(retain, nonatomic) NSNumber *isAllowed; // @synthesize isAllowed=_isAllowed;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
- (void).cxx_destruct;
- (id)logContent;
- (_Bool)isVirtualEvent;
- (id)initWithAction:(unsigned long long)arg1 allowed:(_Bool)arg2 success:(_Bool)arg3;

@end
