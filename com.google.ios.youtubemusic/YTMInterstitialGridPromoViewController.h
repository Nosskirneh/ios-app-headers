//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTRendererController-Protocol.h"

@class GIMMe, NSMutableArray, NSString, QTMButton, UIScrollView, UIView, YTIInterstitialGridPromoRenderer, YTImageView, YTMExpandedOfferRestrictionsView, YTMServiceTitleRowView, YTMSpinnableButton, YTMTagManager, YTThumbnailController;
@protocol YTResponder;

@interface YTMInterstitialGridPromoViewController : UIViewController <YTRendererController>
{
    YTImageView *_logoView;
    YTMServiceTitleRowView *_titleRowView;
    NSMutableArray *_itemRowViews;
    YTMSpinnableButton *_actionButton;
    QTMButton *_dismissButton;
    YTThumbnailController *_logoThumbnailController;
    UIScrollView *_scrollView;
    YTMExpandedOfferRestrictionsView *_offerRestrictionsView;
    UIView *_bottomSeparatorView;
    UIView *_basicBand;
    UIView *_premiumBand;
    double _buttonPanelTopY;
    unsigned long long _numFailures;
    YTMTagManager *_tagManager;
    id <YTResponder> _parentResponder;
    YTIInterstitialGridPromoRenderer *_model;
    _Bool _dismissOnVisibility;
    CDUnknownBlockType _dismissCompletion;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)presentErrorMessage;
- (_Bool)isSmallerDevice;
- (_Bool)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAndNavigateToHome;
- (void)layoutScrollableContent;
- (void)hideSpinner;
- (void)showSpinner;
- (void)handlePostTransaction:(id)arg1;
- (void)handleCompleteTransactionEndpoint:(id)arg1;
- (void)presentConfirmationDialog:(id)arg1;
- (void)handleTapForButtonRenderer:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
- (void)didTapDismissButton;
- (void)didTapActionButton;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)loadWithModel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
