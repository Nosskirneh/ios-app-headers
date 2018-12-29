//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSSortDescriptor;

@interface ProfileSectionPreviewItems : NSObject
{
    NSManagedObjectContext *_context;
    NSArray *_sectionItems;
    NSSortDescriptor *_sortDescriptor;
    unsigned long long _deleteMaxCount;
}

@property(readonly, nonatomic) unsigned long long deleteMaxCount; // @synthesize deleteMaxCount=_deleteMaxCount;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(readonly, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)deletePreviewItems;
- (id)initWithManagedObjectContext:(id)arg1 sectionItems:(id)arg2 sortDescriptor:(id)arg3 deleteMaxCount:(unsigned long long)arg4;

@end
