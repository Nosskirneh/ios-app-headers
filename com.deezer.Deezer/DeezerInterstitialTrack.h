//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerExternalTrack.h"

#import "DZRPlayableInterstitialObject-Protocol.h"

@class MPMediaItemArtwork, NSString, NSURL;

@interface DeezerInterstitialTrack : DeezerExternalTrack <DZRPlayableInterstitialObject>
{
    NSURL *_interstitialCoverURL;
    NSURL *_interstitialRedirectURL;
    NSURL *_interstitialClickCommandURL;
    NSURL *_interstitialDeeplinkURL;
    NSURL *_interstitialCountPixelURL;
    NSURL *_interstitialPixelAgence;
    NSString *_interstitialCampaignId;
}

+ (id)audioInterstitialCampaignIdInDictionary:(id)arg1;
+ (id)audioInterstitialPixelAgenceInDictionary:(id)arg1;
+ (id)audioInterstitialCountPixelURLInDictionary:(id)arg1;
+ (id)audioInterstitialTextInDictionary:(id)arg1;
+ (id)audioInterstitialDeeplinkURLInDictionary:(id)arg1;
+ (id)audioInterstitialClickCommandURLInDictionary:(id)arg1;
+ (id)audioInterstitialRedirectURLInDictionary:(id)arg1;
+ (id)audioInterstitialCoverURLInDictionary:(id)arg1;
+ (id)audioInterstitialDownloadURLInDictionary:(id)arg1;
+ (id)createTrackFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *interstitialCampaignId; // @synthesize interstitialCampaignId=_interstitialCampaignId;
@property(retain, nonatomic) NSURL *interstitialPixelAgence; // @synthesize interstitialPixelAgence=_interstitialPixelAgence;
@property(retain, nonatomic) NSURL *interstitialCountPixelURL; // @synthesize interstitialCountPixelURL=_interstitialCountPixelURL;
@property(retain, nonatomic) NSURL *interstitialDeeplinkURL; // @synthesize interstitialDeeplinkURL=_interstitialDeeplinkURL;
@property(retain, nonatomic) NSURL *interstitialClickCommandURL; // @synthesize interstitialClickCommandURL=_interstitialClickCommandURL;
@property(retain, nonatomic) NSURL *interstitialRedirectURL; // @synthesize interstitialRedirectURL=_interstitialRedirectURL;
@property(retain, nonatomic) NSURL *interstitialCoverURL; // @synthesize interstitialCoverURL=_interstitialCoverURL;
- (void).cxx_destruct;
- (double)interstitialDuration;
- (_Bool)allowsAds;
- (id)coverUrl;
- (id)downloadableForInterstitial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MPMediaItemArtwork *nowPlayingArtwork;
@property(readonly) Class superclass;

@end
