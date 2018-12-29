//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPBasePlaylistCollectionModule.h"

@class NSArray, NSString;

@interface WMPCategoryPlaylistCollectionModule : WMPBasePlaylistCollectionModule
{
    NSArray *_playlistItems;
    NSString *_loadMorePath;
}

@property(retain, nonatomic) NSString *loadMorePath; // @synthesize loadMorePath=_loadMorePath;
@property(retain, nonatomic) NSArray *playlistItems; // @synthesize playlistItems=_playlistItems;
- (void).cxx_destruct;
- (void)fullScreen:(id)arg1;
- (id)createDefaultSortAndRangeParametersWithLimit:(unsigned long long)arg1;
- (void)refreshDataWithSortAndRangeParameters:(id)arg1;
- (void)refreshData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isUsingArrayDatasource;
- (void)loadMoreWithSortAndRangeParameters:(id)arg1;

@end
