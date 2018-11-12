//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (Scannables)
+ (id)spt_jsonFormatQueryItem;
+ (id)spt_plainScannablesForEntityURL:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)spt_scannablesGeneratorURLForEntityURL:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)spt_scannablesImageURLForEntityURL:(id)arg1 imageURL:(id)arg2;
+ (id)spt_scannablesUrlForID:(id)arg1;
+ (id)spt_scannablesSearchViewURL;
+ (id)spt_scannablesViewURL;
- (id)spt_scannablesImageURL;
- (id)spt_scannablesEntityURL;
@property(readonly, nonatomic, getter=spt_isSpotifyURL) _Bool spotifyURL;
- (_Bool)spt_isScannablesImageURL;
@property(readonly, nonatomic, getter=spt_isScannablesViewURL) _Bool scannablesViewURL;
@end

