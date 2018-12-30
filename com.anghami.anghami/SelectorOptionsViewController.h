//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnghamiTableViewController.h"

@class NSArray, Selector, UINavigationController;

@interface SelectorOptionsViewController : AnghamiTableViewController
{
    Selector *_contextSelector;
    UINavigationController *_pushingNavBar;
    NSArray *_listOfOptions;
}

@property(retain) NSArray *listOfOptions; // @synthesize listOfOptions=_listOfOptions;
@property(retain) UINavigationController *pushingNavBar; // @synthesize pushingNavBar=_pushingNavBar;
@property(retain) Selector *contextSelector; // @synthesize contextSelector=_contextSelector;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dismissView;
- (void)viewDidLoad;

@end
