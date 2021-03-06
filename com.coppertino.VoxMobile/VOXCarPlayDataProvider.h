//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSString;

@interface VOXCarPlayDataProvider : NSObject <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    NSArray *_localStations;
    NSArray *_freeStations;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *freeStations; // @synthesize freeStations=_freeStations;
@property(retain, nonatomic) NSArray *localStations; // @synthesize localStations=_localStations;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (id)favoriteRadioStations;
- (void)loadFreeStationsWithComplition:(CDUnknownBlockType)arg1;
- (id)collectionTracksAtIndex:(unsigned long long)arg1;
- (id)collectionAtIndex:(unsigned long long)arg1;
- (id)collections;
- (void)tracksForArtist:(unsigned long long)arg1 album:(unsigned long long)arg2 complitionHandler:(CDUnknownBlockType)arg3;
- (id)albumsForArtistAtIndex:(unsigned long long)arg1;
- (id)albumForArtist:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)artistAtIndex:(unsigned long long)arg1;
- (id)musicLibraryArtists;
- (id)musicLibraryAlbumsForArtist:(id)arg1;
- (id)streamTracks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

