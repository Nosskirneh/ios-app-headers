//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface WMPAnalyticsServiceStateHolder : NSObject
{
    _Bool _promoItemClicked;
    _Bool _launchEventTagged;
    _Bool _showingNowPlaying;
    _Bool _isPlayQueueVisible;
    NSMutableDictionary *_currentMediaItemDetails;
    NSNumber *_deliveredDuration;
    long long _carouselSwipeCount;
    NSString *_currentSection;
    NSString *_currentScreen;
    NSString *_previousScreen;
    NSString *_lastCategoryIdentifier;
    NSDate *_whatsNewSceneLoadStartTime;
    NSDate *_whatsNewSceneLoadEndTime;
    NSMutableDictionary *_playQueueSummary;
    NSMutableDictionary *_playlistSummary;
    NSMutableDictionary *_artistSummary;
    NSMutableDictionary *_albumSummary;
}

+ (id)sharedState;
@property(retain, nonatomic) NSMutableDictionary *albumSummary; // @synthesize albumSummary=_albumSummary;
@property(retain, nonatomic) NSMutableDictionary *artistSummary; // @synthesize artistSummary=_artistSummary;
@property(retain, nonatomic) NSMutableDictionary *playlistSummary; // @synthesize playlistSummary=_playlistSummary;
@property(retain, nonatomic) NSMutableDictionary *playQueueSummary; // @synthesize playQueueSummary=_playQueueSummary;
@property(retain, nonatomic) NSDate *whatsNewSceneLoadEndTime; // @synthesize whatsNewSceneLoadEndTime=_whatsNewSceneLoadEndTime;
@property(retain, nonatomic) NSDate *whatsNewSceneLoadStartTime; // @synthesize whatsNewSceneLoadStartTime=_whatsNewSceneLoadStartTime;
@property(nonatomic) _Bool isPlayQueueVisible; // @synthesize isPlayQueueVisible=_isPlayQueueVisible;
@property(nonatomic) _Bool showingNowPlaying; // @synthesize showingNowPlaying=_showingNowPlaying;
@property(retain, nonatomic) NSString *lastCategoryIdentifier; // @synthesize lastCategoryIdentifier=_lastCategoryIdentifier;
@property(nonatomic) _Bool launchEventTagged; // @synthesize launchEventTagged=_launchEventTagged;
@property(retain, nonatomic) NSString *previousScreen; // @synthesize previousScreen=_previousScreen;
@property(retain, nonatomic) NSString *currentScreen; // @synthesize currentScreen=_currentScreen;
@property(retain, nonatomic) NSString *currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) _Bool promoItemClicked; // @synthesize promoItemClicked=_promoItemClicked;
@property(nonatomic) long long carouselSwipeCount; // @synthesize carouselSwipeCount=_carouselSwipeCount;
@property(retain, nonatomic) NSNumber *deliveredDuration; // @synthesize deliveredDuration=_deliveredDuration;
@property(retain, nonatomic) NSMutableDictionary *currentMediaItemDetails; // @synthesize currentMediaItemDetails=_currentMediaItemDetails;
- (void).cxx_destruct;
- (id)init;

@end

