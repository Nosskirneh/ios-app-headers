//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDApplication, NSArray, NSData, NSDictionary;

@protocol IDApplicationDataSource <NSObject>
- (NSDictionary *)manifestForApplication:(IDApplication *)arg1;

@optional
- (NSArray *)imageDatabasesForApplication:(IDApplication *)arg1;
- (NSArray *)textDatabasesForApplication:(IDApplication *)arg1;
- (NSData *)hmiDescriptionForApplication:(IDApplication *)arg1;
@end
