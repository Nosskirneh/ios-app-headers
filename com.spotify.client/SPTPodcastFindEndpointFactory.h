//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTPodcastTestManager;

@interface SPTPodcastFindEndpointFactory : NSObject
{
    id <SPTPodcastTestManager> _podcastTestManager;
    NSString *_locale;
}

@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
- (void).cxx_destruct;
- (id)endpointForPodcasts;
- (id)endpointForMusicLegacy;
- (id)endpointForMusic;
- (id)initWithPodcastTestManager:(id)arg1 locale:(id)arg2;

@end

