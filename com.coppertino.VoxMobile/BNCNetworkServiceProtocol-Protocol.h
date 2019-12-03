//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSMutableURLRequest;
@protocol BNCNetworkOperationProtocol, BNCNetworkServiceProtocol;

@protocol BNCNetworkServiceProtocol <NSObject>
+ (id <BNCNetworkServiceProtocol>)new;
@property(retain) NSDictionary *userInfo;
- (id <BNCNetworkOperationProtocol>)networkOperationWithURLRequest:(NSMutableURLRequest *)arg1 completion:(void (^)(id <BNCNetworkOperationProtocol>))arg2;

@optional
- (NSError *)pinSessionToPublicSecKeyRefs:(NSArray *)arg1;
- (void)cancelAllOperations;
@end
