//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSString, SPTShowsFormatEntityViewDownloadCell, SPTShowsFormatEntityViewModel, SPTShowsFormatLogger;
@protocol GLUEImageLoader;

@interface SPTShowsFormatEntityViewDataSource : NSObject <UICollectionViewDataSource>
{
    SPTShowsFormatEntityViewDownloadCell *_downloadHeader;
    SPTShowsFormatEntityViewModel *_viewModel;
    SPTShowsFormatLogger *_logger;
    id <GLUEImageLoader> _glueImageLoader;
}

+ (void)registerClassesForReuseWithCollectionView:(id)arg1;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTShowsFormatLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTShowsFormatEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak SPTShowsFormatEntityViewDownloadCell *downloadHeader; // @synthesize downloadHeader=_downloadHeader;
- (void).cxx_destruct;
- (void)didToggleDownloadSwitch:(id)arg1;
- (struct CGSize)imageSizeForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)indexPathForIncludesRow;
- (id)indexPathForDownloadRow;
- (id)indexPathForSponsoredRow;
- (id)includesRowForCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)sponsoredRowForCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (id)downloadRowForCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithViewModel:(id)arg1 logger:(id)arg2 glueImageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

