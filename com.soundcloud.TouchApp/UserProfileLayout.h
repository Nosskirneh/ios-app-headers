//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ColumnLayout.h"

@interface UserProfileLayout : ColumnLayout
{
}

- (double)insetWidth;
- (double)numberOfPlaylistColumns;
- (void)recalculateMaxForPlaylists;
- (_Bool)multipleColumns;
- (void)recalculateMaxForTracks;
- (id)filterOutFooterFromAttributes:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayoutWithOffset:(double)arg1;
- (id)init;

@end

