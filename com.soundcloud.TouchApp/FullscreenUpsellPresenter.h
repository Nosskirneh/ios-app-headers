//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FullscreenUpsellViewModel, _TtC8Payments24GoTermsTextViewPresenter, _TtC8Payments30GoTermsAttributedStringFactory;
@protocol _TtP8Payments20UpsellViewDataSource_;

@interface FullscreenUpsellPresenter : NSObject
{
    id <_TtP8Payments20UpsellViewDataSource_> _dataSource;
    FullscreenUpsellViewModel *_viewModel;
    _TtC8Payments30GoTermsAttributedStringFactory *_termsAttributedStringFactory;
    _TtC8Payments24GoTermsTextViewPresenter *_termsTextViewPresenter;
}

@property(readonly, nonatomic) _TtC8Payments24GoTermsTextViewPresenter *termsTextViewPresenter; // @synthesize termsTextViewPresenter=_termsTextViewPresenter;
@property(readonly, nonatomic) _TtC8Payments30GoTermsAttributedStringFactory *termsAttributedStringFactory; // @synthesize termsAttributedStringFactory=_termsAttributedStringFactory;
@property(retain, nonatomic) FullscreenUpsellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <_TtP8Payments20UpsellViewDataSource_> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)attributedText:(id)arg1 color:(id)arg2 fontSize:(double)arg3 lineSpacing:(double)arg4;
- (void)displayViewMorePlansButtonWithText:(id)arg1;
- (void)setupTermsTextView;
- (void)setupButtons;
- (void)setupLabels;
- (void)setupGradient;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)presentProducts:(id)arg1;
- (void)setupView;
- (void)updateProductViewState:(id)arg1;
- (void)animateLoadingFinishedState;
- (void)animateLoadingState;
- (id)init;

@end

