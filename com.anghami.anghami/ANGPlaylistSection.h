//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGContentSectionList.h"

@interface ANGPlaylistSection : ANGContentSectionList
{
}

- (id)amplitudeEventSectionType;
- (id)cellForObject:(id)arg1 indexPath:(id)arg2 collectionView:(id)arg3;
- (id)cellForObject:(id)arg1 tableView:(id)arg2;
- (double)heightForContentRow:(id)arg1 tableView:(id)arg2;
- (double)itemWidth;
- (_Bool)sectionHasSubtitle;
- (_Bool)sectionHasTitle;
- (_Bool)hasSupertitle;
- (id)initWithPlaylistsArray:(id)arg1;
- (id)objectFromDictionary:(id)arg1;
- (unsigned long long)type;
- (id)initWithSectionDictionary:(id)arg1;

@end
