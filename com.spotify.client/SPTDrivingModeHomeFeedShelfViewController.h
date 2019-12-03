//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, SPTDrivingModeHomeFeedShelf, SPTDrivingModeHomeFeedShelfView, SPTTheme;
@protocol GLUEImageLoader;

@interface SPTDrivingModeHomeFeedShelfViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    SPTDrivingModeHomeFeedShelf *_shelf;
    SPTTheme *_theme;
    id <GLUEImageLoader> _imageLoader;
    SPTDrivingModeHomeFeedShelfView *_shelfView;
}

@property(readonly, nonatomic) SPTDrivingModeHomeFeedShelfView *shelfView; // @synthesize shelfView=_shelfView;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTDrivingModeHomeFeedShelf *shelf; // @synthesize shelf=_shelf;
- (void).cxx_destruct;
- (double)widthForCell;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithShelf:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
