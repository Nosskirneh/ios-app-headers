//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRWMessagingImpressionCounter, GRWUserAccounts, NSString;

@protocol GRWMessageFetcher <NSObject>
@property(readonly, getter=isFetching) _Bool fetching;
- (void)fetchMessagesWithCompletion:(void (^)(struct NSDictionary *, NSArray *, NSError *))arg1;
- (id)initWithAPIKey:(NSString *)arg1 userAccounts:(GRWUserAccounts *)arg2 impressionCounter:(GRWMessagingImpressionCounter *)arg3;
@end

