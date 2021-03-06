//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsDataSourceAbstract.h"

#import "ObservationKeeperDelegate-Protocol.h"

@class DeezerTalkShow, NSString, ObservationKeeper;

@interface DZRLegacyTalkShowContentDataSource : DZRLibraryItemsDataSourceAbstract <ObservationKeeperDelegate>
{
    DeezerTalkShow *_show;
    ObservationKeeper *_episodesObservationKeeper;
}

@property(retain, nonatomic) ObservationKeeper *episodesObservationKeeper; // @synthesize episodesObservationKeeper=_episodesObservationKeeper;
@property(retain, nonatomic) DeezerTalkShow *show; // @synthesize show=_show;
- (void).cxx_destruct;
- (id)titleForHeaderAtSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)sortAndFilterLibraryItems;
- (void)observationKeeper:(id)arg1 didObserveChange:(id)arg2 ofValueWithKeyPath:(id)arg3 forObject:(id)arg4;
- (_Bool)hasData;
- (void)refreshData;
- (_Bool)isFetching;
- (void)dealloc;
- (id)initWithTalkShow:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

