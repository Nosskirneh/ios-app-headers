//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "IASKViewController-Protocol.h"

@class IASKMultipleValueSelection, IASKSettingsReader, IASKSpecifier, NSString;
@protocol IASKSettingsStore;

@interface IASKSpecifierValuesViewController : UITableViewController <IASKViewController>
{
    _Bool _didFirstLayout;
    IASKSpecifier *_currentSpecifier;
    IASKSettingsReader *_settingsReader;
    id <IASKSettingsStore> _settingsStore;
    IASKMultipleValueSelection *_selection;
}

@property(nonatomic) _Bool didFirstLayout; // @synthesize didFirstLayout=_didFirstLayout;
@property(readonly, nonatomic) IASKMultipleValueSelection *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) id <IASKSettingsStore> settingsStore; // @synthesize settingsStore=_settingsStore;
@property(retain, nonatomic) IASKSettingsReader *settingsReader; // @synthesize settingsReader=_settingsReader;
@property(retain, nonatomic) IASKSpecifier *currentSpecifier; // @synthesize currentSpecifier=_currentSpecifier;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

