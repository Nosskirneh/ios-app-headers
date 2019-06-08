//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsSectionInfo-Protocol.h"

@class NSArray, NSString;

@interface PrivateFetchedResultsControllerSectionInfo : NSObject <NSFetchedResultsSectionInfo>
{
    NSString *_name;
    NSString *_indexTitle;
    unsigned long long _numberOfObjects;
    NSArray *_objects;
}

+ (id)convertFromSection:(id)arg1;
+ (id)convertSections:(id)arg1 withModelMapping:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(retain, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

