//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray;

@interface _TtC4WiMP20RecentActivityModule : UIViewController
{
    // Error parsing type: , name: itemId
    // Error parsing type: , name: activityItems
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isHidden
    // Error parsing type: , name: collectionViewFlowLayout.storage
    // Error parsing type: , name: collectionView.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden;
@property(nonatomic, copy) NSArray *activityItems; // @synthesize activityItems;
- (void)refreshData;
@property(nonatomic) double heightConstraint;
@property(nonatomic, copy) id itemId; // @synthesize itemId;

@end

