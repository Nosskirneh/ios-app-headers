//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIRLifecycleEvents : NSObject
{
    NSString *_setExperimentEventName;
    NSString *_activateExperimentEventName;
    NSString *_clearExperimentEventName;
    NSString *_timeoutExperimentEventName;
    NSString *_expireExperimentEventName;
}

@property(copy, nonatomic) NSString *expireExperimentEventName; // @synthesize expireExperimentEventName=_expireExperimentEventName;
@property(copy, nonatomic) NSString *timeoutExperimentEventName; // @synthesize timeoutExperimentEventName=_timeoutExperimentEventName;
@property(copy, nonatomic) NSString *clearExperimentEventName; // @synthesize clearExperimentEventName=_clearExperimentEventName;
@property(copy, nonatomic) NSString *activateExperimentEventName; // @synthesize activateExperimentEventName=_activateExperimentEventName;
@property(copy, nonatomic) NSString *setExperimentEventName; // @synthesize setExperimentEventName=_setExperimentEventName;
- (void).cxx_destruct;
- (id)init;

@end
