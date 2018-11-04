//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FNFAssetResourceLoader, NSArray, NSString;

@protocol FNFAVAsset <NSObject>
- (NSArray *)tracksWithMediaType:(NSString *)arg1;
- (void)cancelLoading;
- (NSString *)resourceHost;
- (NSString *)audioCodec;
- (NSString *)audioContainerFormat;
- (NSString *)videoContainerFormat;
- (FNFAssetResourceLoader *)resourceLoader;
- (struct CGSize)naturalSize;
- (CDStruct_1b6d18a9)duration;
- (long long)statusOfValueForKey:(NSString *)arg1 error:(id *)arg2;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg1 completionHandler:(void (^)(void))arg2;
@end

