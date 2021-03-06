//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SASNativeVideoBannerViewController.h"

#import "SASNativeVideoContainerBannerStickyDelegate-Protocol.h"

@class NSString, UIView;

@interface SASNativeVideoBannerStickyViewController : SASNativeVideoBannerViewController <SASNativeVideoContainerBannerStickyDelegate>
{
    _Bool _bannerIsStuckToTop;
    UIView *_originalTargetDisplayView;
}

@property(nonatomic) __weak UIView *originalTargetDisplayView; // @synthesize originalTargetDisplayView=_originalTargetDisplayView;
@property _Bool bannerIsStuckToTop; // @synthesize bannerIsStuckToTop=_bannerIsStuckToTop;
- (void).cxx_destruct;
- (_Bool)nativeVideoContainerBannerStickyAskCanStickToTop:(id)arg1;
- (void)nativeVideoContainerBannerSticky:(id)arg1 didUnstickFromTopWithFrame:(struct CGRect)arg2;
- (void)nativeVideoContainerBannerSticky:(id)arg1 didStickToTopWithFrame:(struct CGRect)arg2;
- (void)playerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)playerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)initializeContainerView;
- (void)resetPlayback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

