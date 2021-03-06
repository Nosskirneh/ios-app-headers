//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary;

@interface EDAMNoteCollectionCounts : NSObject <NSCoding>
{
    NSDictionary *__notebookCounts;
    NSDictionary *__tagCounts;
    int __trashCount;
    _Bool __notebookCounts_isset;
    _Bool __tagCounts_isset;
    _Bool __trashCount_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetTrashCount;
- (_Bool)trashCountIsSet;
@property(nonatomic, getter=trashCount, setter=setTrashCount:) int trashCount; // @dynamic trashCount;
- (void)unsetTagCounts;
- (_Bool)tagCountsIsSet;
@property(retain, nonatomic, getter=tagCounts, setter=setTagCounts:) NSDictionary *tagCounts; // @dynamic tagCounts;
- (void)unsetNotebookCounts;
- (_Bool)notebookCountsIsSet;
@property(retain, nonatomic, getter=notebookCounts, setter=setNotebookCounts:) NSDictionary *notebookCounts; // @dynamic notebookCounts;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotebookCounts:(id)arg1 tagCounts:(id)arg2 trashCount:(int)arg3;

@end

