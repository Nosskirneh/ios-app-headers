//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError;

@protocol SPTHiddenContentModelDelegate <NSObject>
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didFailToLoadArtistsWithError:(NSError *)arg2;
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didLoadArtists:(NSArray *)arg2;
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didFailToLoadTracksWithError:(NSError *)arg2;
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didLoadTracks:(NSArray *)arg2;
@end

