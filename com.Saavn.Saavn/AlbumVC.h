//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AlbumVC : DetailVC <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool shouldFetchData;
    _Bool isOffline;
    _Bool isViewDownloadOnly;
    _Bool playlistSaveInProgress;
    _Bool fetchingSuggestions;
    _Bool hasRecos;
    NSMutableArray *suggestions;
    NSMutableDictionary *suggestionsModule;
    _Bool updatingLibraryAlbum;
    _Bool libraryUpdateCompleted;
    _Bool _isOpenedFromDownloadsSection;
    NSString *_albumId;
    NSString *_albumName;
    NSString *_imageUrl;
}

@property(retain) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain) NSString *albumId; // @synthesize albumId=_albumId;
@property(nonatomic) _Bool isOpenedFromDownloadsSection; // @synthesize isOpenedFromDownloadsSection=_isOpenedFromDownloadsSection;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)updateLibraryAlbum;
- (void)libraryUpdate:(id)arg1;
- (_Bool)isUnavailable;
- (id)getAlbumData;
- (id)getAlbumWithOutModules;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleRemoteAPI:(id)arg1 withContent:(id)arg2;
- (id)createModules;
- (void)addCompleteAlbumRow;
- (void)initHeaderActions;
- (void)initData;
- (void)initModules;
- (void)initWithLibraryAlbum:(id)arg1 withSongs:(id)arg2;
- (void)initWithOfflineAlbum:(id)arg1;
- (void)initWithLibraryAlbum:(id)arg1;
- (void)parseAlbumData:(id)arg1;
- (void)fetchAlbumData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

