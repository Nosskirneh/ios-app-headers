//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GADOMIDEventFilter : NSObject
{
    unsigned long long _codes;
    unsigned long long _finalEventCode;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void).cxx_destruct;
- (_Bool)acceptAnyEventWithRequiredEventCodes:(unsigned long long)arg1;
- (_Bool)acceptEventWithCode:(unsigned long long)arg1 blockingEventCodes:(unsigned long long)arg2;
- (_Bool)acceptEventWithCode:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isFinalEventAccepted) _Bool finalEventAccepted;
- (id)initWithFinalEventCode:(unsigned long long)arg1;

@end

