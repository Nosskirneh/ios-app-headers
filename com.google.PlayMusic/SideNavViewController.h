//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOSideViewController.h"

#import "GOOSideViewItemDataSource-Protocol.h"
#import "GOOSideViewProfileDataSource-Protocol.h"

@class GOOSideViewItem, NSArray, NSString, QTMSwitch;

@interface SideNavViewController : GOOSideViewController <GOOSideViewItemDataSource, GOOSideViewProfileDataSource>
{
    NSArray *_items;
    GOOSideViewItem *_downloadedOnlyItem;
    GOOSideViewItem *_settingsItem;
    GOOSideViewItem *_feedbackItem;
    QTMSwitch *_downloadedOnlySwitch;
    NSArray *_itemTypes;
}

@property(readonly, nonatomic) NSArray *itemTypes; // @synthesize itemTypes=_itemTypes;
- (void).cxx_destruct;
- (id)sideViewContainer:(id)arg1 profileAtIndex:(long long)arg2;
- (long long)numberOfProfilesInSideViewContainer:(id)arg1;
- (id)sideViewContainer:(id)arg1 itemAtIndexPath:(id)arg2;
- (_Bool)sideViewContainer:(id)arg1 isItemSelectedAtIndexPath:(id)arg2;
- (long long)sideViewContainer:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfItemSectionsInSideViewContainer:(id)arg1;
- (void)showDownloadedOnlyUpsell;
- (void)handleDownloadedOnlyChanged;
- (void)handleDownloadedOnlySwitch;
- (id)sideViewItemWithTitleKey:(id)arg1 imageName:(id)arg2 selectedImageName:(id)arg3;
- (void)buildItems;
- (void)toggleDownloadedOnly;
- (void)dealloc;
- (void)reloadItemData;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

