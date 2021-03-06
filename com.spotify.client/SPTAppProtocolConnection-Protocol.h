//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTAppProtocolConnectionInput-Protocol.h"

@protocol SPTAppProtocolConnectionDelegate, SPTAppProtocolConnectionOutput;

@protocol SPTAppProtocolConnection <SPTAppProtocolConnectionInput>
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver;
@property(readonly, getter=isOpen) _Bool open;
- (void)close;
- (void)open;
@end

