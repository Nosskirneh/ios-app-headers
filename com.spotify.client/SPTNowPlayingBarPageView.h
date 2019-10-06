//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPPageView.h"

#import "SPTNowPlayingBarPageModelDelegate-Protocol.h"
#import "SPTNowPlayingTestManagerObserver-Protocol.h"
#import "SPTPlayerTrackScrollPageView-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, NSURL, SPTNowPlayingBarPageModel, SPTTheme, UILabel;
@protocol SPTNowPlayingTestManager, SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingBarPageView : SPPageView <SPTNowPlayingBarPageModelDelegate, SPTNowPlayingTestManagerObserver, SPTPlayerTrackScrollPageView, SPTThemableView>
{
    _Bool _coverArtHidden;
    NSURL *_trackURL;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingBarPageModel *_model;
    SPTTheme *_theme;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    struct CGRect _coverArtAreaBounds;
}

@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingBarPageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) struct CGRect coverArtAreaBounds; // @synthesize coverArtAreaBounds=_coverArtAreaBounds;
@property(nonatomic, getter=isCoverArtHidden) _Bool coverArtHidden; // @synthesize coverArtHidden=_coverArtHidden;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
- (void).cxx_destruct;
- (void)nowPlayingTestManagerDidEnableBarImprovements:(id)arg1;
- (void)calculateLabelTexts;
- (id)bottomLabelTextAttributes;
- (id)topLabelTextAttributes;
- (id)bottomLabelText;
- (id)topLabelText;
- (id)verboseTopLabelText;
- (void)layoutSubviews;
- (void)nowPlayingBarPageModelDidChangeRemoteDevicesViewVisibility:(id)arg1;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2 model:(id)arg3 theme:(id)arg4 testManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

