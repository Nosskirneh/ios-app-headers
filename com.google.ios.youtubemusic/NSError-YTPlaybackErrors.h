//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (YTPlaybackErrors)
+ (_Bool)isNetworkError:(id)arg1;
+ (id)descriptionForFairPlayError:(long long)arg1;
+ (id)descriptionForPlaybackError:(long long)arg1;
+ (id)playbackErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)playbackErrorWithCode:(long long)arg1 playabilityStatus:(id)arg2;
+ (id)playbackErrorWithPlayabilityStatus:(id)arg1;
+ (id)playbackErrorWithMediaError:(id)arg1;
+ (id)playbackErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)playbackErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)playbackErrorWithCode:(long long)arg1;
- (_Bool)playbackErrorCanSkipToRecover;
@end
