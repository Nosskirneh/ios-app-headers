//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol SPTViewLoadSequence <NSObject>
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) NSDictionary *steps;
@property(readonly, nonatomic) long long terminalConnectionType;
@property(readonly, nonatomic) long long initialConnectionType;
@property(readonly, nonatomic) long long terminalState;
@property(readonly, nonatomic) NSString *uri;
@property(readonly, nonatomic) NSString *pageId;
@property(readonly, nonatomic) NSString *sequenceId;
@end

