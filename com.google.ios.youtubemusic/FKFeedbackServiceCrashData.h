//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FKFeedbackServiceCrashData : NSObject
{
    NSString *_exceptionName;
    NSString *_exceptionMessage;
    long long _signal;
    NSString *_stackTrace;
}

@property(copy, nonatomic) NSString *stackTrace; // @synthesize stackTrace=_stackTrace;
@property(nonatomic) long long signal; // @synthesize signal=_signal;
@property(copy, nonatomic) NSString *exceptionMessage; // @synthesize exceptionMessage=_exceptionMessage;
@property(copy, nonatomic) NSString *exceptionName; // @synthesize exceptionName=_exceptionName;
- (void).cxx_destruct;
- (id)initWithSignal:(long long)arg1 stackTrace:(id)arg2;
- (id)initWithException:(id)arg1;

@end
