//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFBaseHeaderController.h"

#import "VISREFHubHeaderController-Protocol.h"

@class NSString, VISREFCustomBackButton, VISREFFullBleedContentView, VISREFGradientBackgroundView, VISREFHeaderView, VISREFPlayButtonForegroundView;
@protocol GLUETheme, HUBComponentEventHandler, HUBComponentModel, SPTFreeTierEntityContextMenuButtonViewModel, SPTFreeTierEntityFeedbackButtonViewModel, VISREFPlayButtonTestManager;

@interface SPTVISREFFullBleedHeaderController : VISREFBaseHeaderController <VISREFHubHeaderController>
{
    double _headerHeight;
    double _navigationBarHeight;
    VISREFGradientBackgroundView *_backgroundView;
    VISREFFullBleedContentView *_contentView;
    VISREFPlayButtonForegroundView *_foregroundView;
    VISREFCustomBackButton *_backButton;
    id <GLUETheme> _theme;
    id <HUBComponentEventHandler> _eventHandler;
    id <HUBComponentModel> _model;
    CDUnknownBlockType _backButtonTappedBlock;
    id <SPTFreeTierEntityFeedbackButtonViewModel> _followButtonModel;
    id <SPTFreeTierEntityContextMenuButtonViewModel> _contextMenuButtonModel;
    id <VISREFPlayButtonTestManager> _playButtonTestManager;
    double _navigationBarGradientEndPoint;
    CDStruct_5a28e70a _backButtonGlyphOffsetRange;
    CDStruct_5a28e70a _backButtonGlyphProtectionAlphaRange;
    CDStruct_5a28e70a _backButtonFadeOutAlphaRange;
}

+ (struct CGSize)preferredHeaderSizeForContainerViewSize:(struct CGSize)arg1;
@property(nonatomic) CDStruct_5a28e70a backButtonFadeOutAlphaRange; // @synthesize backButtonFadeOutAlphaRange=_backButtonFadeOutAlphaRange;
@property(nonatomic) CDStruct_5a28e70a backButtonGlyphProtectionAlphaRange; // @synthesize backButtonGlyphProtectionAlphaRange=_backButtonGlyphProtectionAlphaRange;
@property(nonatomic) CDStruct_5a28e70a backButtonGlyphOffsetRange; // @synthesize backButtonGlyphOffsetRange=_backButtonGlyphOffsetRange;
@property(nonatomic) double navigationBarGradientEndPoint; // @synthesize navigationBarGradientEndPoint=_navigationBarGradientEndPoint;
@property(retain, nonatomic) id <VISREFPlayButtonTestManager> playButtonTestManager; // @synthesize playButtonTestManager=_playButtonTestManager;
@property(retain, nonatomic) id <SPTFreeTierEntityContextMenuButtonViewModel> contextMenuButtonModel; // @synthesize contextMenuButtonModel=_contextMenuButtonModel;
@property(retain, nonatomic) id <SPTFreeTierEntityFeedbackButtonViewModel> followButtonModel; // @synthesize followButtonModel=_followButtonModel;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) VISREFCustomBackButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) VISREFPlayButtonForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) VISREFFullBleedContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VISREFGradientBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (void)updateAccessibilityElements;
- (void)navigationBarHeightDidChange:(double)arg1;
- (void)setImage:(id)arg1;
- (void)configureWithModel:(id)arg1 eventHandler:(id)arg2;
- (double)minimumContentHeight;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
@property(readonly, nonatomic) double minimumHeight;
- (void)backButtonTapped:(id)arg1;
- (void)headerPrimaryButtonTapped:(id)arg1;
- (id)buttonModelFromModel:(id)arg1;
- (id)extractNavigationBarGradientFromBackgroundGradient;
- (void)updatePlayButtonGlyph:(id)arg1;
- (void)updateProgressPositions;
- (void)setupForegroundView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 playButtonTestManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VISREFHeaderView *view;

@end

