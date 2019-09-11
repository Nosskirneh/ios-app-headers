//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SPTEpisode-Protocol.h"

@class NSString;

@protocol SPTPodcastEpisode <NSObject, SPTEpisode, NSCopying>
+ (NSString *)stringFromTimeInterval:(double)arg1;
@property(readonly, nonatomic) double listeningProgress;
@property(readonly, nonatomic) unsigned long long syncProgress;
@property(readonly, nonatomic, getter=isUnplayed) _Bool unplayedEpisode;
@property(readonly, nonatomic, getter=isNewEpisode) _Bool newEpisode;
@property(readonly, nonatomic) _Bool inCollection;
@end

