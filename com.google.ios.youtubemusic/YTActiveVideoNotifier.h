//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, YTPlayerResponse;
@protocol YTActiveVideoProvider;

@interface YTActiveVideoNotifier : NSObject
{
    NSHashTable *_observers;
    YTPlayerResponse *_contentPlayerResponse;
    GIMMe *_gimme;
    id <YTActiveVideoProvider> _activeVideoProvider;
}

@property(nonatomic) __weak id <YTActiveVideoProvider> activeVideoProvider; // @synthesize activeVideoProvider=_activeVideoProvider;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyActiveVideoDidChange;
- (void)removeActiveVideoNotifierObserver:(id)arg1;
- (void)addActiveVideoNotifierObserver:(id)arg1;
- (void)activeVideoDidChangeToPlayingWithContentPlayerResponse:(id)arg1;
- (id)activeVideoContentPlayerResponse;
- (id)activeVideoNavEndpoint;
- (_Bool)isActiveVideoPlayable;
- (unsigned long long)activeVideoIndex;
- (id)activePlaylistID;
- (double)activeVideoMediaTime;
- (id)activeVideoID;
- (id)init;

@end

