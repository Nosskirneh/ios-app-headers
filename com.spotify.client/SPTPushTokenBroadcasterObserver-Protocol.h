//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol SPTPushTokenBroadcaster;

@protocol SPTPushTokenBroadcasterObserver <NSObject>
- (void)pushTokenBroadcaster:(id <SPTPushTokenBroadcaster>)arg1 trackEvent:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)pushTokenBroadcaster:(id <SPTPushTokenBroadcaster>)arg1 didUpdateToken:(NSData *)arg2;
@end

