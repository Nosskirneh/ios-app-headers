//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, UICollectionView;

@interface _TtC4WiMP19MixCollectionModule : UIViewController
{
    // Error parsing type: , name: loadMorePath
    // Error parsing type: , name: eventMetadata
    // Error parsing type: , name: itemId
    // Error parsing type: , name: mixes
    // Error parsing type: , name: isFullscreen
    // Error parsing type: , name: scrollDirection
    // Error parsing type: , name: navigationHelper
    // Error parsing type: , name: collectionViewFlowLayout.storage
    // Error parsing type: , name: collectionView.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) UICollectionView *collectionView;
- (void)refreshData;
@property(nonatomic) double heightConstraint;
@property(nonatomic, copy) id itemId; // @synthesize itemId;
@property(nonatomic, copy) NSDictionary *eventMetadata; // @synthesize eventMetadata;

@end

