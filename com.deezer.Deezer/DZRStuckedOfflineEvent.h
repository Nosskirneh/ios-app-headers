//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSString;

@interface DZRStuckedOfflineEvent : DeezerLogEvent
{
    NSString *_testResult;
    NSString *_details;
}

+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(retain, nonatomic) NSString *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *testResult; // @synthesize testResult=_testResult;
- (void).cxx_destruct;
- (id)dictionary;

@end
