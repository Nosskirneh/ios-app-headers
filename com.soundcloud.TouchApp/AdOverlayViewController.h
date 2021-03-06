//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AdClickUrlService, AdOverlayImpressionObserver, AdOverlayPresenter, NSLayoutConstraint, SCLMoatNativeDisplayTracker, UIButton, UIImage, VisualAd, _TtC10SoundCloud7Version;
@protocol AdOverlayViewControllerDelegate, _TtP8Features18PlayQueueItemTrack_;

@interface AdOverlayViewController : UIViewController
{
    NSLayoutConstraint *_safeAreaTopHeightConstraint;
    NSLayoutConstraint *_safeAreaBottomHeightConstraint;
    id <AdOverlayViewControllerDelegate> _delegate;
    AdOverlayPresenter *_presenter;
    UIButton *_openButton;
    UIButton *_dismissButton;
    NSLayoutConstraint *_closeButtonTopInsetConstraint;
    VisualAd *_adOverlay;
    UIImage *_adImage;
    id <_TtP8Features18PlayQueueItemTrack_> _monetizedTrack;
    AdClickUrlService *_adClickUrlService;
    AdOverlayImpressionObserver *_impressionObserver;
    SCLMoatNativeDisplayTracker *_viewabilityTracker;
    _TtC10SoundCloud7Version *_version;
}

@property(retain, nonatomic) _TtC10SoundCloud7Version *version; // @synthesize version=_version;
@property(retain, nonatomic) SCLMoatNativeDisplayTracker *viewabilityTracker; // @synthesize viewabilityTracker=_viewabilityTracker;
@property(retain, nonatomic) AdOverlayImpressionObserver *impressionObserver; // @synthesize impressionObserver=_impressionObserver;
@property(retain, nonatomic) AdClickUrlService *adClickUrlService; // @synthesize adClickUrlService=_adClickUrlService;
@property(retain, nonatomic) id <_TtP8Features18PlayQueueItemTrack_> monetizedTrack; // @synthesize monetizedTrack=_monetizedTrack;
@property(retain, nonatomic) UIImage *adImage; // @synthesize adImage=_adImage;
@property(retain, nonatomic) VisualAd *adOverlay; // @synthesize adOverlay=_adOverlay;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonTopInsetConstraint; // @synthesize closeButtonTopInsetConstraint=_closeButtonTopInsetConstraint;
@property(nonatomic) __weak UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) AdOverlayPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <AdOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSLayoutConstraint *safeAreaBottomHeightConstraint; // @synthesize safeAreaBottomHeightConstraint=_safeAreaBottomHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *safeAreaTopHeightConstraint; // @synthesize safeAreaTopHeightConstraint=_safeAreaTopHeightConstraint;
- (void).cxx_destruct;
- (void)dismissOverlay;
- (void)presentAdOverlay:(id)arg1 adImage:(id)arg2 monetizedTrack:(id)arg3;
- (void)setupAdClickUrlServiceWithOverlay:(id)arg1;
- (void)setTopInset:(double)arg1;
- (void)setupAdOverlay:(id)arg1 adImage:(id)arg2 monetizedTrack:(id)arg3 impressionObserver:(id)arg4;
- (void)openAdButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)trackerWithAdIds:(id)arg1;
- (void)viewDidLoad;

@end

