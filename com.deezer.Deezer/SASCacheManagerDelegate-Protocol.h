//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL;

@protocol SASCacheManagerDelegate <NSObject>
- (void)didFailCachingWithError:(NSError *)arg1;
- (void)didFinishCachingCreativeAtURL:(NSURL *)arg1;
- (void)didFinishCachingFile;
@end
