//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLBackgroundDownloadFetcher, NSError;

@protocol MLBackgroundDownloadFetcherDelegate <NSObject>
- (void)backgroundDownloadFetcher:(MLBackgroundDownloadFetcher *)arg1 didFailWithError:(NSError *)arg2;
- (void)backgroundDownloadFetcherDidComplete:(MLBackgroundDownloadFetcher *)arg1;
- (void)backgroundDownloadFetcherDidStart:(MLBackgroundDownloadFetcher *)arg1;
@end

