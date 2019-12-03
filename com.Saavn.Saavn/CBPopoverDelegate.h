//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UINavigationController, UIPopoverController, UIViewController;

@interface CBPopoverDelegate : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *tableData;
    UIViewController *parentVC;
    UINavigationController *popNC;
    UIViewController *rootVC;
    struct CGSize popSize;
    unsigned long long direction;
    float popW;
    float popH;
    UIPopoverController *thePopover;
}

@property(retain, nonatomic) UIViewController *parentVC; // @synthesize parentVC;
@property(retain, nonatomic) NSMutableArray *tableData; // @synthesize tableData;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setPopArrow:(unsigned long long)arg1;
- (void)setPopSize:(struct CGSize)arg1;
- (void)pushCustomView:(id)arg1 onTo:(id)arg2 withTitle:(id)arg3 andSubtitle:(id)arg4;
- (id)newPopoverFrom:(id)arg1 withOffset:(struct CGSize)arg2 andTitle:(id)arg3 andSubtitle:(id)arg4 inParent:(id)arg5 withView:(id)arg6;
- (id)newPopoverFrom:(id)arg1 withOffset:(struct CGSize)arg2 andTitle:(id)arg3 andSubtitle:(id)arg4 inParent:(id)arg5 withData:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
