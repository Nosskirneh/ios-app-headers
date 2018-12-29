//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMACuepoint : NSObject
{
    _Bool _played;
    double _startTime;
    double _endTime;
}

@property(nonatomic, getter=isPlayed) _Bool played; // @synthesize played=_played;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;

@end
