//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInAppBrowserEvent1 : SPTLogMessage
{
    long long _timestampValue;
    NSString *_platformValue;
    NSString *_eventValue;
    NSString *_jsonDataValue;
}

+ (id)messageWithTimestamp:(long long)arg1 platform:(id)arg2 event:(id)arg3 jsonData:(id)arg4;
@property(copy, nonatomic) NSString *jsonDataValue; // @synthesize jsonDataValue=_jsonDataValue;
@property(copy, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(copy, nonatomic) NSString *platformValue; // @synthesize platformValue=_platformValue;
@property(nonatomic) long long timestampValue; // @synthesize timestampValue=_timestampValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

