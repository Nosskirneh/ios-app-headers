//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZOAlbum, DZOTrack, NSArray, NSObject;

@protocol StateSearchResultsViewControllerDelegate <NSObject>
- (void)searchResultsViewController:(NSObject *)arg1 didSelectTrack:(DZOTrack *)arg2 fromTracks:(NSArray *)arg3;
- (void)searchResultsViewController:(NSObject *)arg1 didSelectAlbum:(DZOAlbum *)arg2;
@end

