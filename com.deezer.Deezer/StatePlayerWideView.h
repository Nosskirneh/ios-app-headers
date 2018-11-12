//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDView.h"

@class IDImage, IDIntegerGauge, IDLabel, IDToolbarButton;

@interface StatePlayerWideView : IDView
{
    IDIntegerGauge *_progressBar;
    IDImage *_shutter;
    IDImage *_deezer_bg_big;
    IDImage *_deezer_bg_small_250;
    IDImage *_albumArtBig;
    IDImage *_albumArtSmall;
    IDImage *_deezerLogo;
    IDImage *_iconAlbumInfo_yellow;
    IDLabel *_labelAlbumInfo;
    IDImage *_iconArtistInfo_yellow;
    IDLabel *_labelArtistInfo;
    IDImage *_iconTitleInfo_yellow;
    IDLabel *_labelTitleInfo;
    IDImage *_iconArtistInfoSplitscreen;
    IDLabel *_labelArtistInfoSplitScreen;
    IDImage *_iconTitleInfoSplitScreen;
    IDLabel *_labelTitleInfoSplitScreen;
    IDLabel *_labelErrorMessage;
    IDLabel *_labelElaspedTime;
    IDLabel *_labelRemainingTime;
    IDLabel *_labelPlayerStatus;
    IDLabel *_labelLoadingLevel;
    IDToolbarButton *_tbbNowPlaying;
    IDToolbarButton *_tbbSearch;
    IDToolbarButton *_tbbPlayLists;
    IDToolbarButton *_tbbFavoriteAlbums;
    IDToolbarButton *_tbbRadio;
    IDToolbarButton *_tbbWhatsHot;
    IDToolbarButton *_tbbSkipPrev;
    IDToolbarButton *_tbbSkipNext;
}

@property(retain) IDToolbarButton *tbbSkipNext; // @synthesize tbbSkipNext=_tbbSkipNext;
@property(retain) IDToolbarButton *tbbSkipPrev; // @synthesize tbbSkipPrev=_tbbSkipPrev;
@property(retain) IDToolbarButton *tbbWhatsHot; // @synthesize tbbWhatsHot=_tbbWhatsHot;
@property(retain) IDToolbarButton *tbbRadio; // @synthesize tbbRadio=_tbbRadio;
@property(retain) IDToolbarButton *tbbFavoriteAlbums; // @synthesize tbbFavoriteAlbums=_tbbFavoriteAlbums;
@property(retain) IDToolbarButton *tbbPlayLists; // @synthesize tbbPlayLists=_tbbPlayLists;
@property(retain) IDToolbarButton *tbbSearch; // @synthesize tbbSearch=_tbbSearch;
@property(retain) IDToolbarButton *tbbNowPlaying; // @synthesize tbbNowPlaying=_tbbNowPlaying;
@property(retain) IDLabel *labelLoadingLevel; // @synthesize labelLoadingLevel=_labelLoadingLevel;
@property(retain) IDLabel *labelPlayerStatus; // @synthesize labelPlayerStatus=_labelPlayerStatus;
@property(retain) IDLabel *labelRemainingTime; // @synthesize labelRemainingTime=_labelRemainingTime;
@property(retain) IDLabel *labelElaspedTime; // @synthesize labelElaspedTime=_labelElaspedTime;
@property(retain) IDLabel *labelErrorMessage; // @synthesize labelErrorMessage=_labelErrorMessage;
@property(retain) IDLabel *labelTitleInfoSplitScreen; // @synthesize labelTitleInfoSplitScreen=_labelTitleInfoSplitScreen;
@property(retain) IDImage *iconTitleInfoSplitScreen; // @synthesize iconTitleInfoSplitScreen=_iconTitleInfoSplitScreen;
@property(retain) IDLabel *labelArtistInfoSplitScreen; // @synthesize labelArtistInfoSplitScreen=_labelArtistInfoSplitScreen;
@property(retain) IDImage *iconArtistInfoSplitscreen; // @synthesize iconArtistInfoSplitscreen=_iconArtistInfoSplitscreen;
@property(retain) IDLabel *labelTitleInfo; // @synthesize labelTitleInfo=_labelTitleInfo;
@property(retain) IDImage *iconTitleInfo_yellow; // @synthesize iconTitleInfo_yellow=_iconTitleInfo_yellow;
@property(retain) IDLabel *labelArtistInfo; // @synthesize labelArtistInfo=_labelArtistInfo;
@property(retain) IDImage *iconArtistInfo_yellow; // @synthesize iconArtistInfo_yellow=_iconArtistInfo_yellow;
@property(retain) IDLabel *labelAlbumInfo; // @synthesize labelAlbumInfo=_labelAlbumInfo;
@property(retain) IDImage *iconAlbumInfo_yellow; // @synthesize iconAlbumInfo_yellow=_iconAlbumInfo_yellow;
@property(retain) IDImage *deezerLogo; // @synthesize deezerLogo=_deezerLogo;
@property(retain) IDImage *albumArtSmall; // @synthesize albumArtSmall=_albumArtSmall;
@property(retain) IDImage *albumArtBig; // @synthesize albumArtBig=_albumArtBig;
@property(retain) IDImage *deezer_bg_small_250; // @synthesize deezer_bg_small_250=_deezer_bg_small_250;
@property(retain) IDImage *deezer_bg_big; // @synthesize deezer_bg_big=_deezer_bg_big;
@property(retain) IDImage *shutter; // @synthesize shutter=_shutter;
@property(retain) IDIntegerGauge *progressBar; // @synthesize progressBar=_progressBar;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 hmiProvider:(id)arg4;

@end
