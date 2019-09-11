//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEAccessoryIconButtonStyle, GLUEAccessoryIconViewStyle, GLUEButtonStyle, GLUECalendarThumbnailViewStyle, GLUECollectionViewStyle, GLUEEmptyStateViewStyle, GLUEEntityCardStyle, GLUEEntityRowStyle, GLUEGradientStyle, GLUEHeaderBackgroundStyle, GLUELabelStyle, GLUENavigationRowStyle, GLUEOfflineSyncStatusViewStyle, GLUEPressedAnimatorStyle, GLUESectionHeaderStyle, GLUETableViewCellStyle, GLUETableViewStyle, GLUETrackAccessoryLabelStyle, GLUETrackCloudStyle, GLUETrackMultipleAccessoriesViewStyle, GLUETrackPreviewStyle, GLUEVideoThumbnailViewStyle, SPTTheme, UIColor;
@protocol GLUEThemeObserver;

@protocol GLUETheme <NSObject>
@property(readonly, nonatomic) SPTTheme *sptTheme;
- (void)notifyObservers;
- (void)removeObserver:(id <GLUEThemeObserver>)arg1;
- (void)addObserver:(id <GLUEThemeObserver>)arg1;
- (GLUEGradientStyle *)grayHazeGradientStyle;
- (GLUEGradientStyle *)purpleLakeGradientStyle;
- (GLUEGradientStyle *)aquaticGradientStyle;
- (GLUEEmptyStateViewStyle *)noResultsEmptyStateViewStyle;
- (GLUEEmptyStateViewStyle *)defaultEmptyStateViewStyle;
- (GLUEPressedAnimatorStyle *)pressedAnimatorButtonStyle;
- (GLUEPressedAnimatorStyle *)pressedAnimatorCardStyle;
- (GLUEPressedAnimatorStyle *)pressedAnimatorEntityRowStyle;
- (GLUEPressedAnimatorStyle *)pressedAnimatorDefaultStyle;
- (GLUEHeaderBackgroundStyle *)headerBackgroundStyle;
- (GLUETrackCloudStyle *)trackCloudStyleWithNumberOfLines:(unsigned long long)arg1 showOnlyTrackNames:(_Bool)arg2 showNumberedList:(_Bool)arg3;
- (GLUEEntityCardStyle *)cardStyleWithImageMask:(_Bool)arg1 imageDecoration:(_Bool)arg2 titleStyleDescription:(_Bool)arg3 subtitleStyleMetadata:(_Bool)arg4;
- (GLUEEntityCardStyle *)radioGenreCardStyle;
- (GLUEEntityCardStyle *)radioArtistCardStyle;
- (GLUEEntityCardStyle *)showCardStyle;
- (GLUEEntityCardStyle *)userCardStyle;
- (GLUEEntityCardStyle *)artistCardStyle;
- (GLUEEntityCardStyle *)playlistCardStyle;
- (GLUEEntityCardStyle *)albumCardStyle;
- (GLUEEntityCardStyle *)baseCardStyle;
- (GLUEButtonStyle *)tertiaryFilledButtonStyle;
- (GLUEButtonStyle *)tertiaryOutlineButtonStyle;
- (GLUEButtonStyle *)tertiaryBorderedButtonStyle;
- (GLUEButtonStyle *)tertiaryTextLightButtonStyle;
- (GLUEButtonStyle *)tertiaryTextButtonStyle;
- (GLUEButtonStyle *)secondaryLightButtonStyle;
- (GLUEButtonStyle *)secondaryButtonStyle;
- (GLUEButtonStyle *)primaryWhiteButtonStyle;
- (GLUEButtonStyle *)primaryGreenButtonStyle;
- (GLUECalendarThumbnailViewStyle *)calendarViewThumbnailStyle;
- (GLUEVideoThumbnailViewStyle *)videoThumbnailStyle;
- (GLUETrackMultipleAccessoriesViewStyle *)trackMultipleAccessoriesDefaultStyle;
- (GLUETrackAccessoryLabelStyle *)trackAccessoryLabelDefaultStyle;
- (GLUEOfflineSyncStatusViewStyle *)offlineSyncStatusViewDefaultStyle;
- (GLUETrackPreviewStyle *)trackPreviewAccessoryDefaultStyle;
- (GLUEAccessoryIconButtonStyle *)feedbackAccessoryButtonStyle;
- (GLUEAccessoryIconButtonStyle *)contextMenuAccessoryButtonStyle;
- (GLUEAccessoryIconButtonStyle *)defaultAccessoryButtonStyle;
- (GLUEAccessoryIconViewStyle *)accessoryIconViewNavigationStyle;
- (GLUEAccessoryIconViewStyle *)accessoryIconViewContextMenuStyleWithIconColor:(UIColor *)arg1;
- (GLUEAccessoryIconViewStyle *)accessoryIconViewContextMenuStyle;
- (GLUEAccessoryIconViewStyle *)accessoryIconViewDefaultStyle;
- (GLUEEntityRowStyle *)trackRowStyleWithSubtitleStyleMetadata:(_Bool)arg1 transparentBackground:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3 shouldTrailingAccessoryIgnoreState:(_Bool)arg4;
- (GLUEEntityRowStyle *)calendarRowStyleWithSubtitleStyleMetadata:(_Bool)arg1 transparentBackground:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3 shouldTrailingAccessoryIgnoreState:(_Bool)arg4;
- (GLUEEntityRowStyle *)rowStyleWithImageMask:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 transparentBackground:(_Bool)arg3 shouldAddTrailingMargin:(_Bool)arg4 shouldTrailingAccessoryIgnoreState:(_Bool)arg5;
- (GLUEEntityRowStyle *)rowStyleWithImageMask:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 transparentBackground:(_Bool)arg3 shouldAddTrailingMargin:(_Bool)arg4;
- (GLUEEntityRowStyle *)videoRowStyleWithTransparentBackground:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3 shouldTrailingAccessoryIgnoreState:(_Bool)arg4;
- (GLUEEntityRowStyle *)videoRowStyleWithTransparentBackground:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3;
- (GLUEEntityRowStyle *)entityRowVideoStyle;
- (GLUEEntityRowStyle *)entityRowEpisodeStyle;
- (GLUEEntityRowStyle *)entityRowTrackStyle;
- (GLUEEntityRowStyle *)entityRowShowStyle;
- (GLUEEntityRowStyle *)entityRowConcertStyle;
- (GLUEEntityRowStyle *)entityRowUserStyle;
- (GLUEEntityRowStyle *)entityRowArtistStyle;
- (GLUEEntityRowStyle *)entityRowPlaylistStyle;
- (GLUEEntityRowStyle *)entityRowAlbumStyle;
- (GLUEEntityRowStyle *)contextMenuCellDefaultStyle;
- (GLUEAccessoryIconViewStyle *)navigationDisclosureIndicatorStyle;
- (GLUENavigationRowStyle *)navigationCellDefaultStyle;
- (GLUESectionHeaderStyle *)sectionHeaderExtraSmallStyle;
- (GLUESectionHeaderStyle *)sectionHeaderLeftAlignedStyle;
- (GLUESectionHeaderStyle *)sectionHeaderSmallStyle;
- (GLUESectionHeaderStyle *)sectionHeaderLargeStyle;
- (GLUESectionHeaderStyle *)sectionHeaderWithMetadataStyle;
- (GLUESectionHeaderStyle *)sectionHeaderWithSubtitleStyle;
- (GLUESectionHeaderStyle *)sectionHeaderStyle;
- (GLUECollectionViewStyle *)defaultCollectionViewStyle;
- (GLUETableViewCellStyle *)defaultTableViewCellStyle;
- (GLUETableViewStyle *)defaultTableViewStyle;
- (GLUELabelStyle *)defaultRowSubtitleLabelStyle;
- (GLUELabelStyle *)defaultCardSubtitleLabelStyle;
- (GLUELabelStyle *)sectionHeaderLabelStyle;
- (GLUELabelStyle *)buttonSmallLabelStyle;
- (GLUELabelStyle *)buttonLabelStyle;
- (GLUELabelStyle *)microBoldLabelStyle;
- (GLUELabelStyle *)microLabelStyle;
- (GLUELabelStyle *)metadataLabelStyle;
- (GLUELabelStyle *)bodySmallBoldLabelStyle;
- (GLUELabelStyle *)bodySmallLabelStyle;
- (GLUELabelStyle *)bodyMediumBoldLabelStyle;
- (GLUELabelStyle *)bodyMediumLabelStyle;
- (GLUELabelStyle *)headerSmallLabelStyle;
- (GLUELabelStyle *)headerMediumLabelStyle;
- (GLUELabelStyle *)headerLargeLabelStyle;
- (GLUELabelStyle *)heroSmallLabelStyle;
- (GLUELabelStyle *)heroMediumLabelStyle;
- (GLUELabelStyle *)heroLargeLabelStyle;
@end

