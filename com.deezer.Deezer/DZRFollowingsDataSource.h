//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemsDataSourceAbstract.h"

#import "_TtP6Deezer21DZRSortableController_-Protocol.h"

@class DeezerUser;

@interface DZRFollowingsDataSource : DZRLibraryItemsDataSourceAbstract <_TtP6Deezer21DZRSortableController_>
{
    DeezerUser *_user;
}

@property(retain, nonatomic) DeezerUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (long long)sortOptionsScreenType;
- (_Bool)ascending;
- (long long)splitMode;
- (id)propertiesToFilter;
- (id)propertiesToSort;
- (_Bool)canDisplayQuickScrollForSortOption:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshData;
- (void)loadData;
- (_Bool)isFetching;
- (void)dealloc;
- (id)initWithUser:(id)arg1 delegate:(id)arg2;

@end

