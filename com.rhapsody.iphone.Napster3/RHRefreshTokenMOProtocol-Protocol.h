//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;

@protocol RHRefreshTokenMOProtocol <NSObject>
@property(retain, nonatomic) NSDate *lastRefreshedAt;
@property(retain, nonatomic) NSDate *lastFailedAt;
@property(retain, nonatomic) NSString *guid;
@end

