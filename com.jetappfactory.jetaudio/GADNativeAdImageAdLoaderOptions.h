//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADAdLoaderOptions.h"

@interface GADNativeAdImageAdLoaderOptions : GADAdLoaderOptions
{
    _Bool _disableImageLoading;
    _Bool _shouldRequestMultipleImages;
    long long _preferredImageOrientation;
}

@property(nonatomic) long long preferredImageOrientation; // @synthesize preferredImageOrientation=_preferredImageOrientation;
@property(nonatomic) _Bool shouldRequestMultipleImages; // @synthesize shouldRequestMultipleImages=_shouldRequestMultipleImages;
@property(nonatomic) _Bool disableImageLoading; // @synthesize disableImageLoading=_disableImageLoading;
- (id)requestParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

