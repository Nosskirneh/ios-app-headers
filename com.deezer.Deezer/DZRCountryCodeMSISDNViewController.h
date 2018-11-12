//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DZRMSISDNSearchBar, NSArray, NSMutableArray, NSString, UITableView;
@protocol DZRCountryCodeMSISDNViewControllerDelegate;

@interface DZRCountryCodeMSISDNViewController : CommonController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    _Bool _isFiltering;
    UITableView *_tableView;
    DZRMSISDNSearchBar *_searchBar;
    NSArray *_dataSource;
    NSMutableArray *_countryPhoneCodes;
    NSMutableArray *_filteredCountryPhoneCodes;
    id <DZRCountryCodeMSISDNViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <DZRCountryCodeMSISDNViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFiltering; // @synthesize isFiltering=_isFiltering;
@property(retain, nonatomic) NSMutableArray *filteredCountryPhoneCodes; // @synthesize filteredCountryPhoneCodes=_filteredCountryPhoneCodes;
@property(retain, nonatomic) NSMutableArray *countryPhoneCodes; // @synthesize countryPhoneCodes=_countryPhoneCodes;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak DZRMSISDNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)filteredCountries:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)configureCell:(id)arg1 forCountry:(id)arg2;
- (id)getCountry:(unsigned long long)arg1;
- (void)updateDataSource;
- (void)viewDidLoad;
- (void)dismiss:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
