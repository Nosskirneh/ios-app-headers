//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMUIProperties.h"

@class NSString;

@interface IMUITimerProperties : IMUIProperties
{
    _Bool _shouldDisplayTimer;
    double _timerDuration;
    NSString *_timerAction;
    double _timerDelay;
}

@property(nonatomic) _Bool shouldDisplayTimer; // @synthesize shouldDisplayTimer=_shouldDisplayTimer;
@property(nonatomic) double timerDelay; // @synthesize timerDelay=_timerDelay;
@property(retain, nonatomic) NSString *timerAction; // @synthesize timerAction=_timerAction;
@property(nonatomic) double timerDuration; // @synthesize timerDuration=_timerDuration;
- (void).cxx_destruct;

@end

