//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRWMessagingEventCounter, NSString;
@protocol GRWEventSignature;

@protocol GRWMessagingEventCounterDelegate <NSObject>
- (void)eventCounter:(GRWMessagingEventCounter *)arg1 didReceiveEvent:(id <GRWEventSignature>)arg2 forAccount:(NSString *)arg3;
@end

