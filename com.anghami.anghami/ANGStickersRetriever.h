//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGImageDownloaderOperation, ANGSong, NSDate;

@interface ANGStickersRetriever : NSObject
{
    ANGImageDownloaderOperation *_downloadOperation;
    _Bool _overlayOperationOngoing;
    _Bool _stickersOperationOngoing;
    ANGStickersRetriever *_selfRef;
    ANGSong *_song;
    NSDate *_retrievalDate;
}

+ (void)deleteBasedOnCreationDate;
+ (void)deleteBasedOnCacheCount;
+ (void)deleteCorruptedPacks;
+ (void)deleteObsoleteStickers;
+ (id)packsForSong:(id)arg1;
+ (void)downloadStickersForSong:(id)arg1;
@property(nonatomic) _Bool stickersOperationOngoing; // @synthesize stickersOperationOngoing=_stickersOperationOngoing;
@property(nonatomic) _Bool overlayOperationOngoing; // @synthesize overlayOperationOngoing=_overlayOperationOngoing;
@property(retain, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
@property(retain, nonatomic) ANGSong *song; // @synthesize song=_song;
@property(retain, nonatomic) ANGStickersRetriever *selfRef; // @synthesize selfRef=_selfRef;
- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultOverlayImage;
- (void)downloadOverlay:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)endOverlayOperationWithImage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)endOverlayOperationWithCallback:(CDUnknownBlockType)arg1;
- (void)possiblyFinish;
- (void)validateAndSavePack:(id)arg1 locations:(id)arg2 allPacksCompleted:(_Bool)arg3;
- (void)getStickersFromLocations:(id)arg1 relatedLogos:(id)arg2;
- (id)reorderPacks:(id)arg1 AccordingToLocations:(id)arg2;
- (void)getWatermarkLocationForSong:(id)arg1 shareType:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly) ANGSong *relatedSong;
- (void)refreshStickersForSong:(id)arg1;

@end

