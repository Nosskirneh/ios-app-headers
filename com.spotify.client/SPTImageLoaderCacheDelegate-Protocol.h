//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTImageLoaderCache, UIImage;

@protocol SPTImageLoaderCacheDelegate <NSObject>
- (void)imageLoaderCache:(SPTImageLoaderCache *)arg1 willEvictImage:(UIImage *)arg2 withURL:(NSURL *)arg3;
@end

