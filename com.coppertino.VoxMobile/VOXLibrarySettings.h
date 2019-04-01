//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSettings.h"

@interface VOXLibrarySettings : VOXSettings
{
    _Bool _hideOnlyLocalWarningBanner;
}

+ (void)changeAndNotifyIn:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool hideOnlyLocalWarningBanner; // @synthesize hideOnlyLocalWarningBanner=_hideOnlyLocalWarningBanner;
- (void)notifyLibraryChange;
@property(nonatomic) _Bool showOnlyDownloadedFiles;
@property(nonatomic) _Bool showSpotifyFiles;
@property(nonatomic) _Bool showYouTube;
@property(nonatomic) _Bool showLoopFiles;
@property(nonatomic) _Bool showLocalFiles;
@property(nonatomic) _Bool canPresentBanner;
@property(nonatomic) _Bool showSoundCloud;
@property(nonatomic) _Bool showITunes;
@property(nonatomic) long long artistViewSortType;
@property(nonatomic) long long tracksSortType;
@property(nonatomic) long long albumsSortType;
@property(nonatomic) long long artistsSortType;
@property(nonatomic) long long albumsViewStyle;
@property(nonatomic) long long libraryType;
- (id)libraryTypeRepresentation;
- (unsigned long long)nextLibraryTypeValue;
- (id)presentationStyles;
- (unsigned long long)nextPresentationValue;
- (_Bool)isRecentlyAddedSortModeTurnedOnForCurrentLibaryType;
- (id)tracksSortDescription;
- (unsigned long long)nextTracksSortValue;
- (id)albumsSortDescription;
- (unsigned long long)nextAlbumsSortValue;
- (id)artistsSortDescription;
- (unsigned long long)nextArtistsSortValue;

@end

