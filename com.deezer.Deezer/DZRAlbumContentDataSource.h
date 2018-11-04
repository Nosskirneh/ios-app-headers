//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsDataSourceAbstract.h"

#import "ObservationKeeperDelegate-Protocol.h"

@class DeezerAlbum, NSString, ObservationKeeper;

@interface DZRAlbumContentDataSource : DZRLibraryItemsDataSourceAbstract <ObservationKeeperDelegate>
{
    DeezerAlbum *_album;
    ObservationKeeper *_tracksObservationKeeper;
    ObservationKeeper *_loadingObservationKeeper;
}

@property(retain, nonatomic) ObservationKeeper *loadingObservationKeeper; // @synthesize loadingObservationKeeper=_loadingObservationKeeper;
@property(retain, nonatomic) ObservationKeeper *tracksObservationKeeper; // @synthesize tracksObservationKeeper=_tracksObservationKeeper;
@property(retain, nonatomic) DeezerAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)observationKeeper:(id)arg1 didObserveChange:(id)arg2 ofValueWithKeyPath:(id)arg3 forObject:(id)arg4;
- (void)filterLibraryItemsAndScrollToTop:(_Bool)arg1;
- (void)sortAndFilterLibraryItems;
- (void)refreshData;
- (_Bool)isFetching;
- (void)dealloc;
- (id)initWithAlbum:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

