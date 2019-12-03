//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailVC.h"

#import "LyricsParserDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LyricsVC, NSDictionary, NSMutableDictionary, NSString, SaavnVC_n;

@interface SongVC2 : DetailVC <LyricsParserDelegate, UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long recoSection;
    NSString *trackingIdStr;
    NSMutableDictionary *suggestionsModule;
    LyricsVC *lyricsVC;
    _Bool isFetchingLyrics;
    _Bool isLyricsDataFetched;
    long long lyricsModuleIndex;
    NSDictionary *lyricsDict;
    int _songPosition;
    NSString *songId;
    SaavnVC_n *parentVC;
    NSString *_parentIdStr;
    NSString *_songName;
    NSString *_songImage;
    NSString *_referralType;
    NSString *_referralName;
}

@property(nonatomic) int songPosition; // @synthesize songPosition=_songPosition;
@property(retain, nonatomic) NSString *referralName; // @synthesize referralName=_referralName;
@property(retain, nonatomic) NSString *referralType; // @synthesize referralType=_referralType;
@property(retain, nonatomic) NSString *songImage; // @synthesize songImage=_songImage;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *parentIdStr; // @synthesize parentIdStr=_parentIdStr;
@property(retain, nonatomic) SaavnVC_n *parentVC; // @synthesize parentVC;
@property(retain, nonatomic) NSString *songId; // @synthesize songId;
- (void).cxx_destruct;
- (void)initWithSong:(id)arg1;
- (void)dismissView;
- (void)trackUIEvent:(id)arg1;
- (void)setTrackingIdPrefix;
- (void)playTapped;
- (void)reloadLyricsCellIfFailed;
- (void)LyricsParserFailed:(id)arg1;
- (void)LyricsParserSuccess:(id)arg1;
- (void)parseLyricsResults:(id)arg1 forModule:(long long)arg2;
- (void)loadFullLyricsView:(id)arg1 withIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)followUpdate:(id)arg1;
- (void)libraryUpdate:(id)arg1;
- (void)playAllRecos:(id)arg1;
- (id)getHeaderActionForRemoteAPI:(id)arg1 withContent:(id)arg2;
- (id)getContentFromRemoteAPI:(id)arg1 withResponseDict:(id)arg2;
- (id)getClientModule:(id)arg1 withModule:(id)arg2;
- (id)getSong;
- (id)getSongWithoutModules;
- (id)createModule;
- (id)combineArtists:(id)arg1;
- (void)initHeaderActions;
- (void)initData;
- (void)addMoreFromLyricsAtLast;
- (void)initModules;
- (void)prepareAndSetData;
- (void)parseData:(id)arg1;
- (void)fetchData;
- (void)setCurrentViewType;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
