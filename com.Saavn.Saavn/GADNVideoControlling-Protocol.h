//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol GADNVideoControlling <NSObject>
- (_Bool)clickToExpandEnabled;
- (long long)videoPlaybackState;
- (_Bool)customControlsEnabled;
- (double)aspectRatio;
- (_Bool)hasVideoContent;
- (void)setInitialStateWithConfigurations:(NSDictionary *)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setMute:(_Bool)arg1;
@end
