//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

#import "LoaderDelegate-Protocol.h"
#import "PushRequestProtocol-Protocol.h"
#import "SectionsPaginationProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class InboxLoader, NSArray, NSMutableArray, NSString, UIButton, UILabel, UISearchBar;

@interface ANGInboxViewController : ANGSectionedContentViewController <SectionsPaginationProtocol, PushRequestProtocol, LoaderDelegate, UISearchBarDelegate>
{
    InboxLoader *_inboxLoader;
    NSMutableArray *_displaySections;
    NSArray *_inboxSections;
    UISearchBar *_searchBar;
    UILabel *_emptyInboxLabel;
    UIButton *_enablePushButton;
}

@property(retain, nonatomic) UIButton *enablePushButton; // @synthesize enablePushButton=_enablePushButton;
@property(retain, nonatomic) UILabel *emptyInboxLabel; // @synthesize emptyInboxLabel=_emptyInboxLabel;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *inboxSections; // @synthesize inboxSections=_inboxSections;
@property(retain, nonatomic) NSMutableArray *displaySections; // @synthesize displaySections=_displaySections;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)supportsEmptyView;
- (_Bool)showRefreshControl;
- (void)didReceiveMemoryWarning;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (void)deleteSection:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)filterSectionsWithText:(id)arg1;
- (struct CGRect)previewingContextFrameFromLocation:(struct CGPoint)arg1;
- (id)previewingObjectFromLocation:(struct CGPoint)arg1 confirmActionRef:(CDUnknownBlockType *)arg2;
- (void)updateInboxArrayFromNotification:(_Bool)arg1;
- (void)updateInboxArray;
- (void)removeNoInbox;
- (void)didFinishPushRequestWithStatus:(_Bool)arg1;
- (void)enablePushPermissions:(id)arg1;
- (void)refreshEnablePushButton;
- (void)addNoInboxScreen;
- (void)reloadView;
- (void)sendSongAction;
- (void)addSendSongButton;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (id)cachedContentSectionContainer;
- (void)didHandlePaginatingSections:(id)arg1;
- (id)loader;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableViewStyle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

