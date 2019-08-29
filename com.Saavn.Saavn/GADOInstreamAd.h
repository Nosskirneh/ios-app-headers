//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOAdMediaContent, GADOInstreamAdVideoController, GADOInstreamNativeAd, GADOMediaView, GADONativeAdViewPolicy;

@interface GADOInstreamAd : NSObject
{
    GADOAdMediaContent *_mediaContent;
    GADOMediaView *_mediaView;
    GADOMediaView *_weakMediaView;
    _Bool _used;
    GADOInstreamNativeAd *_nativeAd;
    GADONativeAdViewPolicy *_nativeAdViewPolicy;
    GADOInstreamAdVideoController *_videoController;
}

+ (void)loadAdWithConfiguration:(id)arg1 rootViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GADOInstreamAdVideoController *videoController; // @synthesize videoController=_videoController;
- (void).cxx_destruct;
- (void)presentInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithInstreamNativeAd:(id)arg1;

@end

