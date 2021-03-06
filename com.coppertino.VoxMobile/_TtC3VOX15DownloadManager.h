//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _TtC3VOX15DownloadManager : NSObject
{
    // Error parsing type: , name: QueueFileName
    // Error parsing type: , name: context
    // Error parsing type: , name: contextDeleteObserver
    // Error parsing type: , name: queue
    // Error parsing type: , name: downloadItemsPerTask
    // Error parsing type: , name: operationsForUUID
    // Error parsing type: , name: downloadingURLs
    // Error parsing type: , name: downloadingItems
    // Error parsing type: , name: discretionary
    // Error parsing type: , name: allowsCellular
    // Error parsing type: , name: startNotificationFired
    // Error parsing type: , name: backgroundCompletion
    // Error parsing type: , name: invalidateCompletion
    // Error parsing type: , name: _session
}

+ (id)DownloadsFolderPath;
+ (id)QueueDidFinishNote;
+ (id)QueueDidChangeNote;
+ (long long)TracksRequestLimit;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)handleBackgroundTasksWithSessionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cleanUpDownloadedItems;
@property(nonatomic, readonly) long long totalDownloadedSize;
- (void)totalDownloadedSizeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)downloading:(id)arg1;
- (void)cancelAllCurrentTasks;
- (void)cancelDownloading:(id)arg1;
- (void)removeDownloaded:(id)arg1;
- (void)downloadWithItemContainer:(id)arg1;
- (void)downloadWithDownloadable:(id)arg1;
- (void)rebuildSessionWithAllowsCellular:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setup;
- (void)itemsForTasksWithTasks:(id)arg1:(CDUnknownBlockType)arg2;
- (void)saveQueue;
- (void)dealloc;
- (id)initWithContext:(id)arg1 allowCellular:(_Bool)arg2;
@property(nonatomic) _Bool discretionary; // @synthesize discretionary;
@property(nonatomic, retain) NSMutableArray *downloadingItems; // @synthesize downloadingItems;

@end

