//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNMediaContentDisplaying-Protocol.h"

@class GADNAdVideoController, GADNNativeAdImage, NSString, UIImageView, UIView;
@protocol GADNVideoControlling;

@interface GADNMediatedMediaContent : NSObject <GADNMediaContentDisplaying>
{
    id _mediatedNativeAd;
    GADNAdVideoController *_videoController;
    GADNNativeAdImage *_mainImage;
    // Error parsing type: Ad, name: _mainImageAspectRatio
    UIImageView *_mainImageView;
}

@property(retain, nonatomic) GADNNativeAdImage *mainImage; // @synthesize mainImage=_mainImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) id <GADNVideoControlling> videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) UIView *mediaView;
- (id)initWithMediatedNativeAd:(id)arg1 mainImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

