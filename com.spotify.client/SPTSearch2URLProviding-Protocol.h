//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTSearch2URLProviding;

@protocol SPTSearch2URLProviding <NSObject>
@property(readonly, nonatomic) unsigned long long responseFormat;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> nextPageURLProvider;
- (NSURL *)urlForQuery:(NSString *)arg1;
@end

