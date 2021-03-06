//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface DZRAudioPlayerTrackChange : NSObject
{
    long long _reason;
    double _elapsedTimePosition;
    double _totalDuration;
    double _listeningDuration;
    NSError *_error;
}

+ (id)selectionChangeAfterTime:(double)arg1;
+ (id)selectionChange;
+ (id)skipPreviousChangeAfterTime:(double)arg1;
+ (id)skipPreviousChange;
+ (id)skipNextChangeAfterTime:(double)arg1;
+ (id)skipNextChange;
+ (id)naturalChangeAfterTime:(double)arg1;
+ (id)naturalChange;
+ (id)changeWithReason:(long long)arg1 time:(double)arg2;
+ (id)selectionChangeForPlayback:(id)arg1;
+ (id)skipPreviousChangeForPlayback:(id)arg1;
+ (id)skipNextChangeForPlayback:(id)arg1;
+ (id)naturalChangeForPlayback:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double listeningDuration; // @synthesize listeningDuration=_listeningDuration;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double elapsedTimePosition; // @synthesize elapsedTimePosition=_elapsedTimePosition;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)initWithReason:(long long)arg1;

@end

