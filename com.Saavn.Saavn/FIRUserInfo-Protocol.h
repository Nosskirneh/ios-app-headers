//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol FIRUserInfo <NSObject>
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, copy, nonatomic) NSString *email;
@property(readonly, copy, nonatomic) NSURL *photoURL;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *uid;
@property(readonly, copy, nonatomic) NSString *providerID;
@end

