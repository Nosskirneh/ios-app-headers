//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMLibraryMusicModelSnapshot.h"

@class NSDictionary;

@interface GPMSectionedLibraryMusicModelSnapshot : GPMLibraryMusicModelSnapshot
{
    NSDictionary *_sectionCounts;
    _Bool _sectionCountsLoaded;
}

- (void).cxx_destruct;
- (id)preboundMutationEnumeratorQuery;
- (id)musicItemsInSection:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)musicItemCountInSection:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (unsigned long long)musicItemCount;

@end
