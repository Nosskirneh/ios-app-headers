//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLocalFilesImportModelItem.h"

#import "SPTLocalFilesImportModelItemSong-Protocol.h"

@class NSString, NSURL, SPTLocalFilesImportModelItemAlbum;

@interface SPTLocalFilesImportModelItemSong : SPTLocalFilesImportModelItem <SPTLocalFilesImportModelItemSong>
{
    SPTLocalFilesImportModelItemAlbum *_album;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) SPTLocalFilesImportModelItemAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (id)parent;
- (long long)numberOfTracks;
- (id)children;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSString *albumName;
- (id)initWithURL:(id)arg1 title:(id)arg2 album:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) _Bool isPartiallySelected;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end

