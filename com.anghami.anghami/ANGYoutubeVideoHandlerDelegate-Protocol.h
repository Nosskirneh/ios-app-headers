//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ANGYoutubeVideoHandler;

@protocol ANGYoutubeVideoHandlerDelegate
- (void)youtubeVideoEnded:(ANGYoutubeVideoHandler *)arg1;
- (void)youtubeVideoEndedBuffering:(ANGYoutubeVideoHandler *)arg1;
- (void)youtubeVideoBeganBuffering:(ANGYoutubeVideoHandler *)arg1;
- (void)youtubeVideoLoadSuccessful:(ANGYoutubeVideoHandler *)arg1;
- (void)failedToLoadYoutubeVideo:(ANGYoutubeVideoHandler *)arg1;
@end

