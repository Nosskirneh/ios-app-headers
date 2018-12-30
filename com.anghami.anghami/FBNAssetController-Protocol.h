//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNAssetContentCache, NSDictionary, NSSet, UIView;
@protocol FBNAsset;

@protocol FBNAssetController <NSObject>
- (UIView *)viewForAsset:(id <FBNAsset>)arg1;
- (_Bool)isValidAssetDictionary:(NSDictionary *)arg1;
- (NSSet *)cacheURLsForAssetDictionary:(NSDictionary *)arg1;
- (id <FBNAsset>)assetFromDictionary:(NSDictionary *)arg1 contentCache:(FBNAssetContentCache *)arg2;
@end

