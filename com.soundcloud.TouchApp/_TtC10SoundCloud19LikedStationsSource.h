//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ContentSourceDelegate;

@interface _TtC10SoundCloud19LikedStationsSource : NSObject
{
    // Error parsing type: , name: fetcher
    // Error parsing type: , name: likedStationsFetcher
    // Error parsing type: , name: likedStations
    // Error parsing type: , name: playbackService
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: likedStationSyncService
    // Error parsing type: , name: playbackNotificationsObserver
    // Error parsing type: , name: delegate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)loadContent;
-     // Error parsing type: (null), name: objectAtIndexedSubscript:
@property(nonatomic, readonly) id sectionInfo;
@property(nonatomic, readonly) unsigned long long count;
@property(nonatomic) __weak id <ContentSourceDelegate> delegate; // @synthesize delegate;

@end
