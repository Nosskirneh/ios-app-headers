//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SSOAuthAdviceEvent : NSObject
{
    long long _type;
    long long _scenario;
    NSString *_packageName;
    NSDate *_date;
}

+ (id)eventTypeValueToStringMap;
+ (id)stringFromEventType:(long long)arg1;
+ (id)eventWithType:(long long)arg1 scenario:(long long)arg2;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(readonly, nonatomic) long long scenario; // @synthesize scenario=_scenario;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)JSONDictionary;
- (id)initWithType:(long long)arg1 scenario:(long long)arg2;

@end

