//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SaavnVCAdaptor.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UIView;

@interface ProInvoicesVC : SaavnVCAdaptor <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *invoiceTable;
    NSArray *invoiceArray;
    UIView *footer;
    _Bool footerTapped;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)footerTapped:(id)arg1;
- (void)showEmptyState;
- (void)parseReciepts:(id)arg1;
- (void)fetchInvoices;
- (void)showWebView:(id)arg1;
- (void)showFooter;
- (void)showLoader;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

