//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTEntitySeeAllSongsHubsDataSource;

@protocol SPTEntitySeeAllSongsHubsDataSourceDelegate <NSObject>
- (void)entitySeeAllSongsRequireReloadModelWithDataSource:(id <SPTEntitySeeAllSongsHubsDataSource>)arg1;
- (void)entitySeeAllSongsDataSource:(id <SPTEntitySeeAllSongsHubsDataSource>)arg1 didFailToloadModelWithError:(NSError *)arg2;
- (void)entitySeeAllSongsDidLoadModelWithDataSource:(id <SPTEntitySeeAllSongsHubsDataSource>)arg1;
@end

