//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKMessageStrategy.h"

@class NSString;
@protocol MMKInternalSessionDelegate;

@interface MMKAuthorizationRequestStrategy : MMKMessageStrategy
{
    id <MMKInternalSessionDelegate> _sessionDelegate;
    NSString *_playerId;
}

@property(retain, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
@property(nonatomic) __weak id <MMKInternalSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void).cxx_destruct;
- (void)execute:(id)arg1 connection:(id)arg2 sharedSecret:(id)arg3;
- (id)supportedClassString;
- (id)initWithLogger:(id)arg1 playerId:(id)arg2 sessionDelegate:(id)arg3;

@end

