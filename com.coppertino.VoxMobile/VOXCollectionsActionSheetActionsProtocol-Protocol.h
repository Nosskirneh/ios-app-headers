//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VOXCollectionEntity;
@protocol _TtP3VOX21DownloadableContainer_;

@protocol VOXCollectionsActionSheetActionsProtocol <NSObject>
- (void)removeDownloadedItemsInContainer:(id <_TtP3VOX21DownloadableContainer_>)arg1;
- (void)downloadItemsInContainer:(id <_TtP3VOX21DownloadableContainer_>)arg1;
- (void)actionSheetActionViewCollectionClear:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionViewCollectionOnSoundCloud:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionAddCollectionToQueue:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionPlayNextCollection:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionPlayCollection:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionDeleteCollection:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionSelectCollection:(VOXCollectionEntity *)arg1;
- (void)actionSheetActionDisMiss;
@end

