//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAppFocusState1 : SPTLogMessage
{
    NSString *_stateValue;
    long long _timestampValue;
}

+ (id)messageWithState:(id)arg1 timestamp:(long long)arg2;
@property(nonatomic) long long timestampValue; // @synthesize timestampValue=_timestampValue;
@property(retain, nonatomic) NSString *stateValue; // @synthesize stateValue=_stateValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

