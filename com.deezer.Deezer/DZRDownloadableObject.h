//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRPlayableObject-Protocol.h"

@class MPMediaItemArtwork, NSString, NSURL;
@protocol DZRPlayableObject;

@interface DZRDownloadableObject : NSObject <DZRPlayableObject>
{
    _Bool _needDecryption;
    _Bool _canBeUsedOffline;
    _Bool _requiresNativePlayback;
    _Bool _hostedExternally;
    NSString *_mimeType;
    long long _qualityLevel;
    unsigned long long _expectedContentSize;
    double _announcedDuration;
    id <DZRPlayableObject> _playableObject;
    NSURL *_downloadURL;
    DZRDownloadableObject *_fallbackObject;
}

+ (id)downloadURLForPlayable:(id)arg1 quality:(long long)arg2 isTalkShow:(_Bool)arg3;
+ (void)changeQuality:(long long)arg1;
+ (long long)preferredQuality;
+ (id)downloadableForInterstitialWithPlayableInterstitialObject:(id)arg1;
+ (id)downloadableForExternalWithPlayableExternalObject:(id)arg1;
+ (id)downloadableForPreviewWithDownloadableObject:(id)arg1;
+ (id)downloadableWithPlayableObject:(id)arg1 qualityLevel:(long long)arg2 canBeUsedOffline:(_Bool)arg3;
+ (id)sharedCache;
@property(retain, nonatomic) DZRDownloadableObject *fallbackObject; // @synthesize fallbackObject=_fallbackObject;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) id <DZRPlayableObject> playableObject; // @synthesize playableObject=_playableObject;
@property(nonatomic, getter=isHostedExternally) _Bool hostedExternally; // @synthesize hostedExternally=_hostedExternally;
@property(readonly, nonatomic) _Bool requiresNativePlayback; // @synthesize requiresNativePlayback=_requiresNativePlayback;
@property(readonly, nonatomic) _Bool canBeUsedOffline; // @synthesize canBeUsedOffline=_canBeUsedOffline;
@property(readonly, nonatomic) double announcedDuration; // @synthesize announcedDuration=_announcedDuration;
@property(readonly, nonatomic) unsigned long long expectedContentSize; // @synthesize expectedContentSize=_expectedContentSize;
@property(readonly, nonatomic) _Bool needDecryption; // @synthesize needDecryption=_needDecryption;
@property(readonly, nonatomic) long long qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)uniqueID;
- (id)objectID;
- (id)domain;
- (id)fallbackDownloadableObject;
- (id)initInterstitialWithPlayableInterstitialObject:(id)arg1;
- (id)initExternalWithPlayableExternalObject:(id)arg1;
- (id)initForPreviewWithPlayableObject:(id)arg1;
- (id)initWithPlayableObject:(id)arg1 qualityLevel:(long long)arg2 canBeUsedOffline:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)loggingFormat;
- (id)downloadID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MPMediaItemArtwork *nowPlayingArtwork;
@property(readonly) Class superclass;

@end

