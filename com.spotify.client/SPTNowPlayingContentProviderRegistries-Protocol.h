//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingBarContentProviderRegistry, SPTNowPlayingCarouselContentProviderRegistry, SPTNowPlayingShowsFormatDecorationContentProviderRegistry;

@protocol SPTNowPlayingContentProviderRegistries <NSObject>
@property(readonly, nonatomic) id <SPTNowPlayingShowsFormatDecorationContentProviderRegistry> showsFormatDecorationContentProviderRegistry;
@property(readonly, nonatomic) id <SPTNowPlayingCarouselContentProviderRegistry> showsFormatCarouselContentProviderRegistry;
@property(readonly, nonatomic) id <SPTNowPlayingCarouselContentProviderRegistry> carouselContentProviderRegistry;
@property(readonly, nonatomic) id <SPTNowPlayingBarContentProviderRegistry> barContentProviderRegistry;
@end

