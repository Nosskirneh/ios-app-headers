//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NIActionsDataSource-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol NITableViewModelDelegate;

@interface NITableViewModel : NSObject <NIActionsDataSource, UITableViewDataSource>
{
    _Bool _sectionIndexShowsSearch;
    _Bool _sectionIndexShowsSummary;
    int _sectionIndexType;
    id <NITableViewModelDelegate> _delegate;
    CDUnknownBlockType _createCellBlock;
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    NSDictionary *_sectionPrefixToSectionIndex;
}

@property(retain, nonatomic) NSDictionary *sectionPrefixToSectionIndex; // @synthesize sectionPrefixToSectionIndex=_sectionPrefixToSectionIndex;
@property(retain, nonatomic) NSArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) CDUnknownBlockType createCellBlock; // @synthesize createCellBlock=_createCellBlock;
@property(nonatomic) __weak id <NITableViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool sectionIndexShowsSummary; // @synthesize sectionIndexShowsSummary=_sectionIndexShowsSummary;
@property(readonly, nonatomic) _Bool sectionIndexShowsSearch; // @synthesize sectionIndexShowsSearch=_sectionIndexShowsSearch;
@property(readonly, nonatomic) int sectionIndexType; // @synthesize sectionIndexType=_sectionIndexType;
- (void).cxx_destruct;
- (void)setSectionIndexType:(int)arg1 showsSearch:(_Bool)arg2 showsSummary:(_Bool)arg3;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setSectionsWithArray:(id)arg1;
- (void)_compileSectionIndex;
- (void)_compileDataWithSectionedArray:(id)arg1;
- (void)_compileDataWithListArray:(id)arg1;
- (void)_resetCompiledData;
- (id)init;
- (id)initWithSectionedArray:(id)arg1 delegate:(id)arg2;
- (id)initWithListArray:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)elementWithID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

