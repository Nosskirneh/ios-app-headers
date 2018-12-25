//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YTPlaybackData, YTVideoResolver;

@protocol YTVideoResolverDelegate <NSObject>
- (void)videoResolver:(YTVideoResolver *)arg1 didError:(NSError *)arg2;
- (void)videoResolver:(YTVideoResolver *)arg1 didResolveVideoWithPlaybackData:(YTPlaybackData *)arg2 reason:(long long)arg3;
- (int)playerVisibilityForVideoResolver:(YTVideoResolver *)arg1;
- (_Bool)isExternalPlaybackActiveForVideoResolver:(YTVideoResolver *)arg1;
@end
