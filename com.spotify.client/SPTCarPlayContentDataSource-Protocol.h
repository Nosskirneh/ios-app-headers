//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SPTCarPlayContentDataSource <NSObject>
@property(readonly, nonatomic) __weak NSArray *rootItemURIs;
- (void)fetchRootItemURIsWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
@end

