//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MySpinGestureRecognizerManager : NSObject
{
    NSMutableArray *adaptedGesturesList;
    double timestamp;
    NSMutableArray *_bufferedTouches;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *bufferedTouches; // @synthesize bufferedTouches=_bufferedTouches;
- (void).cxx_destruct;
- (_Bool)canBeginGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerStateInProgress:(id)arg1;
- (id)mySpinGestureRecognizersForView:(id)arg1;
- (_Bool)handleGestureEventsForTouch:(id)arg1 forGestureRecognizers:(id)arg2;
- (void)forceDelayedGestureRecognizersToFail:(id)arg1;
- (void)handleDelayedEventsByGestureRecognizer:(id)arg1;
- (_Bool)handleGestureRecognizersWithEvents:(id)arg1;

@end

