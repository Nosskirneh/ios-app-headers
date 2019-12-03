//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFBaseHeaderController.h"

@class SPTPodcastHeaderForegroundView, UIColor, VISREFCustomBackButton, VISREFGradientBackgroundView;
@protocol GLUEImageLoader, GLUETheme, SPTPodcastHeaderContentView, SPTPodcastTestManager;

@interface SPTPodcastHeaderController : VISREFBaseHeaderController
{
    double _headerHeight;
    double _navigationBarHeight;
    VISREFGradientBackgroundView *_backgroundView;
    id <SPTPodcastHeaderContentView> _contentView;
    SPTPodcastHeaderForegroundView *_foregroundView;
    VISREFCustomBackButton *_backButton;
    UIColor *_associatedColor;
    UIColor *_vibrantColor;
    id <GLUETheme> _theme;
    id <GLUEImageLoader> _imageLoader;
    double _navigationBarGradientEndPoint;
    double _currentProgress;
    id <SPTPodcastTestManager> _podcastTestManager;
}

@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) double navigationBarGradientEndPoint; // @synthesize navigationBarGradientEndPoint=_navigationBarGradientEndPoint;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIColor *vibrantColor; // @synthesize vibrantColor=_vibrantColor;
@property(retain, nonatomic) UIColor *associatedColor; // @synthesize associatedColor=_associatedColor;
@property(retain, nonatomic) VISREFCustomBackButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) SPTPodcastHeaderForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) id <SPTPodcastHeaderContentView> contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VISREFGradientBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (void)updateProgressPositionsIfNeeded;
- (void)extractColorFromImage:(id)arg1;
- (void)updateColorsWithImage:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)navigationBarHeightDidChange:(double)arg1;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
- (double)totalHeaderHeight;
- (double)minimumContentHeight;
- (double)minimumHeight;
- (id)provideNavigationBarGradientOverlay;
- (double)provideHeaderHeight;
- (id)provideContentView;
- (void)setup;
- (id)initWithTheme:(id)arg1 glueImageLoader:(id)arg2 podcastTestManager:(id)arg3;

@end

