//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANGImageDownloadSpec, NSArray, NSString, UINavigationController;

@protocol ActionableItem <NSObject>
- (NSString *)titleText;
- (ANGImageDownloadSpec *)imageDownloadSpecWithSize:(long long)arg1;

@optional
@property(readonly, nonatomic) _Bool isReligious;
- (_Bool)isCurrentlyPlaying;
- (ANGImageDownloadSpec *)contextSheetButtonIconSpec;
- (NSString *)contextSheetButtonLink;
- (NSString *)contextSheetButtonText;
- (void)displayLyrics;
- (_Bool)canDisplayLyrics;
- (void)shuffleAction:(id)arg1;
- (NSArray *)peekPopActions;
- (void)reportBadSongChoiceRadio;
- (_Bool)radioEnabled;
- (_Bool)supportsRBT;
- (void)hideThisChapterFromStory;
- (void)goToEditProfileWithNavigationController:(UINavigationController *)arg1;
- (_Bool)goToAlbumDisabled;
- (void)goToAlbumWithNavigationController:(UINavigationController *)arg1;
- (_Bool)goToArtistDisabled;
- (void)goToArtistWithNavigationController:(UINavigationController *)arg1;
- (void)playRadio;
- (void)playTopSongs;
- (void)playShuffled;
- (void)playNow;
- (void)playNext;
- (void)unfollow;
- (void)followFrom:(NSString *)arg1 disableReporting:(_Bool)arg2;
- (void)follow;
- (_Bool)isFollowed;
- (void)shareWithSource:(NSString *)arg1;
- (void)addToPlaylist;
- (void)unlike;
- (void)likeFrom:(NSString *)arg1 disableReporting:(_Bool)arg2;
- (void)like;
- (_Bool)isLiked;
- (void)removeFromDownloads;
- (_Bool)download;
- (unsigned long long)downloadStatus;
- (NSString *)subtitleText;
- (void)loadData:(void (^)(void))arg1;
@end

