//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class GLUEButton, NSString, SPTLayoutConstraintBuilder, UIImageView, UILabel;
@protocol GLUETheme, SPTThemableViewLayoutDelegate;

@interface SPTMySPINInfoView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    UIImageView *_spotifyLogotypeImageView;
    UILabel *_titleLabel;
    UILabel *_detailedDescriptionLabel;
    GLUEButton *_actionButton;
    SPTLayoutConstraintBuilder *_layout;
    id <GLUETheme> _glueTheme;
}

@property(readonly, nonatomic) __weak id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *detailedDescriptionLabel; // @synthesize detailedDescriptionLabel=_detailedDescriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *spotifyLogotypeImageView; // @synthesize spotifyLogotypeImageView=_spotifyLogotypeImageView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)createLayout;
- (void)removeViewConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

