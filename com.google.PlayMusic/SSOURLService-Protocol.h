//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SSOIdentity;

@protocol SSOURLService <NSObject>
- (void)requestTokenAuthURLForIdentity:(id <SSOIdentity>)arg1 source:(NSString *)arg2 autoLoginArgs:(NSString *)arg3 callback:(void (^)(NSURL *, NSError *))arg4;
@end

