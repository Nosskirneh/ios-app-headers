//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL, Urn;

@protocol TrackDownloaderDelegate <NSObject>
- (void)didFailDownloadingTrackForUrn:(Urn *)arg1 withError:(NSError *)arg2;
- (void)didFinishDownloadingTrackForUrn:(Urn *)arg1 toLocation:(NSURL *)arg2;
@end

