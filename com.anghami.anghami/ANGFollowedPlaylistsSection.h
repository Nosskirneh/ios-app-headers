//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGLocalPlaylistsSection.h"

@interface ANGFollowedPlaylistsSection : ANGLocalPlaylistsSection
{
}

- (id)realmPlaylistsQueryPredicates;
- (id)followPlaylistsTipCell:(id)arg1;
- (_Bool)shouldShowEmptyPlaylistsCell;
- (_Bool)isEmptyPlaylistCell:(long long)arg1;
- (id)cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (double)heightForContentRow:(id)arg1 tableView:(id)arg2;
- (unsigned long long)rowCountWithTotalItems:(unsigned long long)arg1 cap:(unsigned long long)arg2;
- (unsigned long long)type;

@end

