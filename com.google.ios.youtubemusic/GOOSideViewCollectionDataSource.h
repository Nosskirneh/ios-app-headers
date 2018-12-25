//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class GOOSideViewController, NSString;

@interface GOOSideViewCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    GOOSideViewController *_sideViewController;
}

+ (void)registerClassesForCollectionView:(id)arg1;
+ (id)itemDataSourceWithSideViewController:(id)arg1;
+ (id)profileDataSourceWithSideViewController:(id)arg1;
@property(nonatomic) __weak GOOSideViewController *sideViewController; // @synthesize sideViewController=_sideViewController;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithSideViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

