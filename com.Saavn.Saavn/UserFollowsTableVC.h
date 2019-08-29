//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListTableVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;

@interface UserFollowsTableVC : ListTableVC <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *sortOptions;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)followUpdate:(id)arg1;
- (void)libraryUpdate:(id)arg1;
- (void)sortBy:(id)arg1;
- (void)parseResults:(id)arg1;
- (void)fetchDataForPage:(unsigned long long)arg1;
- (void)initSortTabs;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

