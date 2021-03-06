//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, UAJSONPredicate;

@interface UAScheduleTrigger : NSObject
{
    long long _type;
    NSNumber *_goal;
    UAJSONPredicate *_predicate;
}

+ (id)triggerWithJSON:(id)arg1 error:(id *)arg2;
+ (id)customEventTriggerWithPredicate:(id)arg1 value:(id)arg2;
+ (id)customEventTriggerWithPredicate:(id)arg1 count:(unsigned long long)arg2;
+ (id)screenTriggerForScreenName:(id)arg1 count:(unsigned long long)arg2;
+ (id)regionExitTriggerForRegionID:(id)arg1 count:(unsigned long long)arg2;
+ (id)regionEnterTriggerForRegionID:(id)arg1 count:(unsigned long long)arg2;
+ (id)backgroundTriggerWithCount:(unsigned long long)arg1;
+ (id)foregroundTriggerWithCount:(unsigned long long)arg1;
+ (id)appInitTriggerWithCount:(unsigned long long)arg1;
+ (id)triggerWithType:(long long)arg1 goal:(id)arg2 predicate:(id)arg3;
@property(retain, nonatomic) UAJSONPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) NSNumber *goal; // @synthesize goal=_goal;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTrigger:(id)arg1;
- (id)initWithType:(long long)arg1 goal:(id)arg2 predicate:(id)arg3;

@end

