//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class GLUEButton, GLUEGradientView, NSString, SPTLayoutConstraintBuilder, UILabel;
@protocol GLUETheme, SPTThemableViewLayoutDelegate;

@interface SPTAccountUpsellHeaderView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    GLUEButton *_buyButton;
    UIView *_contentView;
    GLUEGradientView *_backgroundGradientView;
    SPTLayoutConstraintBuilder *_layout;
    id <GLUETheme> _glueTheme;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUEButton *buyButton; // @synthesize buyButton=_buyButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setBuyButtonHidden:(_Bool)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (id)layoutForView;
- (void)invalidateConstraints;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

