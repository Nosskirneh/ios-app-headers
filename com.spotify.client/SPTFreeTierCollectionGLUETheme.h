//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEAccessoryIconButtonStyle, SPTFreeTierCollectionFollowButtonStyle, SPTFreeTierCollectionSongsImageStyle, SPTFreeTierPreCurationTheme;
@protocol SPTFreeTierCollectionTestManager, SPTSortingFilteringTheme;

@interface SPTFreeTierCollectionGLUETheme : GLUEThemeBase
{
    _Bool _preCurationEnabled;
    SPTFreeTierPreCurationTheme *_preCurationTheme;
    id <SPTSortingFilteringTheme> _sortingFilteringTheme;
    id <SPTFreeTierCollectionTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTSortingFilteringTheme> sortingFilteringTheme; // @synthesize sortingFilteringTheme=_sortingFilteringTheme;
@property(nonatomic, getter=isPreCurationEnabled) _Bool preCurationEnabled; // @synthesize preCurationEnabled=_preCurationEnabled;
@property(retain, nonatomic) SPTFreeTierPreCurationTheme *preCurationTheme; // @synthesize preCurationTheme=_preCurationTheme;
- (void).cxx_destruct;
- (id)smallRowStyleWithBaseStyle:(id)arg1;
- (id)largeRowStyleWithBaseStyle:(id)arg1;
- (id)rightAlignedEntityRowStyleWithBaseStyle:(id)arg1;
@property(readonly, copy, nonatomic) GLUEAccessoryIconButtonStyle *quickActionIconStyle;
@property(readonly, copy, nonatomic) SPTFreeTierCollectionFollowButtonStyle *followButtonStyle;
@property(readonly, copy, nonatomic) SPTFreeTierCollectionSongsImageStyle *songsImageStyle;
- (id)searchViewStyle;
- (id)filterBarViewControllerStyle;
- (id)chunkyRowStyle;
- (id)entityPageEmptyStateViewStyle;
- (id)songEntityRowStyle;
- (id)emptySongsSectionHeaderStyle;
- (id)entitySectionHeaderStyle;
- (id)songsAlbumEntitySectionHeaderStyle;
- (id)songsArtistEntitySectionHeaderStyle;
- (id)songsEntitySectionHeaderStyleWithEntityRowStyle:(id)arg1;
- (id)songsSectionHeaderStyle;
- (id)artistEntityRowStyleWithRowSize:(long long)arg1;
- (id)albumEntityRowStyleWithRowSize:(long long)arg1;
- (id)backgroundOverlayStyle;
- (id)overlayImageViewStyleWithSolidBackground:(_Bool)arg1 gradientBackground:(_Bool)arg2 baseImageStyle:(id)arg3;
- (id)gradientOverlayImageViewStyleWithImageStyle:(id)arg1;
- (id)solidOverlayImageViewStyleWithImageStyle:(id)arg1;
- (id)overlayImageViewStyleWithImageStyle:(id)arg1;
- (id)entityRowCollectionStyleWithRowSize:(long long)arg1;
- (id)songsHeaderContentViewStyle;
- (id)initWithParentTheme:(id)arg1 andPreCurationTheme:(id)arg2 preCurationEnabled:(_Bool)arg3 sortingFilteringTheme:(id)arg4 testManager:(id)arg5;

@end

