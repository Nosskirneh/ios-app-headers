//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTFacebookSDK <NSObject>
- (void)requestFacebookUserIdentifierForAccessToken:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestFacebookAccessToken:(void (^)(NSString *, NSError *))arg1;
@end

