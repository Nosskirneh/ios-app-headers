//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, Urn;
@protocol PlayQueueDelegate, _TtP8Features13PlayQueueItem_;

@protocol PlayQueueDataSource
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) id <_TtP8Features13PlayQueueItem_> initialItem;
@property(nonatomic) __weak id <PlayQueueDelegate> delegate;
@property(readonly, nonatomic) Urn *origin;
- (NSString *)accessibilityLabelForItem:(id <_TtP8Features13PlayQueueItem_>)arg1;
- (void)paginateFromItem:(id <_TtP8Features13PlayQueueItem_>)arg1;
- (id <_TtP8Features13PlayQueueItem_>)itemAfterItem:(id <_TtP8Features13PlayQueueItem_>)arg1;
- (id <_TtP8Features13PlayQueueItem_>)itemBeforeItem:(id <_TtP8Features13PlayQueueItem_>)arg1;
- (void)performInitialQueueSync;
@end
