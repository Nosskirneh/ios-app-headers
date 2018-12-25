//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWAResultingComponent-Protocol.h"

@class GWAImageWithCaptionView, GWAInfoMessageView, GWAInkDelegate, MDCInkTouchController, NSLayoutConstraint, NSString, OAStackView, QTMColorGroup, UIImageView, UILabel;
@protocol GWASelectorOptionDelegate;

@interface GWASelectorOptionView : UIView <GWAResultingComponent>
{
    MDCInkTouchController *_inkTouchController;
    GWAInkDelegate *_inkDelegate;
    UIView *_dividerView;
    UILabel *_title;
    UILabel *_subtitle;
    UILabel *_warningLabel;
    UIImageView *_leftImageView;
    GWAImageWithCaptionView *_iconImageView;
    UIImageView *_rightImageView;
    GWAImageWithCaptionView *_rightImageWithCaptionView;
    GWAInfoMessageView *_descriptionInfoMessageView;
    OAStackView *_mainStackView;
    OAStackView *_textStackView;
    NSLayoutConstraint *_minimumHeightConstraint;
    _Bool _selected;
    _Bool _showExpandIcon;
    _Bool _showDivider;
    _Bool _expanded;
    _Bool _enabled;
    _Bool _inkEnabled;
    _Bool _selectedIconRightAligned;
    id _option;
    QTMColorGroup *_colorGroup;
    id <GWASelectorOptionDelegate> _delegate;
}

@property(nonatomic, getter=isSelectedIconRightAligned) _Bool selectedIconRightAligned; // @synthesize selectedIconRightAligned=_selectedIconRightAligned;
@property(nonatomic, getter=isInkEnabled) _Bool inkEnabled; // @synthesize inkEnabled=_inkEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=shouldShowDivider) _Bool showDivider; // @synthesize showDivider=_showDivider;
@property(nonatomic, getter=shouldShowExpandIcon) _Bool showExpandIcon; // @synthesize showExpandIcon=_showExpandIcon;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <GWASelectorOptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(retain, nonatomic) id option; // @synthesize option=_option;
- (void).cxx_destruct;
- (id)rightImageView;
- (id)leftImageView;
- (id)rightImageWithCaptionView;
- (id)dividerView;
- (id)inkTouchController;
- (void)updateImagesWithRightAlignedSelectionIcon;
- (void)updateImagesWithLeftAlignedSelectionIcon;
- (void)updateImages;
- (void)initViews;
- (long long)uiReference;
- (_Bool)editable;
- (id)rightImageWithCaption;
- (id)icon;
- (id)subtitleText;
- (id)descriptionInfoMessage;
- (id)titleText;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)layoutViewWithCompactUI;
- (id)warningText;
- (void)optionTapped;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initOption:(id)arg1 colorGroup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

