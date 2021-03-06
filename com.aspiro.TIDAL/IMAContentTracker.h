//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAJavascriptSession, NSArray, NSTimer;
@protocol IMAContentPlayhead;

@interface IMAContentTracker : NSObject
{
    NSObject<IMAContentPlayhead> *_contentPlayhead;
    NSArray *_cuePoints;
    IMAJavascriptSession *_session;
    NSTimer *_contentPlayheadTimer;
    double _previousTime;
}

+ (_Bool)validCuePoints:(id)arg1;
@property(nonatomic) double previousTime; // @synthesize previousTime=_previousTime;
@property(retain, nonatomic) NSTimer *contentPlayheadTimer; // @synthesize contentPlayheadTimer=_contentPlayheadTimer;
@property(retain, nonatomic) IMAJavascriptSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSArray *cuePoints; // @synthesize cuePoints=_cuePoints;
@property(nonatomic) __weak NSObject<IMAContentPlayhead> *contentPlayhead; // @synthesize contentPlayhead=_contentPlayhead;
- (void).cxx_destruct;
- (double)cuePointWithOldTime:(double)arg1 newTime:(double)arg2;
- (void)sendContentTimeUpdateMessage;
- (void)stopTracking;
- (void)startTracking;
- (void)dealloc;
- (id)initWithContentPlayhead:(id)arg1 cuePoints:(id)arg2 session:(id)arg3;

@end

