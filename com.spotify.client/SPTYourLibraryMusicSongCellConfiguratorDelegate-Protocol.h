//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUETrackPreview, SPTYourLibraryMusicSongCellConfigurator, SPTYourLibraryMusicSongsEntitySectionHeaderView, UITableViewCell, UIView;
@protocol SPTYourLibraryMusicSongsSectionViewModel;

@protocol SPTYourLibraryMusicSongCellConfiguratorDelegate <NSObject>
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didTapOnEntitySectionHeader:(SPTYourLibraryMusicSongsEntitySectionHeaderView *)arg2 withViewModel:(id <SPTYourLibraryMusicSongsSectionViewModel>)arg3;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 mainSectionHeaderButton:(UIView *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 trailingSectionHeaderButton:(UIView *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didSwipeCell:(UITableViewCell *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didEndAudioPreview:(GLUETrackPreview *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 didStartAudioPreview:(GLUETrackPreview *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 trackPreview:(GLUETrackPreview *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 banButton:(UIView *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 likeButton:(UIView *)arg2;
- (void)songCellConfigurator:(SPTYourLibraryMusicSongCellConfigurator *)arg1 contextMenuButton:(UIView *)arg2;
@end

