//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL;

@protocol SPTInAppMessageDataLoader <NSObject>
@property(nonatomic) _Bool devEnabled;
- (void)requestWithURL:(NSURL *)arg1 headers:(NSDictionary *)arg2 completion:(void (^)(NSData *, NSURL *, _Bool))arg3;
@end

