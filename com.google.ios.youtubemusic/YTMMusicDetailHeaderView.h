//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMFlexibleHeaderBackgroundView.h"

#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTMMusicDetailHeaderButtonsBylineViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, QTMButton, UIColor, UILabel, UIView, YTFormattedStringLabel, YTICommand, YTIHeaderFabRenderer, YTIMenuRenderer, YTImageView, YTMBevelView, YTMMusicDetailHeaderButtonsBylineView, YTMMusicDetailHeaderBylineView, YTMPotentialOverlaysStackView, YTMResizeableFabView, YTMTransferButton;
@protocol YTMMusicDetailHeaderViewDelegate, YTResponder;

@interface YTMMusicDetailHeaderView : YTMFlexibleHeaderBackgroundView <YTFormattedStringLabelDelegate, YTMMusicDetailHeaderButtonsBylineViewDelegate>
{
    id <YTResponder> _parentResponder;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_navBarTitleLabel;
    YTFormattedStringLabel *_secondTitleLabel;
    YTMResizeableFabView *_floatingActionButtonView;
    QTMButton *_actionButton;
    NSMutableArray *_appBarButtons;
    NSMutableArray *_headerButtons;
    NSMutableArray *_subtitleViews;
    NSMutableArray *_iconViews;
    YTMBevelView *_bevelView;
    UIView *_contentView;
    YTMPotentialOverlaysStackView *_overlaysStackView;
    UIView *_buttonsBylineBackgroundView;
    UIView *_contentOverlay;
    id <YTMMusicDetailHeaderViewDelegate> _delegate;
    YTImageView *_thumbnailView;
    YTIHeaderFabRenderer *_headerFabRenderer;
    NSArray *_headerButtonRenderers;
    NSArray *_appBarButtonRenderers;
    YTIMenuRenderer *_menuRenderer;
    UIColor *_sampledColor;
    YTMTransferButton *_transferButton;
    YTMMusicDetailHeaderBylineView *_bylineView;
    YTMMusicDetailHeaderButtonsBylineView *_buttonsBylineView;
    YTICommand *_bylineNavigationEndpoint;
    NSArray *_subtitleIcons;
}

@property(retain, nonatomic) NSArray *subtitleIcons; // @synthesize subtitleIcons=_subtitleIcons;
@property(retain, nonatomic) YTICommand *bylineNavigationEndpoint; // @synthesize bylineNavigationEndpoint=_bylineNavigationEndpoint;
@property(readonly, nonatomic) YTMMusicDetailHeaderButtonsBylineView *buttonsBylineView; // @synthesize buttonsBylineView=_buttonsBylineView;
@property(readonly, nonatomic) YTMMusicDetailHeaderBylineView *bylineView; // @synthesize bylineView=_bylineView;
@property(retain, nonatomic) YTMTransferButton *transferButton; // @synthesize transferButton=_transferButton;
@property(retain, nonatomic) UIColor *sampledColor; // @synthesize sampledColor=_sampledColor;
@property(retain, nonatomic) YTIMenuRenderer *menuRenderer; // @synthesize menuRenderer=_menuRenderer;
@property(retain, nonatomic) NSArray *appBarButtonRenderers; // @synthesize appBarButtonRenderers=_appBarButtonRenderers;
@property(retain, nonatomic) NSArray *headerButtonRenderers; // @synthesize headerButtonRenderers=_headerButtonRenderers;
@property(retain, nonatomic) YTIHeaderFabRenderer *headerFabRenderer; // @synthesize headerFabRenderer=_headerFabRenderer;
@property(readonly, nonatomic) YTImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) __weak id <YTMMusicDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleEndpointInToggleButtonRenderer:(id)arg1 headerButtonRendererIndex:(unsigned long long)arg2;
- (void)handleEndpointInButtonRenderer:(id)arg1;
- (void)didTapAppBarButton:(id)arg1;
- (void)didTapHeaderButton:(id)arg1;
- (void)didTapFab;
- (id)createButtonFromToggleButtonRenderer:(id)arg1 action:(SEL)arg2;
- (id)createButtonFromButtonRenderer:(id)arg1 action:(SEL)arg2;
- (void)replaceButtons:(id)arg1 inButtonArray:(id)arg2 aboveNavBar:(_Bool)arg3 action:(SEL)arg4;
- (void)didTapActionButton;
- (double)rightComponentHeight;
- (double)smallAlbumThumbnailWithMaxWidth:(double)arg1;
- (double)largeAlbumThumbnailWithMaxWidth:(double)arg1;
- (void)didTapBylineView;
- (double)bylineHeight;
- (double)iconMaxY;
- (_Bool)shouldHideNavigationBarTitle;
- (double)maximumHeight;
- (void)detailHeaderButtonsBylineView:(id)arg1 didTapButtonRenderer:(id)arg2;
- (void)detailHeaderButtonsBylineViewDidTapToggleButton:(id)arg1;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)setOverlayRenderers:(id)arg1;
- (void)setSecondTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)layoutTitleAndSubtitleWithLargeTitle:(_Bool)arg1 landscape:(_Bool)arg2 inset:(double)arg3;
- (void)layoutArrayButtonsInLandscape:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

