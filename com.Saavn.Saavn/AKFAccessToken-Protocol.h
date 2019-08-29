//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@protocol AKFAccessToken <NSObject, NSCopying, NSSecureCoding>
@property(readonly, copy, nonatomic) NSString *tokenString;
@property(readonly, nonatomic) double tokenRefreshInterval;
@property(readonly, copy, nonatomic) NSDate *lastRefresh;
@property(readonly, copy, nonatomic) NSString *applicationID;
@property(readonly, copy, nonatomic) NSString *accountID;
@end

