//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, NSUUID, PRMEventName;
@protocol PRMTransmitter;

@protocol PRMManager <NSObject>
@property(readonly, nonatomic) NSUUID *launchID;
- (void)collectType:(unsigned long long)arg1 onEventWithEventName:(PRMEventName *)arg2;
- (void)stopCollectingType:(unsigned long long)arg1 onEventWithEventName:(PRMEventName *)arg2;
- (void)startCollectingType:(unsigned long long)arg1 onEventWithEventName:(PRMEventName *)arg2;
- (void)collectType:(unsigned long long)arg1 onEventWithName:(NSString *)arg2;
- (void)stopCollectingType:(unsigned long long)arg1 onEventWithName:(NSString *)arg2;
- (void)startCollectingType:(unsigned long long)arg1 onEventWithName:(NSString *)arg2;
- (void)addTransmitter:(NSObject<PRMTransmitter> *)arg1;
- (void)launch;
@end

