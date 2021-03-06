//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOResourceCache, NSError;

@protocol GADOResourceCacheDelegate <NSObject>

@optional
- (void)resourceCache:(GADOResourceCache *)arg1 didFailCachingWithError:(NSError *)arg2;
- (void)resourceCacheDidSucceedCaching:(GADOResourceCache *)arg1;
- (void)resourceCacheDidReceiveData:(GADOResourceCache *)arg1;
- (void)resourceCacheDidReceiveResponse:(GADOResourceCache *)arg1;
- (void)resourceCacheDidStartCaching:(GADOResourceCache *)arg1;
@end

