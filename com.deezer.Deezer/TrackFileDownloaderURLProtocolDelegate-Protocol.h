//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURLResponse, TrackFileDownloaderURLProtocol;

@protocol TrackFileDownloaderURLProtocolDelegate <NSObject>
- (void)connectionDidFinishLoading:(TrackFileDownloaderURLProtocol *)arg1;
- (void)connection:(TrackFileDownloaderURLProtocol *)arg1 didReceiveDataWithLength:(unsigned long long)arg2;
- (void)connection:(TrackFileDownloaderURLProtocol *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)connection:(TrackFileDownloaderURLProtocol *)arg1 didFailWithError:(NSError *)arg2;
@end
