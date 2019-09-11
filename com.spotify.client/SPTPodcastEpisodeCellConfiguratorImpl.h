//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeCellConfigurator-Protocol.h"

@class NSString, SPTTheme;
@protocol GLUEImageLoader, GLUETheme, SPTExplicitContentAccessManager, SPTPodcastTestManager, SPTPodcastUIButtonsFactory, SPTPodcastUIStringFormatter;

@interface SPTPodcastEpisodeCellConfiguratorImpl : NSObject <SPTPodcastEpisodeCellConfigurator>
{
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
    id <GLUEImageLoader> _imageLoader;
    id <SPTPodcastUIStringFormatter> _stringFormatter;
    id <SPTPodcastTestManager> _testManager;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPodcastUIButtonsFactory> _buttonsFactory;
}

@property(retain, nonatomic) id <SPTPodcastUIButtonsFactory> buttonsFactory; // @synthesize buttonsFactory=_buttonsFactory;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> stringFormatter; // @synthesize stringFormatter=_stringFormatter;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)glueStyle;
- (_Bool)isEpisodeDisabled:(id)arg1;
- (id)downloadButtonForCell:(id)arg1;
- (void)updateOfflineAccessoryButtonInCell:(id)arg1 forStatus:(long long)arg2 withProgress:(double)arg3;
- (void)updateSecondaryActionViewsRightForCell:(id)arg1 atIndexPath:(id)arg2 target:(id)arg3 cellConfiguration:(id)arg4;
- (id)provideSecondaryActionViewsLeftForCellAtIndexPath:(id)arg1 target:(id)arg2 cellConfiguration:(id)arg3;
- (id)configureRegularCell:(id)arg1 atIndexPath:(id)arg2 cellState:(id)arg3 target:(id)arg4;
- (id)configureUnfinishedCell:(id)arg1 atIndexPath:(id)arg2 cellState:(id)arg3 target:(id)arg4;
- (id)configureEpisodeCell:(id)arg1 atIndexPath:(id)arg2 episodeCellState:(id)arg3 target:(id)arg4;
- (Class)cellClass;
- (id)initWithTheme:(id)arg1 glueTheme:(id)arg2 imageLoader:(id)arg3 stringFormatter:(id)arg4 buttonsFactory:(id)arg5 explicitContentAccessManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

