//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageABTesting1 : SPTLogMessage
{
    NSString *_testNameValue;
    NSString *_groupNameValue;
}

+ (id)messageWithTestName:(id)arg1 groupName:(id)arg2;
@property(copy, nonatomic) NSString *groupNameValue; // @synthesize groupNameValue=_groupNameValue;
@property(copy, nonatomic) NSString *testNameValue; // @synthesize testNameValue=_testNameValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

