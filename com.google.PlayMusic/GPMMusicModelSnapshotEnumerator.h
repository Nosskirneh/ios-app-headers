//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMSectionedEnumerator.h"

@class GPDBQuery, GPMMusicModelSnapshot;

@interface GPMMusicModelSnapshotEnumerator : GPMSectionedEnumerator
{
    GPMMusicModelSnapshot *_snapshot;
    GPDBQuery *_enumerationPreparedQuery;
    _Bool _completed;
}

- (void).cxx_destruct;
- (id)nextObjectWithSection:(unsigned long long *)arg1;
- (id)sectionIndexes;
- (id)initWithSnapshot:(id)arg1 enumerationPreparedQuery:(id)arg2;
- (id)init;

@end

