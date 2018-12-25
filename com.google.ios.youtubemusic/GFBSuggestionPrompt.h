//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOModalPresentation-Protocol.h"

@class CALayer, NSString, QTMButton, UILabel;
@protocol GFBSuggestionPromptDelegate;

@interface GFBSuggestionPrompt : UIView <GOOModalPresentation>
{
    UIView *_container;
    UIView *_headerBackground;
    CALayer *_headerBackgroundBorder;
    UILabel *_headerTitle;
    UILabel *_description;
    UILabel *_suggestionTitle;
    UILabel *_suggestionSnippet;
    QTMButton *_dismissButton;
    QTMButton *_readMoreButton;
    id <GFBSuggestionPromptDelegate> _delegate;
}

+ (id)attributedTextWithString:(id)arg1 font:(id)arg2 fontColor:(id)arg3 minimumLineHeight:(double)arg4;
+ (id)attributedSuggestionSnippetText:(id)arg1;
+ (id)attributedSuggestionTitleText:(id)arg1;
+ (id)attributedDescriptionText:(id)arg1;
+ (id)attributedHeaderTitleText:(id)arg1;
@property(nonatomic) __weak id <GFBSuggestionPromptDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapReadMoreButton:(id)arg1;
- (void)didTapDismissButton:(id)arg1;
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (_Bool)shouldDimBackground;
- (void)revealDialog;
- (void)dismissDialog:(_Bool)arg1;
- (void)reposition;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 snippet:(id)arg2;

// Remaining properties
@property(nonatomic) double backgroundDimAlpha;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=shouldPostScreenChangeNotificationOnDismiss) _Bool postScreenChangeNotificationOnDismiss;
@property(readonly) Class superclass;
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal;

@end

