//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEEntityRowStyle, SPTFreeTierPlaylistButtonSectionHeaderViewStyle, SPTFreeTierPlaylistEditStyle, SPTFreeTierPlaylistFilterSearchBarStyle, SPTFreeTierPlaylistHeaderMetadataViewStyle, SPTFreeTierPlaylistHeaderPageContainerViewStyle, SPTFreeTierPreCurationQuickActionViewStyle, SPTFreeTierPreCurationTheme;
@protocol GLUETheme;

@interface SPTFreeTierPlaylistGLUETheme : GLUEThemeBase
{
    id <GLUETheme> _theme;
    SPTFreeTierPreCurationTheme *_preCurationTheme;
}

@property(retain, nonatomic) SPTFreeTierPreCurationTheme *preCurationTheme; // @synthesize preCurationTheme=_preCurationTheme;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistHeaderMetadataViewStyle *headerMetadataViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistHeaderPageContainerViewStyle *headerPageContainerViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistFilterSearchBarStyle *filterSearchBarStyle;
@property(readonly, copy, nonatomic) GLUEEntityRowStyle *trackRowPreCurationStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedAndBannedQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *banQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *defaultQuickActionViewStyle;
- (id)editCellStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistEditStyle *editStyle;
- (_Bool)isPad;
- (id)headerContentViewStyle;
- (id)legacyFilterBarHeaderViewStyle;
- (id)headerViewStyle;
- (id)headerNavigationBarTitleStyle;
- (id)playlistRecommendationsCloudStyle;
- (id)playlistNoTitleCloudStyle;
- (id)playlistCloudStyle;
- (id)renameFieldStyle;
- (id)sectionHeaderEmptyViewStyleWithEducationalTopMargin:(long long)arg1;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistButtonSectionHeaderViewStyle *sectionLegacyHeaderEmptyViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistButtonSectionHeaderViewStyle *sectionHeaderEmptyViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPlaylistButtonSectionHeaderViewStyle *sectionHeaderViewStyle;
- (id)freeTierSponsoredLogoCellStyle;
- (id)trackRowWithColoredIconStyle;
- (id)initWithParentTheme:(id)arg1 preCurationTheme:(id)arg2;

@end

