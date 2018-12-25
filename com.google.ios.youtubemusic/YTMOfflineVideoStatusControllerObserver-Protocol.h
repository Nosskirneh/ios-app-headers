//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTMOfflineVideoMetadata, YTMOfflineVideoStatusController;

@protocol YTMOfflineVideoStatusControllerObserver <NSObject>

@optional
- (void)offlineVideoStatusController:(YTMOfflineVideoStatusController *)arg1 didDeleteOfflineVideoWithVideoID:(NSString *)arg2;
- (void)offlineVideoStatusController:(YTMOfflineVideoStatusController *)arg1 didUpdateOfflineVideoMetadata:(YTMOfflineVideoMetadata *)arg2;
@end
