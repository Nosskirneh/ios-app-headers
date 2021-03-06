//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MLPlayer;

@interface MLNerdStatsPlaybackData : NSObject
{
    id <MLPlayer> _player;
    NSString *_videoID;
    NSString *_CPN;
}

+ (id)dataWithPlayer:(id)arg1 videoID:(id)arg2 CPN:(id)arg3;
@property(readonly, nonatomic) NSString *CPN; // @synthesize CPN=_CPN;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) id <MLPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 videoID:(id)arg2 CPN:(id)arg3;

@end

